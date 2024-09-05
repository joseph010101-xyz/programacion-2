//---------------------------------------------------------------------------

#pragma hdrstop
#include <vcl.h>
#include "UMatriz.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)

CMatriz::CMatriz()
{   n=0;
	m=0;
}

int CMatriz::GetM()
{  return m;}

void CMatriz::SetM(int valor)
{   if(valor<=maxf)
	{  m=valor;}
	else
	{  ShowMessage("Cantidad de filas erroneas");}
}

int CMatriz::GetN()
{  return n;}

void CMatriz::SetN(int valor)
{   if(valor<=maxc)
	{  n=valor;}
	else
	{  ShowMessage("Cantidad de columnas erroneas");}
}

float CMatriz::GetElem(int f, int c)
{   if(f<m && c<n)
	{   return Matriz[f][c];}
	else
	{   ShowMessage("Posición erronea");}
}

void CMatriz::SetElem(int f, int c, float elem)
{   if(f<m && c<n)
	{   Matriz[f][c]=elem;}
	else
	{   ShowMessage("Posición erronea");}
}

void CMatriz::MultipilcacionEscalar(float k, CMatriz *A)
{   m=A->Filas; n=A->Columnas;
	for(int i=0; i<m; i++)
	{   for(int j=0; j<n; j++)
		{  Matriz[i][j]=A->Celda[i][j]*k;}
	}
}

void CMatriz::Transpuesta(CMatriz *A)
{  m=A->Columnas; n=A->Filas;
   for(int i=0; i<m; i++)
   {  for(int j=0; j<n; j++)
	  {   Matriz[i][j]=A->Celda[j][i];}
   }
}

void CMatriz::Suma(CMatriz *A, CMatriz *B)
{    if(A->Filas==B->Filas && A->Columnas==B->Columnas)
	 {  m=A->Filas; n=A->Columnas;
		for(int i=0; i<m; i++)
		{  for(int j=0; j<n; j++)
		   {  Matriz[i][j]=A->Celda[i][j]+B->Celda[i][j];}
		}
	 }
	 else
	 {  ShowMessage("Deben tener las mismas filas y columnas");}
}

void CMatriz::Multiplicacion(CMatriz *A, CMatriz *B)
{   if(A->Columnas==B->Filas)
	{   m=A->Filas; n=B->Columnas;
		for(int i=0; i<m; i++)
		{  for(int j=0; j<n; j++)
		   {   float s=0;
			   for(int k=0; k<A->Columnas; k++)
			   {   s=s+A->Celda[i][k]*B->Celda[k][j];}
			   Matriz[i][j]=s;
		   }
		}
	}
	else
    {  ShowMessage("El número de columnas de A debe ser igual al número de filas de B");}
}


void CMatriz::PermutacionFila(int f1, int f2)
{   if(f1<m & f2<m)
	{   for(int j=0;j<n;j++)
		{   float aux=Matriz[f1][j];
			Matriz[f1][j]=Matriz[f2][j];
			Matriz[f2][j]=aux;
		}
	}
	else
	{  ShowMessage("Fila fuera de rango");}

}

void CMatriz::MultiplicacionFilaEsc(float k, int f)
{   if(f<m)
	{  for(int j=0;j<n;j++)
	   {  Matriz[f][j]=Matriz[f][j]*k;}
	}
	else
	{  ShowMessage("Fila fuera de rango");}
}

void CMatriz::AdicionFila(float k, int f1, int f2)
{  if(f1<m & f2<m)
   {   for(int j=0;j<n;j++)
	   {  Matriz[f2][j]=Matriz[f1][j]*k+Matriz[f2][j];}
   }
   else
	{  ShowMessage("Fila fuera de rango");}
}

float CMatriz::Determinante()
{  if(m==n)
   {  CMatriz *Maux=new CMatriz;
	  Maux=this;
	  float d=1;
	  for(int i=0;i<n;i++)
	  {   float k=Maux->Celda[i][i];
		  Maux->MultiplicacionFilaEsc(1/k,i);
		  for(int j=i+1;j<n;j++)
		  {  float h=Maux->Celda[i][j];
			 Maux->AdicionFila(-h,i,j);
		  }
		  d=d*k;
	  }
	  return d;
   }

}
//Examen Ejercicio 2
bool CMatriz::ContieneSubMatriz(CMatriz *sub) {
	int subFilas = sub->Filas;
	int subColumnas = sub->Columnas;
	if (subFilas > m || subColumnas > n) {
		return false;
	}
	for (int i = 0; i <= m - subFilas; ++i) {
		for (int j = 0; j <= n - subColumnas; ++j) {
			bool encontrada = true;
			for (int k = 0; k < subFilas; ++k) {
				for (int l = 0; l < subColumnas; ++l) {
					if (Matriz[i + k][j + l] != sub->Celda[k][l]) {
						encontrada = false;
						break;
					}
				}
				if (!encontrada) break;
			}
			if (encontrada) return true;
		}
	}
	return false;
}


