//---------------------------------------------------------------------------

#pragma hdrstop

#include "CCadena.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
 CCadena::CCadena()
{  n=0;}

int CCadena::GetN()
{  return n;}

void CCadena::SetN(int valor)
{  if(valor<=MAX)
   {  n=valor;}
   else
   {  ShowMessage("Dimensi�n err�nea");}
}

char CCadena::GetElem(int pos)
{  if(pos<n)
   {  return Cadena[pos];}
   else
   {  ShowMessage("Posici�n err�nea");}
}

void CCadena::SetElem(int pos, char elem)
{  if(pos<n)
   {  Cadena[pos]=elem;}
   else
   {  ShowMessage("Posici�n err�nea");}
}

UnicodeString CCadena::GetTexto()
{   UnicodeString s="";
	for(int i=0;i<n;i++)
	{ s=s+AnsiString(Cadena[i]);}
	return s;
}

void CCadena::SetTexto(UnicodeString txt)
{   n=txt.Length();
   for(int i=0;i<n;i++)
   {  Cadena[i]=txt[i+1]; }
}

UnicodeString CCadena::GetPalabra(int pos)
{    UnicodeString Pal="";
	 int c=-1,i=0;    // y = &&   o = ||
	 while( i<n && c<pos)
	 {  while(i<n && Cadena[i]==' ')
		{  i++;}
		if(i<n)
		{ c++;}
		while(i<n && Cadena[i]!=' ')
		{   if(c==pos)
			{  Pal=Pal+AnsiString(Cadena[i]);}
			i++;
		}
	 }
	 return Pal;
}

void CCadena::SetPalabra(int pos, UnicodeString pal)
{    int c=-1,ini,rango,i=0;
	 while(i<n && c<pos)
	 {  while(i<n && Cadena[i]==' ')
		{  i++;}
		if(i<n)
		{  c++;
		   ini=i;
		}
		while(i<n && Cadena[i]!=' ')
		{  i++;}
		rango=i-ini;
	 }
	 // Eliminando la palabra a reemplazar
	 for(int j=ini; j+rango<n; j++)
	 {  Cadena[j] = Cadena[ j+rango ]; }
	 n=n-rango;
	 // Insertar palabra reemplazante
	 rango=pal.Length();
	 n=n+rango;
	 for(int j=n-1; j-rango>=ini;j--)
	 {  Cadena[j]=Cadena[j-rango];}
	 int k=1;
	 for(int j=ini; j<ini+rango; j++)
	 {  Cadena[j]=pal[k];
		k++;
	 }
}


bool CCadena::EsMinuscula(int pos)
{ int cod=int(Cadena[pos]);
  return (cod>=97 && cod<=122) || (cod>=-32 && cod<=-1);
}

bool CCadena::EsMayuscula(int pos)
{  int cod=int(Cadena[pos]);
   return (cod>=65 && cod<=90) || (cod>=-64 && cod<=-33);
}

void CCadena::AMinuscula(int pos)
{  int cod=int(Cadena[pos]);
   if(EsMayuscula(pos))
   { Cadena[pos]=char(cod+32);}
}


void CCadena::AMayuscula(int pos)
{  int cod=int(Cadena[pos]);
   if(EsMinuscula(pos))
   { Cadena[pos]=char(cod-32);}

}

void CCadena::TodoMayuscula()
{  for(int i=0; i<n; i++)
   {  AMayuscula(i);}
}

void CCadena::TodoMinuscula()
{  for(int i=0; i<n; i++)
   {  AMinuscula(i);}
}

void CCadena::TipoInverso()
{  for(int i=0; i<n; i++)
   {  if(EsMinuscula(i))
	  {  AMayuscula(i);}
	  else if(EsMayuscula(i))
	  {  AMinuscula(i);}
   }
}

int CCadena::ContarPalabras()
{  int i=0,c=0;
   while(i<n)
   {   while(Cadena[i]==' ' && i<n)
	   { i++;}
	   if(i<n)
	   { c++;}
	   while(Cadena[i]!=' ' && i<n)
	   { i++;}
   }
   return c;
}

void CCadena::TipoTitulo()
{  int i=0;
   while(i<n)
   {  while(Cadena[i]==' ' && i<n)
	  {  i++;}
	  if(i<n)
	  {  AMayuscula(i);}
	  while(Cadena[i]!=' ' && i<n)
	  {  i++;
		 AMinuscula(i);
	  }
   }
}

char CCadena::DevolverMayuscula(char let)
{    int cod=int(let);
	 if ((cod>=65 && cod<=90) || (cod>=-64 && cod<=-33))//si esta en mayuscula entra nomas
	 {  return let;}
	 else if ((cod>=97 && cod<=122) || (cod>=-32 && cod<=-1))
	 {  return char(cod-32);}
}

char CCadena::DevolverMinuscula(char let)
{    int cod=int(let);
	 if ((cod>=97 && cod<=122) || (cod>=-64 && cod<=-33))
	 {  return let;}
	 else if ((cod>=65 && cod<=90) || (cod>=-32 && cod<=-1))
	 {  return char(cod+32);}
}


void CCadena::LetraAMayuscula(char let)
{  for(int i=0; i<n; i++)
   {   if(DevolverMayuscula(Cadena[i])==DevolverMayuscula(let))
	   {  AMayuscula(i);}
	   else
	   {  AMinuscula(i);}
   }
}

void CCadena::EliminarCaracter(char car)
{  for(int i=0;i<n;i++)
   {   if(Cadena[i]==car)
	   {  for(int j=i;j<n-1;j++)
		  {  Cadena[j]=Cadena[j+1];}
		  n--;
		  if(Cadena[i]==car)
		  { i--;}
	   }
   }
}
/* PRACTICO*/
int CCadena::ContarVocales(){
	int cantidad=0;
	for (int i = 0; i < n ; i++) {
		if (	DevolverMinuscula( Cadena[i] ) =='a' ||
				DevolverMinuscula( Cadena[i] ) =='e' ||
				DevolverMinuscula( Cadena[i] ) =='i' ||
				DevolverMinuscula( Cadena[i] ) =='o' ||
				DevolverMinuscula( Cadena[i] ) =='u'

		) {  cantidad++;  }
	}
	return cantidad;
}

void CCadena::Reemplazar(char car1,char car2){

	for (int i = 0; i < n; i++) {
		 if (Cadena[i] == car1) {
			 Cadena[i] = car2;
		 }
	}
}


//. Dada dos letras, reemplazar la primera por la segunda
void CCadena::Reemplazar(String L1, String L2){

	for (int i = 0; i < ContarPalabras() ; i++) {
			if ( GetPalabra(i) == L1 ) {
				 SetPalabra(i,L2);
			}
	}
}

//Dada una letra colocar en may�scula sus iguales y en min�scula las diferentes
void CCadena::MayusculaIguales_y_MinusculaDiferentes(String Letra){
	bool esIgual=false; int longitud = Letra.Length(); int x; int cant=0;
	for (int i = 0; i < n; i++) {
	   for (int j = 1; j <= longitud; j++) {
			if (Cadena[x] == Letra[j]) { cant++; }
			if (cant==2) { esIgual=true; }
			x++;
	   }
	   if (esIgual) {
		   for (int pos = i ; pos < x  ; pos++) {
			   AMayuscula(pos);
		   }
		   i=x+1;
	   }else{ AMinuscula(i); }
	   esIgual=false;
	   cant=0;
	}
}
