// 5. Interes Simple.cpp : Defines the entry point for the console application.
//5.Calcular el inter�s  simple  que ganar� un capital C en un periodo de N a�os, 
//  conociendo que la tasa de inter�s es T. Suponer que el inter�s es pagadero por cada a�o y no es capitalizable.

#include "stdafx.h"
#include<iostream>
#include "conio.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	float I,C,N,T;
	cout<<"Dime los siguientes datos y calculare el interes simple pagadero anualmente y no capitalizable:" <<endl;
	cout<<"Capital: ";
	cin>>C;
	cout<<"Periodo de Annos: ";
	cin>>N;
	cout<<"Tasa de interes en Porcentaje: ";
	cin>>T;
	I= C*T/100*N;
	cout<<"Este es el Interes: "<< I ;
	getch();
	return 0;
}

