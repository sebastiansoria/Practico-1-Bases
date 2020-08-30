// 7. Interes Compuesto.cpp : Defines the entry point for the console application.
//7.	Calcular el interés compuesto I que ganará un capital C en un periodo de N años, conociendo que la tasa de interés es T.
#include "stdafx.h"
#include<iostream>
#include "math.h"
#include "conio.h"
using namespace std;


int main()
{
	float I,C,N,T;

	cout<<"Para calcular el interes compuesto, dame los siguientes datos: "<<endl;
	cout<<"Capital: ";
	cin>>C;
	cout<<"Periodo de Annos: ";
	cin>>N;
	cout<<"Tasa de interes: ";
	cin>>T;
	I=(C*(pow(T/100+1,N))-C);
	cout<<"El interes es de: "<<I;

	getch();
	return 0;
}

