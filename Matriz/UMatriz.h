//---------------------------------------------------------------------------

#ifndef UMatrizH
#define UMatrizH
//---------------------------------------------------------------------------

const int maxf=20;
const int maxc=20;
class CMatriz
{ private:
	 int m,n;
	 float Matriz[maxf][maxc];
	 int GetM();
	 void SetM(int valor);
	 int GetN();
	 void SetN(int valor);
	 float GetElem(int f, int c);
	 void SetElem(int f, int c, float elem);
  public:
	  CMatriz();
	  __property int Filas={ read=GetM, write=SetM};
	  __property int Columnas={read=GetN, write=SetN};
	  __property float Celda[int f][int c]={read=GetElem, write=SetElem};
	  void MultipilcacionEscalar(float k, CMatriz *A);
	  void Transpuesta(CMatriz *A);
	  void Suma(CMatriz *A, CMatriz *B);
	  void Multiplicacion(CMatriz *A, CMatriz *B);
	  void PermutacionFila(int f1, int f2);
	  void MultiplicacionFilaEsc(float k, int f);
	  void AdicionFila(float k, int f1, int f2);
      float Determinante();
      bool ContieneSubMatriz(CMatriz *sub);
};

#endif
