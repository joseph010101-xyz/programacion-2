//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TStringGrid *SG;
	TButton *btn_dimencionar;
	TEdit *ed_dato;
	TEdit *ed_resultado;
	TButton *btn_sumar;
	TButton *btn_ordenar;
	TButton *Button1;
	TMainMenu *MainMenu1;
	TMenuItem *funciones1;
	TMenuItem *funciones2;
	TMenuItem *contarelementospares1;
	TMenuItem *MetodosRecurcivos1;
	TMenuItem *sumarposicionesimparesrec1;
	TMenuItem *contarelementospares2;
	TMenuItem *porcedimiento1;
	TMenuItem *Elimanarloselementosprimos1;
	TButton *Button2;
	TMenuItem *metodosrecurcivos2;
	TMenuItem *eliminarprimosrec1;
	TMenuItem *Voltear1;
	TMenuItem *voltearRec1;
	TMenuItem *DevolverElementoMayor1;
	TMenuItem *ELementoMayorRec1;
	TMenuItem *ELementoMayorRec2;
	TMenuItem *DevolverelElementoquemasserepite1;
	TMenuItem *ParesIzquierdayImparesDerecha1;
	TMenuItem *ParesIzquierdaImparesDerechaRec1;
	TMenuItem *Eliminarmultiplos1;
	TEdit *dato;
	TMenuItem *ElminarMultiploRec1;
	TButton *Button3;
	void __fastcall btn_dimencionarClick(TObject *Sender);
	void __fastcall btn_sumarClick(TObject *Sender);
	void __fastcall btn_ordenarClick(TObject *Sender);
	void __fastcall funciones2Click(TObject *Sender);
	void __fastcall contarelementospares1Click(TObject *Sender);
	void __fastcall sumarposicionesimparesrec1Click(TObject *Sender);
	void __fastcall contarelementospares2Click(TObject *Sender);
	void __fastcall Elimanarloselementosprimos1Click(TObject *Sender);
	void __fastcall eliminarprimosrec1Click(TObject *Sender);
	void __fastcall Voltear1Click(TObject *Sender);
	void __fastcall voltearRec1Click(TObject *Sender);
	void __fastcall DevolverElementoMayor1Click(TObject *Sender);
	void __fastcall ELementoMayorRec1Click(TObject *Sender);
	void __fastcall DevolverelElementoquemasserepite1Click(TObject *Sender);
	void __fastcall ELementoMayorRec2Click(TObject *Sender);
	void __fastcall ParesIzquierdayImparesDerecha1Click(TObject *Sender);
	void __fastcall ParesIzquierdaImparesDerechaRec1Click(TObject *Sender);
	void __fastcall Eliminarmultiplos1Click(TObject *Sender);
	void __fastcall ElminarMultiploRec1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
