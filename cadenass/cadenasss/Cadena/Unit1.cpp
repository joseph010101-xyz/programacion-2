//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
CCadena *C;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	C=new CCadena();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
    C->Texto = ECad->Text;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
	EResultado->Text = C->Texto;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ContarVocales1Click(TObject *Sender)
{
	EResultado->Text = C->ContarVocales();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Reemplazar1Click(TObject *Sender)
{
	C->Reemplazar(  ECaracter1->Text[1] , ECaracter2->Text[1] );

	EResultado->Text = C->Texto;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ReemplazarPalabra1Click(TObject *Sender)
{
	C->Reemplazar( ECaracter1->Text , ECaracter2->Text );
	EResultado->Text = C->Texto ;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::MayuscualasaigualesyMinusculasdiferentes1Click(TObject *Sender)

{
	C->MayusculaIguales_y_MinusculaDiferentes( ECaracter1->Text );
	EResultado->Text = C->Texto;
}
//---------------------------------------------------------------------------


