
#include <iostream>
#include <stdlib.h>

using namespace std;

int main( )
{

	// DECLARA VARIAVEIS
	char palavra[30], letra[1], secreta[30],dica[30];
	int tam, i,chances,acertos;
	bool acerto;


	// INICIALIZAÇAO DAS VARIAVEIS
	chances=10;
	tam=0;
	i=0;
	acerto=false;
	acertos=0;


	system("cls");
	cout << "Escolha a Palavra Secreta:" << endl;
	cin >> palavra;
	cout << "Digite Uma Dica" << endl;
	cin >> dica;
	system("cls");


	while(palavra[i] != '\0')
	{
		i++;
		tam++;
		
	}
	
	for(i=0;i<30;i++){
		secreta[i]='-';
	}
	
	while((chances > 0) && (acertos < tam))
	{
		cout << "CHANCES RESTANTES: " << chances << endl;
		cout << "PALAVRA SECRETA ";
		
		for (i=0; i<tam;i++){
			cout << secreta[i];
		}
		cout << "\n\nDICA: " << dica << endl;
		cout << "\n\nDigite a letra: " << endl;
		cin >> letra[0];
		for(i=0;i<tam;i++){
			if(palavra[i]== letra[0]){
				acerto=true;
				secreta[i]=palavra[i];
				acertos++;
			}
			if(palavra[i]== letra[0]){
				acerto=false;
				secreta[i]=palavra[i];
				acertos++;
			}
		}
		if(!acerto){
			chances--;
		}
		acerto=false;
		system("cls");
	}
	
	if(acertos==tam){
		cout << "VOCE VENCEU"<< endl;
	}else
	{
		cout << "VOCE PERDEU" << endl;
	}
	

	
	
	
		return 0;

}
