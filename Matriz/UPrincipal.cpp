//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "UMatriz.h"
#include "UPrincipal.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
CMatriz *A,*B,*C;

//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{   A=new CMatriz;
	B=new CMatriz;
    C=new CMatriz;
}
//---------------------------------------------------------------------------

void TForm1::SGAClase(TStringGrid *SG, CMatriz *CM)
{    CM->Filas=SG->RowCount; CM->Columnas=SG->ColCount;
	 for(int i=0;i<SG->RowCount;i++)
	 {   for(int j=0;j<SG->ColCount;j++)
		 {   CM->Celda[i][j]=StrToFloat(SG->Cells[j][i]);}
	 }
}

void TForm1::ClaseASG(CMatriz *CM, TStringGrid *SG)
{    SG->RowCount=CM->Filas; SG->ColCount=CM->Columnas;
	 for(int i=0;i<CM->Filas;i++)
	 {  for(int j=0;j<CM->Columnas;j++)
        {  SG->Cells[j][i]=FloatToStr(CM->Celda[i][j]);}
	 }
}
void __fastcall TForm1::kA1Click(TObject *Sender)
{   SGAClase(SGA,A);
	C->MultipilcacionEscalar(StrToFloat(Ek->Text),A);
    ClaseASG(C,SGC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
	 SGA->RowCount=StrToInt(EmA->Text);
     SGA->ColCount=StrToInt(EnA->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
	 SGB->RowCount=StrToInt(EmB->Text);
	 SGB->ColCount=StrToInt(EnB->Text);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::hB2Click(TObject *Sender)
{  SGAClase(SGA,A);
   C->Transpuesta(A);
   ClaseASG(C,SGC);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Bt2Click(TObject *Sender)
{    SGAClase(SGA,A);
	 SGAClase(SGB,B);
	 C->Suma(A,B);
     ClaseASG(C,SGC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::BxB1Click(TObject *Sender)
{    SGAClase(SGA,A);
	 SGAClase(SGB,B);
	 C->Multiplicacion(A,B);
     ClaseASG(C,SGC);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
    SGAClase(SGA,A);
	SGAClase(SGB,B);
	resultado->Text = A->ContieneSubMatriz(B) ? "TRUE" : "FALSE";
}
//---------------------------------------------------------------------------

