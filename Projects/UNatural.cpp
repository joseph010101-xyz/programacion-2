//---------------------------------------------------------------------------

#pragma hdrstop

#include "UNatural.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
CNatural::CNatural(){
	n=0;
}
CNatural::CNatural( unsigned long _n){
    n=_n;
};

void CNatural::SetN(unsigned long valor){
	n=valor;
}

unsigned long CNatural::GetN(){
	return n;
}

int CNatural::factorial(){
	int c=0;
	int f=1;
	while(n>c){
	  c++;
	  f=f*c;
	}
	return f;

}

void CNatural::EliminarDigPares(){
	int dig=0;
	int mul=1;
	int x;

	while (n>0){
	   x=n%10;
	   if(x%2==1){
		  dig=x*mul+dig;
		  mul=mul*10;

	   }
	   n=n/10;

	}
	n=dig;
   //	return dig;
}
bool CNatural::EsPrimo(unsigned long valor){
	bool esprimo;
	int i=1;
	int c=0;
	while(i<=valor){
	  if( (valor % i) == 0){
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
}
  int CNatural::SumarDigNoPrimos(){

	int p=1; int residuo; int dig; int res=0;
	int i=1;
	unsigned long valor=n;
	while( valor != 0){
	   residuo=valor % 10;
	   if( EsPrimo(residuo) ){
	   }else{
			res=residuo*p+res;
			p=p*10;
	   }
	   dig=valor / 10;
	   valor=dig;
	}
	return res;
}
int CNatural::DigitoMayor(){
	int mayor=0;
	int x;
	while(n>0){
	  x=n%10;
	  if(x>mayor){
		 mayor=x;

	  }
	  n=n/10;
	}
	return mayor;
}
//funcion para contar el numero de inversiones
int CNatural::contarInversiones(int valor){
	int inversiones=0;
	int original=valor;
	int invertido=0;

	 while(valor>0){
		invertido=invertido*10+valor%10;
		valor=valor/10;
	}
	while(original!=invertido){
		inversiones++;
		original=original+invertido;
		invertido=0;
		valor=original;

		while(valor>0){
			invertido=invertido*10+valor%10;
			valor=valor/10;
		}
	}
	return inversiones;
}
//funcion para volcar numeros
int CNatural::VolcarNumeros(){
	int x=0,resultado=0,y=0;
	while(n!=0){
		x=n%10;
		resultado=resultado*10+x;
		n=n/10;
	}
	return resultado;
}
//si n es perfecto
bool CNatural::NumeroPerfecto(int n){
	int x=1;
	int dig=0;
	while(n>x){
		if(n%x==0){
			dig=dig+x;
		}
		x++;
	}
	if(dig==n){
		return true;
	}
	else{
		return false;
	}
}
//eliminar dentro de un rango
void CNatural::EliminarRango(int pos1,int pos2){
	int dig=0,mul=1,p=1,x=0;
	while(n>0){
		x=n%10;
		if(p<pos1  || p>pos2){
			dig=x*mul+dig;
			mul=mul*10;
		}
		n=n/10;
		p++;

	}
	n=dig;
	//return dig;
}
								// 8    // 6
void CNatural::Intercambiar(int dig1, int dig2){
	unsigned long aux=0;
	int p=1;
	//n=84566 8456  845 84   8
	while(n>0){
	 int dig = n % 10; // 6 6 5 4 8
	 //   8  =  8
	 if (dig == dig1) {
		  //  6* 10000+4588
		 aux=dig2*p+aux;//64588
		 p=p*10; //100 000
		 //123
	 }else{
	 ///     4 = 6
		 if (dig == dig2) {
			 // = 8 * 10 +  8;
			 aux=dig1*p+aux;// 88
			 p=p*10;// 10  100
		 }else{
			 //  4*1000+588
			 aux=dig*p+aux;// 4588
			 p=p*10;// 10000
		 }

	 }


	 n=n/10;//8456 84 8 0
	}
	n=aux; // 64588
};

int CNatural::DecialAOctal(){

	int octal = 0;
	int resiciduo = 0 ;
	int p=1;
	int aux=n;//24
	while (aux>0){ //62
		if (aux>8) {
			resiciduo = aux % 8; // 0
				//    0 + 0*1
			octal = octal + resiciduo*p ;//0
			p=p*10;     //10
		}else{
		///       0 + 3*10
			octal= octal + aux *p ;//30
		}
	   ///     4 + 6*10
	   aux=aux/8;   //3

	}
	//ShowMessage(octal);
	return octal;
};
int CNatural::BuscarDigito(int pos){
	int aux=n;
	int i=0;
	while(aux>0){
		int dig=aux%10;// 8
		i++;
		if(i==pos){
		   return dig;
		}
		aux=aux/10;
	}
	return 0;
}
void CNatural::IntercambiarPorPos(int pos1,int pos2){
	int dig1=BuscarDigito(pos1);// 5
	int dig2=BuscarDigito(pos2);//7
	int c=0;
	int x=0;
	int p=1;             //87358
	while(n>0){
		int dig=n%10;//8 5  3  7 8

		c++;//1 2 3 4 5
		if(c==pos1){
			x=dig2*p+x; //
			p=p*10;// 100
		}
		else{
			if(c==pos2){
				x=dig1*p+x;//5378
				p=p*10;//
			}
			else{
			x=dig*p+x;//8  378 85378
			p=p*10;//10  1000
			}
		}
		n=n/10;//8735 873 87 8 0
	}
	n=x;                                              ///85378
	//ShowMessage(dig1);
	//ShowMessage(dig2);
}
int CNatural::DevolverElMasRepetido(){
int z=n;
int y=n;
int c=0;
int mayor=0;
int vr=0;
	while(z>0){    //636365
	   c=0;
		int x=z%10;//5 6
		y=n;
		while(y>0){  //cantidad de veces que repite el dig x
			int d=y%10; //5 6 3 6 3 6
			if(d==x){
			c++;//1 3
			}
			y=y/10;//63636 6363 636 63 6 0
		}
		//ShowMessage(c);
		if(c>mayor){
			mayor=c;//1 3
			vr=x;//5 6
		}

		z=z/10;//63636 6363
	}
	return vr;
}























