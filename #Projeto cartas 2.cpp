#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
using namespace std;

int main(int argc, char** argv)
{
	char crt,crtab,crtac,crtba,resp9,crt12,resp8,resp15,resp16,resp19;
	cout << "A = 1,2,3,4,5,6,7" << endl;
	cout << "D = 8,9,10,11,12,13,14" << endl;
	cout << "G = 15,16,17,18,19,20,21" << endl;
	cout << "digite" << endl;
	cin >> crt;

		
//n OPÇAO A COMPLETO 
	switch(crt)
	{
		
	case 'a':
		system("cls");
		cout << "A = 1,8,9,4,15,16,7" << endl;
		cout << "B = 5,6,10,11,12,13,14" << endl;
		cout << "C = 2,3,17,18,19,20,21" << endl;
		cout << "Escolha" << endl;
		cin >> crt;
		break;
	case 'b':
		system("cls");
		cout << "A = 1,8,9,4,15,16,7" << endl;
		cout << "B = 5,6,10,11,12,13,14" << endl;
		cout << "C = 2,3,17,18,19,20,21" << endl;
		cout << "Escolha" << endl;
		cin >> crt;
		break;
	case 'c':
		system("cls");
		cout << "A = 1,8,9,4,15,16,7" << endl;
		cout << "B = 5,6,10,11,12,13,14" << endl;
		cout << "C = 2,3,17,18,19,20,21" << endl;
		cout << "Escolha" << endl;
		cin >> crtac;
		break;
	}

//n OPÇAO A 2,3 COMPLETA
	switch(crt)
	{

	case 'c': 
		system("cls");
		cout << "A = 2,8,9,11,15,16,13" << endl;
		cout << "B = 3,5,6,10,17,12,21" << endl;
		cout << "C = 7,1,4,14,15,19,20" << endl;
		cout << "Escolha" << endl;
		cin >> crtac;
		break;
	case 'b':
		system("cls");
		cout << "A = 5,8,9,11,15,16,13" << endl;
		cout << "B = 1,2,10,11,12,13,14" << endl;
		cout << "C = 6,3,17,18,19,20,21" << endl;
		cout << "Escolha" << endl;
		cin >> crtab;
		
	}

//n OPÇAO A 5,6 CPMPLETA
	switch(crtab)
	{
	case 'a':
		system("cls");
		cout << "VOCE ESCOLHEU O NUMERO 5!!" << endl;
		return 0;
		break;
	case 'c':
		system("cls");
		cout << "VOCE ESCOLHEU O NUMERO 6!!" << endl;
		return 0;
		break;
	
	}
	switch(crtac)
	{
	case 'a':
		system("cls");
		cout << "VOCE ESCOLHEU O NUMERO 2!! " << endl;
		return 0;
		break;
	case 'b':
		system("cls");
		cout << "VOCE ESCOLHEU O NUMERO 3 !!" << endl;
		return 0;
		break;
	
	}
		
	//n OPÇAO A 1,4,7
	switch(crt)
	{
	case 'a':
		system("cls");
		cout << "a = 1,8,9,11,15,16,13" << endl;
		cout << "b = 4,5,6,10,17,12,21" << endl;
		cout << "c = 7,2,3,14,18,18,20" << endl;
		cout << "Escolha" << endl;
		cin >> crt;
		break;
	case 'b':
		system("cls");
		cout << "a = 1,8,9,11,15,16,13" << endl;
		cout << "b = 4,5,6,10,17,12,21" << endl;
		cout << "c = 7,2,3,14,18,18,20" << endl;
		cout << "Escolha" << endl;
		cin >> crt;
		break;
	case 'c':
		system("cls");
		cout << "a = 1,8,9,11,15,16,13" << endl;
		cout << "b = 4,5,6,10,17,12,21" << endl;
		cout << "c = 7,2,3,14,18,18,20" << endl;
		cout << "Escolha" << endl;
		cin >> crt;
		break;
	}
	
	switch(crt)
	{

	case 'a':
		system("cls");
		cout << "VOCE ESCOLHEU O NUMERO 1!! " << endl;
		return 0;
		break;
	case 'b':
		system("cls");
		cout << "VOCE ESCOLHEU O NUEMRO 4" << endl;
		return 0;
		break;
	case 'c':
		system("cls");
		cout << "VOCE ESCOLHEU O NUMERO 7" << endl;
		return 0;
		break;
	}

//n OPÇAO B
switch(crt)
	{
	case 'd':
		system("cls");
		cout << "a = 1,9,10,4,5,6,7" << endl;
		cout << "b = 8,20,21,11,2,3,14" << endl;
		cout << "c = 15,16,17,18,19,13,12" << endl;
		cout << "Escolha" << endl;
		cin >> crtba;
		break;
	}
	
//n OPÇAO B 12,13	
	switch(crtba)
	{
	case 'c':
		system("cls");
		cout << "a = 1,9,10,12,5,6,7" << endl;
		cout << "b = 8,20,21,13,2,3,14" << endl;
		cout << "c = 15,16,17,18,19,11,4" << endl;
		cout << "Escolha" << endl;
		cin >> crt12;
		break;
	}
	switch(crt12)
	{
	case 'a':
		system("cls");
		cout << "VOCE ESCOLHEU O NUMERO 12 !!" << endl;
		return 0;
		break;
	case 'b':
		system("cls");
		cout << "VOCE ESCOLHEU O NUEMRO 13 !!" << endl;
		return 0;
		break;
	}
	
//n OPÇAO B 9,10	
	switch(crtba)
	{
	case 'a':
		system("cls");
		cout << "a = 1,9,20,4,5,6,7" << endl;
		cout << "b = 8,10,21,11,2,3,14" << endl;
		cout << "c = 15,16,17,18,19,13,12" << endl;
		cout << "Escolha" << endl;
		cin >> resp9;
		break;	
	}
	switch(resp9)
	{
	case 'a':
		system("cls");
		cout << "VOCE ESCOLHEU O NUMERO 9!!" << endl;
		return 0;
		break;
	
	case 'b':
		system("cls");
		cout << "VOCE ESCOLHEU O NUMERO 10 !!" << endl;
		return 0;
		break;	
	}
	
//n OPÇAO B 8,11,14	
	switch(crtba)
	{
	case 'b':
		system("cls");
		cout << "a = 1,8,10,4,5,6,7" << endl;
		cout << "b = 1,9,20,21,2,3,15" << endl;
		cout << "c = 16,14,17,11,19,13,12" << endl;
		cout << "Escolha" << endl;
		cin >> resp8;
		break;
	}
	
	switch(resp8)
	{

	case 'a':
		system("cls");
		cout << "VOCE ESCOLHEU O NUMERO 8" << endl;
		break;
	case 'b':
		system("cls");
		cout << "VOCE ESCOLHEU O NUMERO 11" << endl;
		break;
	case 'c':
		system("cls");
		cout << "VOCE ESCOLEHU O NUEMRO 14" << endl;
		break;
	}

	
//n OPÇAO C	
switch(crt)
	{
	case 'g':
		system("cls");
		cout << "A= 1,16,17,4,5,6,7" << endl;
		cout << "B= 8,9,10,11,19,20,14" << endl;
		cout << "C= 15,2,3,18,12,13,21" << endl;
		cin >> crt;
		break;
	}
	
switch(crt)
{
case 'b':
	system("cls");
        cout << "A= 1,16,17,4,5,6,7" << endl;
		cout << "B= 8,9,10,11,15,20,14" << endl;
		cout << "C= 19,2,3,18,12,13,21" << endl;
		cin >> resp19;
	break;
}
	
switch(resp19)
{
case 'b':
	cout << "VOCE ESCOLHEU O NUMERO 20 !!" << endl;
	return 0;
	break;
case 'c':
	cout << "VOCE ESCOLHEU O NUMERO 19 !!" << endl;
	return 0;
	break;

}	

//n OPÇAO C 16,17		
	switch(crt)
	{
	case 'a':
		cout << "A= 1,15,17,4,5,6,7" << endl;
		cout << "B= 8,9,10,11,19,21,14" << endl;
		cout << "C= 16,2,3,18,12,13,21" << endl;
		cin >> resp16;
		break;	
	}
	
	
	switch(resp16)
	{
	case 'a':
		cout << "VOCE ESCOLHEU O NUMERO 17 !!" << endl;
		return 0;
		break;
	case 'c':
		cout << "VOCE ESCOLHEU O NUMERO 16 !!" << endl;
		return 0;
		break;

	}
	
	
	
//n OPÇOES 15,18,21	
	switch(crt)
	{
	case 'c':
		system("cls");
		cout << "A= 1,16,17,15,5,6,7" << endl;
		cout << "B= 8,9,10,18,19,20,14" << endl;
		cout << "C= 4,2,3,11,12,13,21" << endl;
		cin >> resp15;
		break;
	}
	
	switch(resp15)
	{

	case 'a':
		system("cls");
		cout << "VOCE ESCOLHEU O NUEMRO 15 !!" << endl;
		return 0;
		break;
	case 'b':
		system("cls");
		cout << "VOCE ESCOLHEU O NUEMRO 18 !!" << endl;
		return 0;
		break;
	case 'c':
		system("cls");
		cout << "VOCE ESCOLHEU O NUMERO 21" << endl;
		return 0;
		break;
	}
	
	system("pasue");
	return 0;
	
}
