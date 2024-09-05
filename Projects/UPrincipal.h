//---------------------------------------------------------------------------

#ifndef UPrincipalH
#define UPrincipalH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "UNatural.cpp"
#include <Vcl.Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TEdit *ENumero;
	TEdit *EResultado;
	TLabel *Label1;
	TLabel *Label2;
	TButton *BtnSetN;
	TButton *BtnGetN;
	TButton *BtnFactorial;
	TMainMenu *MainMenu1;
	TMenuItem *Funciones;
	TMenuItem *EliminarDigPares;
	TMenuItem *Procedimiento1;
	TMenuItem *EliminarDigitoPrimo1;
	TMenuItem *DigitoMayor;
	TMenuItem *contarInversiones;
	TMenuItem *VolcarNumeros;
	TMenuItem *NumeroPerfecto;
	TEdit *Epos1;
	TLabel *Label3;
	TLabel *Label4;
	TEdit *Epos2;
	TMenuItem *EliminarRango;
	TLabel *lb_n2;
	TEdit *ed_dig1;
	TEdit *ed_dig2;
	TButton *btn_interca;
	TMenuItem *intercalar1;
	TLabel *Label5;
	TLabel *Label6;
	TMenuItem *DecimalAOctal1;
	TMenuItem *IntercambiarPorPos;
	TMenuItem *DevolverElMasRepetido;
	//void __fastcall Edit1Change(TObject *Sender);
	void __fastcall BtnSetNClick(TObject *Sender);
	void __fastcall BtnGetNClick(TObject *Sender);
	void __fastcall BtnFactorialClick(TObject *Sender);
	void __fastcall EliminarDigParesClick(TObject *Sender);
	void __fastcall EliminarDigitoPrimo1Click(TObject *Sender);
	void __fastcall DigitoMayorClick(TObject *Sender);
	void __fastcall contarInversionesClick(TObject *Sender);
	void __fastcall VolcarNumerosClick(TObject *Sender);
	void __fastcall NumeroPerfectoClick(TObject *Sender);
	//void __fastcall Edit1Change(TObject *Sender);
	void __fastcall EliminarRangoClick(TObject *Sender);
	void __fastcall intercalar1Click(TObject *Sender);
	void __fastcall DecimalAOctal1Click(TObject *Sender);
	void __fastcall IntercambiarPorPosClick(TObject *Sender);
	void __fastcall DevolverElMasRepetidoClick(TObject *Sender);
	//void __fastcall Epos1Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
