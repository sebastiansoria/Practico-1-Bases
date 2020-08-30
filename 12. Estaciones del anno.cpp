// 12. Estaciones del anno.cpp : Defines the entry point for the console application.
//12.	Dada una fecha en día, mes y año, hacer un programa que determine si es ‘primavera’, ‘verano’, ‘otoño’ o ‘invierno’.
//Se sabe que la primavera comienza el 21 de septiembre, el verano el 21 de diciembre, el otoño el 21 de marzo, y el invierno el 21 de junio.



#include "stdafx.h"
#include<iostream>
#include"conio.h"
using namespace std;


int main()
{
	int a,b,c,i;
	
	
	do{
	
	cout<<"Introduzca la fecha a la que desea asignarle una Estacion (Escribir todo con numeros)"<<endl;
	cout<<"Dia: ";
	cin>>a;
	cout<<"Mes: ";
	cin>>b;
	cout<<"Anno: ";
	cin>>c;
	if((a<=0)||(b<=0)||(a>31)||(b>12))
	cout<<"Error:"<<endl<<"La fecha ingresada no es valida";
	else{
	
	
	if((b>=9)&&(b<=12))
	{
		if((a>=21)&&(b<12))
			cout<<"Es Primavera";
		if((a<=20)&&(b>9))
			cout<<"Es Primavera";
	}
	
	

	if((b==12)||((b>=1)&&(b<=3)))
	{
		if((a>=21)&&(b<3))
			cout<<"Es Verano";
		if((a>=21)&&(b==12))
			cout<<"Es Verano";
		if((a<=20)&&(b>=1)&&(b<=3))
			cout<<"Es Verano";
	}
	
	
	if((b>=3)&&(b<=6))
	{
		if((a>=21)&&(b<6))
			cout<<"Es Otonno";
		if((a<=20)&&(b>3))
			cout<<"Es Otonno";
	}
	
	if((b>=6)&&(b<=9))
	{
		if((a>=21)&&(b<9))
			cout<<"Es Invierno";
		if((a<=20)&&(b>6))
			cout<<"Es Invierno";
	}
	cout<<endl<<"..............................."<<endl;
	cout<<endl<<"1. Repetir"<<endl<<"2. Salir"<<endl;
	cin>>i;
}
}while(i==1);

cout<<endl<<"..............................."<<endl;
cout<<endl<<"Hecho por SEBASTIAN SORIA";
	getch();
	return 0;
}

