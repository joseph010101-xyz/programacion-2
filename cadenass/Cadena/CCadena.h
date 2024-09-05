//---------------------------------------------------------------------------

#ifndef CCadenaH
#define CCadenaH
//---------------------------------------------------------------------------
const int MAX=250;

class CCadena
{  private:
	  char Cadena[MAX];
	  int n;  //10
	  int GetN();
	  void SetN(int valor);
	  char GetElem(int pos);
	  void SetElem(int pos, char elem);
	  UnicodeString GetTexto();
	  void SetTexto(UnicodeString txt);
	  UnicodeString GetPalabra(int pos);
	  void SetPalabra(int pos, UnicodeString pal);
	  bool EsMinuscula(int pos);
	  bool EsMayuscula(int pos);
	  char DevolverMayuscula(char let);
	  char DevolverMinuscula(char let);
   public:
	  CCadena();
	  __property int Dimension = { read=GetN, write=SetN};
	  __property char Casilla[int pos] = { read=GetElem, write=SetElem};
	  __property UnicodeString Texto = { read=GetTexto, write=SetTexto};
	  __property UnicodeString Palabras[int pos]={read=GetPalabra, write=SetPalabra};
	  void AMinuscula(int pos);
	  void AMayuscula(int pos);
	  void TodoMayuscula();
	  void TodoMinuscula();
	  void TipoInverso();
	  int ContarPalabras();
	  void TipoTitulo();
	  void LetraAMayuscula(char let);
	  void EliminarCaracter(char car);
	  /*void EliminarCaracter1(char car);*/
	  /*PRACTICO*/
	  int ContarVocales();
	  void Reemplazar(char car1,char car2);
	  void Reemplazar(String L1, String L2);
	  //Dada una letra colocar en mayúscula sus iguales y en minúscula las diferentes
	  void MayusculaIguales_y_MinusculaDiferentes(String Letra);

};
#endif
