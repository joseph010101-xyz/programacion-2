//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include "CCadena.h"
#include <Vcl.Menus.hpp>

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TEdit *ECad;
	TEdit *EResultado;
	TButton *Button1;
	TButton *Button2;
	TMainMenu *MainMenu1;
	TMenuItem *Funciones1;
	TMenuItem *Procedimientos1;
	TMenuItem *ContarVocales1;
	TMenuItem *Reemplazar1;
	TEdit *ECaracter1;
	TEdit *ECaracter2;
	TMenuItem *ReemplazarPalabra1;
	TMenuItem *MayuscualasaigualesyMinusculasdiferentes1;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall ContarVocales1Click(TObject *Sender);
	void __fastcall Reemplazar1Click(TObject *Sender);
	void __fastcall ReemplazarPalabra1Click(TObject *Sender);
	void __fastcall MayuscualasaigualesyMinusculasdiferentes1Click(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
