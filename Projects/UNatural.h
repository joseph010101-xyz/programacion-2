//---------------------------------------------------------------------------

#ifndef UNaturalH
#define UNaturalH
//---------------------------------------------------------------------------
class CNatural{
	private:
	  unsigned long n;
	public:
	  CNatural();
	  CNatural( unsigned long _n);//constructor 2
	  void SetN(unsigned long valor);//modificar el valor de n
	  unsigned long GetN();//devolver el atributo n
	  int factorial();
	  void EliminarDigPares();
	  bool EsPrimo(unsigned long valor);
	  int  SumarDigNoPrimos();
	  int DigitoMayor();
	  int contarInversiones(int valor);
	  int VolcarNumeros();
	  bool NumeroPerfecto(int n);
	  void EliminarRango(int pos1,int pos2);
	  void Intercambiar(int dig1, int dig2);
	  int DecialAOctal();
	  int BuscarDigito(int pos);
	  void IntercambiarPorPos(int pos1,int pos2);
      int DevolverElMasRepetido();
};
#endif
