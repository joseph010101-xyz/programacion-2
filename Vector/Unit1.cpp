//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "CVector.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
CVector *Vec;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
   Vec = new CVector();
}
void FormAlClase(TStringGrid *x ,CVector *v){
	int tam = x->ColCount;
	v->SetN(tam);
	for (int i=0; i < x->ColCount; i++) {

	   int valor = StrToInt(x->Cells[i][0]) ;
	   v->SetElem(i,valor);
	}
}
void ClaseAlFom(CVector *v,TStringGrid *x ){
	x->ColCount = v->GetN();

	for (int i=0; i < 100; i++) {
	   x->Cells[i][0] ="";
	}
	for (int i=0; i < v->GetN(); i++) {
	   x->Cells[i][0] =IntToStr(v->GetElem(i));
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btn_dimencionarClick(TObject *Sender)
{
	SG->ColCount = StrToInt(ed_dato->Text);

}



//---------------------------------------------------------------------------
void __fastcall TForm1::btn_sumarClick(TObject *Sender)
{
	FormAlClase(SG,Vec);
	int s = Vec->sumarRec();
	ed_resultado->Text = IntToStr(s);
	Label1->Caption = IntToStr(s);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::btn_ordenarClick(TObject *Sender)
{
	FormAlClase(SG,Vec);
	Vec->OrdenamientoBurbuja();
	ClaseAlFom(Vec,SG);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::funciones2Click(TObject *Sender)
{
   FormAlClase(SG,Vec);
   ed_resultado->Text =  IntToStr( Vec->sumarPosImpar() );
}
//---------------------------------------------------------------------------

void __fastcall TForm1::contarelementospares1Click(TObject *Sender)
{
	FormAlClase(SG,Vec);
	ed_resultado->Text = IntToStr(Vec->contarElemPares() );
}
//---------------------------------------------------------------------------


void __fastcall TForm1::sumarposicionesimparesrec1Click(TObject *Sender)
{
	FormAlClase(SG,Vec);
    ed_resultado->Text = IntToStr(Vec->sumarPosImparRec());
}
//---------------------------------------------------------------------------

void __fastcall TForm1::contarelementospares2Click(TObject *Sender)
{
	FormAlClase(SG,Vec);
    ed_resultado->Text = IntToStr(Vec->contarRec());
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Elimanarloselementosprimos1Click(TObject *Sender)
{

	FormAlClase(SG,Vec);
	Vec->elimarElemPrimos();
	ClaseAlFom(Vec,SG);
}
//---------------------------------------------------------------------------


void __fastcall TForm1::eliminarprimosrec1Click(TObject *Sender)
{
	FormAlClase(SG,Vec);
	Vec->elimarElemPrimosRec();
	ClaseAlFom(Vec,SG);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Voltear1Click(TObject *Sender)
{
	 FormAlClase(SG,Vec);
	 Vec->voltear();
	 ClaseAlFom(Vec,SG);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::voltearRec1Click(TObject *Sender)
{
	 FormAlClase(SG,Vec);
	 Vec->voltearRec();
	 ClaseAlFom(Vec,SG);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DevolverElementoMayor1Click(TObject *Sender)
{
   FormAlClase(SG,Vec);
   ed_resultado->Text= IntToStr(Vec->ElemMayor());
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ELementoMayorRec1Click(TObject *Sender)
{
   FormAlClase(SG,Vec);
   ed_resultado->Text= IntToStr(Vec->ElemMayorRec()  );
}
//---------------------------------------------------------------------------

void __fastcall TForm1::DevolverelElementoquemasserepite1Click(TObject *Sender)
{
	FormAlClase(SG,Vec);
	ed_resultado->Text = IntToStr(Vec->ElemMasRepetido());
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ELementoMayorRec2Click(TObject *Sender)
{
	FormAlClase(SG,Vec);
	ed_resultado->Text = IntToStr(Vec->ElemMasRepetidoRec());
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ParesIzquierdayImparesDerecha1Click(TObject *Sender)
{
   FormAlClase(SG,Vec);
   Vec->ParesIzqImparesDer();
   ClaseAlFom(Vec,SG);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ParesIzquierdaImparesDerechaRec1Click(TObject *Sender)
{
   FormAlClase(SG,Vec);
   Vec->ParesIzqImparesDerRec();
   ClaseAlFom(Vec,SG);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Eliminarmultiplos1Click(TObject *Sender)
{
   FormAlClase(SG,Vec);
   Vec->EliminarMultiplo(StrToInt(dato->Text));
   ClaseAlFom(Vec,SG);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ElminarMultiploRec1Click(TObject *Sender)
{
   FormAlClase(SG,Vec);
   Vec->EliminarMultiploRec(StrToInt(dato->Text));
   ClaseAlFom(Vec,SG);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
    Vec->examen( StrToInt(dato->Text));
    ClaseAlFom(Vec,SG);

}
//---------------------------------------------------------------------------

