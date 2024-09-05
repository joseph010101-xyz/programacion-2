//---------------------------------------------------------------------------

#pragma hdrstop

#include "CVector.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//constructor
CVector::CVector(){
	n=0;
	
}
CVector::CVector(int _n){
	n=_n;
}
//metodo consultores
int CVector::GetN(){
	return n;
}
int CVector::GetElem(int pos){
	if (pos>=0 && pos<=MAX) {
		return V[pos];
	}else{
	 ShowMessage("Posicion no valida");
	}
	return 0;
}
//metodos modificadores
void CVector::SetN(int _n){
	if (_n>=0 && _n<=MAX) {
		n=_n;
	}else{
		ShowMessage("No puede exceder de una logitud de 100 casillas");
	}

}

void CVector::SetElem(int pos, int valor){
   //
	if (pos>=0 && pos <= n) {
	   V[pos]=valor;
	}else{
		ShowMessage("Solo estamos trabajando con "+ IntToStr(n) +" Celdas");
	}
}

int CVector::sumar(){
	int s=0;
	for (int i = 0; i < n; i++) {
		s = s + V[i];
	}
	return s;
}

void CVector::OrdenamientoBurbuja(){

	for (int i = 0; i < n-1; i++) {

		for (int j = 0; j < n-1-i; j++) {
			 if( V[j] > V[j+1]){
				int aux = V[j];
				V[j] = V[j+1];
				V[j+1] = aux;
			 }
		}
	}
}

int CVector::sumarRec(int pos){
	if (pos == 0 ) { //i<n
		return  V[0];
	}else{
		 // 0 +   3    + 3
		return V[pos] + sumarRec(pos-1);
	}
}

int CVector::sumarRec(){
	return sumarRec(n-1);
}

int CVector::sumarPosImpar(){
	int s=0;
	for (int i=0; i < n; i++) {
		if (i%2==1) {
		//sumar los elementos el la posicion impar
			s=s+V[i];
		}
	}
	return s;
}
int CVector::contarElemPares(){
	int c=0;
	for (int i = 0; i < n; i++) {
		if (V[i]%2 == 0) {
		   c++;
		}
	}
	return c;
}

int CVector::sumarPosImparRec(){
	return sumarPosImparRec(n-1);
}

int CVector::sumarPosImparRec(int pos){
	int s=0;
	if (pos == 0) {
		return s;
	}else{
		if (pos%2==1) {
			s=s+V[pos];
		}
		s = s + sumarPosImparRec(pos-1);
		return s;
	}

}
int CVector::contarRec(){
	return contarRec(n-1);
}
int CVector::contarRec(int pos){
	int c=0;
	if (pos == 0) {
		if ( V[pos] % 2 == 0) {
			c++;
		}
		return c;
	}else{
		if ( V[pos] % 2 == 0 ) {
			c++;
		}
		c = c + contarRec(pos-1);
		return c;
	}
}

bool CVector::esPrimo(int dato){
	bool esprimo;
	int i=1;
	int c=0;

	while(i<=dato){
	  if( (dato % i) == 0){
		c++;
	  }
	  i++;
	}

	if(c == 2){
	  esprimo=true;
	}else{
	  esprimo=false;
	}

	return esprimo;
};
void CVector::inicializar(){
	for (int i = 0; i < MAX; i++) {
		V[i] = 0;
	}
};
void CVector::eliminar(int pos){
	for (int j = pos ; j < n-1 ; j++) {
		V[j]=V[j+1];
	}
	for(int i=n-1 ; i<100; i++){
		V[i]=0;
	}

	n--;
}
void CVector::elimarElemPrimos(){
	
	for (int i = 0; i < n-1 ; i++) {

		if ( esPrimo( V[i] ) ) { 
			 eliminar(i);
			i--;
		}
	}

}


void CVector::elimarElemPrimosRec(){
	elimarElemPrimosRec(n-1);
}
void CVector::elimarElemPrimosRec(int pos){

	if (pos == 0) {
	   if (esPrimo(V[pos])){
			eliminar(pos);
	   }
	}else{
		if (esPrimo(V[pos])){
			eliminar(pos);
		}
		elimarElemPrimosRec(pos-1);

	}
}

void CVector::voltear(){
	for (int i=0; i < n/2; i++) {
		 int aux=V[i];
		 V[i]=V[n-1-i];
		 V[n-1-i]=aux;
	}
}
void CVector::voltearRec(){
	if( n==1 ){
		  //no voltear
	}else{
		voltearRec( (n/2 )-1);
	}
}

void CVector::voltearRec(int pos){
	if (pos==0) {
			 int aux=V[pos];
			 V[pos]=V[n-1-pos];
			 V[n-1-pos]=aux;

	}else{
			 int aux=V[pos];
			 V[pos]=V[n-1-pos];
			 V[n-1-pos]=aux;

			 voltearRec(pos-1);
	}
}


