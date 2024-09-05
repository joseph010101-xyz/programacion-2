//---------------------------------------------------------------------------

#ifndef UPrincipalH
#define UPrincipalH
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
	TStringGrid *SGA;
	TLabel *Label1;
	TEdit *EmA;
	TLabel *Label2;
	TEdit *EnA;
	TLabel *Label3;
	TButton *Button1;
	TEdit *Ek;
	TLabel *Label4;
	TStringGrid *SGB;
	TLabel *Label5;
	TEdit *EmB;
	TLabel *Label6;
	TEdit *EnB;
	TLabel *Label7;
	TButton *Button2;
	TEdit *Eh;
	TLabel *Label8;
	TStringGrid *SGC;
	TLabel *Label9;
	TMainMenu *MainMenu1;
	TMenuItem *Procedimientos1;
	TMenuItem *Procedimientos2;
	TMenuItem *OperacionesMatriciales1;
	TMenuItem *kA1;
	TMenuItem *hB1;
	TMenuItem *hB2;
	TMenuItem *Bt1;
	TMenuItem *Bt2;
	TMenuItem *kAhB1;
	TMenuItem *BxB1;
	TMenuItem *kAxhB1;
	TMenuItem *OperacionesElementales1;
	TMenuItem *PermutacionFilas1;
	TMenuItem *PermutacionFilas2;
	TMenuItem *AdicionFila1;
	TMenuItem *Determintant1;
	TEdit *resultado;
	TButton *Button3;
	void __fastcall kA1Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall hB2Click(TObject *Sender);
	void __fastcall Bt2Click(TObject *Sender);
	void __fastcall BxB1Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
	void SGAClase(TStringGrid *SG, CMatriz *CM);
	void ClaseASG(CMatriz *CM, TStringGrid *SG);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
