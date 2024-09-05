//---------------------------------------------------------------------------

#pragma hdrstop

#include "practicando.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
CnumeroNatural::CnumeroNatural(){
	N=0;
}

int CnumeroNatural::getN(){

	return N;
}

void CnumeroNatural::setN(int valor){
   N=valor;
}

