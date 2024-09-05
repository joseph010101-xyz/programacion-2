//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UPrincipal.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
CNatural* n;
CNatural* n2;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	n=new CNatural(); // n=0
	n2=new CNatural(100);
	lb_n2->Caption = n->GetN();
	lb_n2->Caption = lb_n2->Caption +" - "+ n2->GetN();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BtnSetNClick(TObject *Sender)
{
   n->SetN(StrToInt(ENumero->Text));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::BtnGetNClick(TObject *Sender)
{
	EResultado->Text=n->GetN();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BtnFactorialClick(TObject *Sender)
{
	EResultado->Text=n->factorial();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::EliminarDigParesClick(TObject *Sender)
{
   n->EliminarDigPares();
   EResultado->Text=n->GetN();

}
//---------------------------------------------------------------------------

void __fastcall TForm1::EliminarDigitoPrimo1Click(TObject *Sender)
{
   EResultado->Text=n->SumarDigNoPrimos();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DigitoMayorClick(TObject *Sender)
{
	EResultado->Text=n->DigitoMayor();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::contarInversionesClick(TObject *Sender)
{
   EResultado->Text=n->contarInversiones(n->GetN());
}
//---------------------------------------------------------------------------

void __fastcall TForm1::VolcarNumerosClick(TObject *Sender)
{
	EResultado->Text=n->VolcarNumeros();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::NumeroPerfectoClick(TObject *Sender)
{
   n->SetN(StrToInt(ENumero->Text));
	if(n->NumeroPerfecto(StrToInt(ENumero->Text))){
		EResultado->Text="true";
	}
	else{
		EResultado->Text="false";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::EliminarRangoClick(TObject *Sender)
{
	n->EliminarRango(StrToInt(Epos1->Text), StrToInt(Epos2->Text));
	EResultado->Text=(n->GetN());
}
//---------------------------------------------------------------------------


void __fastcall TForm1::intercalar1Click(TObject *Sender)
{
	n->Intercambiar(StrToInt(ed_dig1->Text),StrToInt(ed_dig2->Text));
	lb_n2->Caption= n->GetN();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DecimalAOctal1Click(TObject *Sender)
{
	EResultado->Text = n->DecialAOctal();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::IntercambiarPorPosClick(TObject *Sender)
{
	n->IntercambiarPorPos(StrToInt(Epos1->Text),StrToInt(Epos2->Text));

}
//---------------------------------------------------------------------------

void __fastcall TForm1::DevolverElMasRepetidoClick(TObject *Sender)
{
    EResultado->Text =n->DevolverElMasRepetido() ;
}
//---------------------------------------------------------------------------

