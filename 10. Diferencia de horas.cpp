// 10.Diferencia de horas.cpp : Defines the entry point for the console application.

//10.	Construir un algoritmo que lea dos horas del mismo día y halle la diferencia entre ellas. 
//El ingreso de las horas debe ser en formato de 24 horas: HH, MM, SS, como así también la diferencia.
//Ejemplo: 
//Hora Inicial:	 10 Hr    50 Min  40 Seg
//Hora Final:	 21 Hr    30 Min  10 Seg
//Diferencia:	 10 Hr    39 Min  30 Seg
//NOTA: Use los conceptos empleados en el ejemplo anterior
//#include "stdafx.h"
#include <iostream>
#include"conio.h"
using namespace std;

int main()
{
int Is,Fs,Rs,Im,Fm,Rm,Ih,Fh,Rh;
 cout<<"Ingresa el valor de la hora inicial: ";
 cin>>Ih;
 cout<<"Ingresa el valor de los minutos iniciales: ";
 cin>>Im;
 cout<<"Ingresa el valor de los segundos iniciales: ";
 cin>>Is;

 cout<<"Ingresa el valor de la hora Final: ";
 cin>>Fh;
 cout<<"Ingresa el valor de los minutos Final: ";
 cin>>Fm;
 cout<<"Ingresa el valor de los segundos Final: ";
 cin>>Fs;

 if(Is<=Fs)
  {
  Rs= Fs-Is;
 
   if(Im<=Fm)
    {
    Rm= Fm-Im;
    Rh= Fh-Ih;
     if(Rh<0)
     {
    cout<<endl<<"Error:"<<endl;
 	cout<<"El valor de la hora inicial debe ser menor o igual que el valor de la hora final";
	 }
	else    
     cout<<"Diferencia: "<<Rh<<" Hr "<<Rm<<" Min "<<Rs<<" Seg";
    }
     else
     {
      Rm=60+(Fm-Im);
      Rh= Fh-Ih-1;
      	if(Rh<0)
    	 {
    		cout<<endl<<"Error:"<<endl;
 			cout<<"El valor de la hora inicial debe ser menor o igual que el valor de la hora final";
	 	 }
		else    
     	cout<<"Diferencia: "<<Rh<<" Hr "<<Rm<<" Min "<<Rs<<" Seg";
     }
 
 
   	}
 else//Is>Fs
	{
 	Rs= 60+(Fs-Is);
 	if(Im<=Fm)
  	  {
  	  Rm= Fm-Im-1;
   	  Rh= Fh-Ih;
   	  	if(Rh<0)
    	 {
    		cout<<endl<<"Error:"<<endl;
 			cout<<"El valor de la hora inicial debe ser menor o igual que el valor de la hora final";
	 	 }
		else    
     	cout<<"Diferencia: "<<Rh<<" Hr "<<Rm<<" Min "<<Rs<<" Seg";
  	  }
	else//Im>Fm
       {
      Rm=60+(Fm-Im)-1;
      Rh= Fh-Ih-1;
      	if(Rh<0)
    	 {
    		cout<<endl<<"Error:"<<endl;
 			cout<<"El valor de la hora inicial debe ser menor o igual que el valor de la hora final";
	 	 }
		else    
     	cout<<"Diferencia: "<<Rh<<" Hr "<<Rm<<" Min "<<Rs<<" Seg";
    	}
 
 
 	}
 	

	getch();
	return 0;


}