int CVector::ElemMayor(){
	int mayor=V[0];
	for (int i=1; i < n; i++) {
		if (V[i] > mayor) {
			mayor=V[i];
		}
	}
	return mayor;
}

int CVector::ElemMayorRec(){
	return ElemMayorRec(n-1);

}      //     0  1
	  //v[2]=[1][2];
	  //  n=2
int CVector::ElemMayorRec(int pos){
	if (pos==0) {
	   return V[0];
	}else{
		int mayor = 0;
		if (V[pos] > mayor) {
			mayor=V[pos];// 2
		}
		int dato = ElemMayorRec(pos-1); // 1

		if(dato > mayor){
			mayor=dato;
		}

		return mayor;


	}
}

int CVector::ElemMasRepetido(){
	int c=0;
	int elemMayor=0;
	int mayorRep=0;

	for (int i=0; i < n; i++) {
		c=0;
		for (int j=0; j < n; j++) {
			if (V[i]==V[j]) {
			   c++;
			}
		}
		if (c > mayorRep) {

			mayorRep = c;
			elemMayor = V[i];
		}
	}
	return elemMayor;
}
int CVector::contar(int dato){
	int c=0;
	for(int i=0; i<n; i++){
		if(V[i]==dato){
			c++;
		}
	}
	return c;
}

int CVector::ElemMasRepetidoRec(int pos, int &cant_rep,int &dato_rep){
	if (pos==0) {
		return dato_rep;
	}else{

	   int cantidaRepetidaElem = contar(V[pos]);

	   if (cantidaRepetidaElem > cant_rep) {
			cant_rep = cantidaRepetidaElem ;
			dato_rep = V[pos];
	   }
	   return ElemMasRepetidoRec(pos-1, cant_rep, dato_rep);

	}

}

int CVector::ElemMasRepetidoRec(){
	int cant = 0; int dato=V[0];
	return ElemMasRepetidoRec(n-1, cant , dato);
}

void CVector::ParesIzqImparesDer(){
	int vecPar[100];  int vecImp[100];
	int lpar=0;  int limp=0;

	for (int i = 0; i < n; i++) {
		if( V[i]%2 == 0 ){
			vecPar[lpar]=V[i];
			lpar++;
		}else{
			vecImp[limp]=V[i];
			limp++;
		}
	}

	for (int i = 0; i < lpar; i++) {
		  V[i]=vecPar[i];
	}

	for (int i = 0; i < limp; i++) {
		  V[lpar+i]=vecImp[i];
	}


}

void CVector::ParesIzqImparesDerRec(int vecPar[], int vecImp[], int &lpar, int &limp, int index) {
	// Caso base: si el índice es igual a n, detener la recursión
	if (index == n-1) {
		return;
	}

	// Si el elemento actual es par, añadirlo a vecPar
	if (V[index] % 2 == 0) {
		vecPar[lpar] = V[index];
		lpar++;
	} else {
		// Si el elemento actual es impar, añadirlo a vecImp
		vecImp[limp] = V[index];
		limp++;
	}

	// Llamar recursivamente para el siguiente índice
	ParesIzqImparesDerRec( vecPar, vecImp, lpar, limp, index + 1);
}

void CVector::ParesIzqImparesDerRec() {
	int vecPar[100];
	int vecImp[100];
	int lpar = 0;
	int limp = 0;

	// Llamada inicial a la función recursiva
	ParesIzqImparesDerRec( vecPar, vecImp, lpar, limp, 0);

	// Copiar los pares al vector original
	for (int i = 0; i < lpar; i++) {
		V[i] = vecPar[i];
	}

	// Copiar los impares al vector original
	for (int i = 0; i < limp; i++) {
		V[lpar + i] = vecImp[i];
	}
}

void CVector::EliminarMultiplo( int dato){
	for (int i=0; i < n; i++) {
	   if( V[i] % dato == 0){
			eliminar(i);
			i--;
	   }
	}
}

void CVector::EliminarMultiploRec(int dato){
	EliminarMultiploRec( dato,n-1);
}
void CVector::EliminarMultiploRec( int dato,int fin){
	//caso        123456
	if (fin==0) {
		if(V[fin]% dato == 0){
			eliminar(fin);
		}
	}else{
		if( V[fin] % dato == 0){
			eliminar(fin); // N -1
			//fin--;
		}
		EliminarMultiploRec( dato,fin-1);
	}
}
//EXAMEN
long CVector::factorial(int a){
	int fac = 1;
	if(a!=0){
		for(int i=1; i <= a; i++){
			fac = fac*i;
		}
	}
	return fac;
}

void CVector::examen(int x){
	n=x+1;
	int num = 0;
	int den = 0;
	for(int i=0; i<n; i++){
		num = factorial(x);
		den = factorial(i) * factorial(x-i);
		V[i] = num / den;
	}
}













