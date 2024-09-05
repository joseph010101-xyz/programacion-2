//---------------------------------------------------------------------------

#ifndef CVectorH
#define CVectorH
//---------------------------------------------------------------------------
int const MAX=100;
class CVector{
	private:
	   int n;//longitud del vector
	   int V[MAX];
	   int sumarRec(int pos);
	   int sumarPosImparRec(int pos);
	   int contarRec(int pos);
	   void elimarElemPrimosRec(int pos);
	   void voltearRec(int pos);
	   int ElemMayorRec(int pos);
	   int ElemMasRepetidoRec(int pos, int &cant_rep,int &dato_rep);
	   void ParesIzqImparesDerRec( int vecPar[], int vecImp[], int &lpar, int &limp, int index);
       void EliminarMultiploRec( int dato,int fin);
	public:
	   //constructor
	   CVector();
	   CVector(int _n);
	   //metodo consultores
	   int GetN();
	   int GetElem(int pos);
	   //metodos modificadores
	   void SetN(int _n);
	   void SetElem(int pos, int valor);
	   int sumar();
	   void OrdenamientoBurbuja();
	   int sumarRec();
	   int sumarPosImpar();
	   int contarElemPares();
	   int sumarPosImparRec();
	   int contarRec();
	   bool esPrimo(int dato);
	   void elimarElemPrimos();
	   void inicializar();
	   void eliminar(int pos);
	   void elimarElemPrimosRec();
	   void voltear();
	   void voltearRec();
	   int ElemMayor();
	   int ElemMayorRec();
	   int ElemMasRepetido();
	   int contar(int dato);
	   int ElemMasRepetidoRec();
	   void ParesIzqImparesDer();
	   void ParesIzqImparesDerRec();
	   void EliminarMultiplo( int dato);
	   void EliminarMultiploRec(int dato);
	   long factorial(int a);
	   void examen(int x);

};


#endif
