// TiposDeDados.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	//cout << "Estrutura de Dados - Fatec (2025/1)" << endl;

	//
	//cout << "Tipos Numericos\n";
	//cout << "===============\n";
	//
	//int i = 10;
	//short s = 18;
	//long l = 200000;
	//float f = 1.97F;
	//double  d = 4.73;
	//cout << "Inteiros\n";
	//cout << "  int i = " << i << " ocupa " << sizeof(i) << " bytes\n";
	//cout << "short s = " << s << " ocupa " << sizeof(s) << " bytes\n";
	//cout << "long  l = " << l << " ocupa " << sizeof(l) << " bytes\n\n";
	//cout << "Ponto Flutuante (Reais)\n";
	//cout << " float f = " << f << " ocupa " << sizeof(f) << " bytes\n";
	//cout << "double d = " << d << " ocupa " << sizeof(d) << " bytes\n";

	//cout << "\nTipo logico (boolean)\n";
	//cout << "====================\n";
	//bool flFacil = false;
	//cout << "bool flFacil = " << flFacil << " ocupa " << sizeof(flFacil) << " bytes\n";

	//cout << "\nTipo caracter\n";
	//cout << "=============\n";
	//char letra = 'Z';
	//cout << "char letra = " << letra << " ocupa " << sizeof(letra) << " bytes\n";

	//cout << "\nTipo string\n";
	//cout << "===========\n";
	//string texto = "Estrutura de Dados vai ser moleza!";
	//cout << "string texto = \"" << texto << "\" ocupa " << sizeof(texto) << " bytes\n";

	//cout << "\nPonteiros\n";
	//cout << "===========\n";
	//string* ponteiro = &texto;
	//cout << "Para a variavel 'texto' do exemplo acima: string* ponteiro = &texto\nO endereco da memoria onde o valor foi armazenado (ponteiro)  = " << ponteiro << endl;
	//cout << "O valor armazenado no local indicado pelo ponteiro e *ponteiro = \"" << *ponteiro << "\"";

	//cout << endl << endl;

	//cout << "Qualquer tecla para continuar...";
	//system("pause"); // somente no Windows
	//system("cls");

	//cout << "Entrada de Dados" << endl;
	//cout << "================" << endl;
	//string nome = "";
	//int idade = 0;
	//int dias = 0;
	//int horas = 0;
	//int minutos = 0;
	//int segundos = 0;




	//cout << "Digite seu nome: ";
	//cin >> nome;
	//cout << "Digite sua idade: ";
	//cin >> idade;
	//dias = idade * 365;
	//horas = dias * 24;
	//minutos = horas  * 60;
	//segundos = minutos * 60;
	//cout << "Sua idade em dias e: " << dias << endl;
	//cout << "Sua idade em horas e: " << horas << endl;
	//cout << "Sua idade em minutos e: " << minutos << endl;
	//cout << "Sua idade em segundos e: " << segundos << endl;





	//cout << "Qualquer tecla para sair...";
	//system("pause"); // somente no Windows



	//ATVIDADE 1 
//#include <climits>
//	cout << "int max = " << INT_MAX << "\n";
//	cout << "int min = " << INT_MIN << "\n";
//	cout << "short max = " << SHRT_MAX << "\n";
//	
//	cout << "int max + 1 = " << INT_MAX + 1 << "\n";

	//ele fica negativo com esse valor -2147483648




	//ATIVIDADE 3
	//cout << "Digite um numero de segundos: ";
	//long segundos;
	//double horas;
	//double dias;
	//double segundosrestantes;
	//
	//cin >> segundos;
	//double minutos = segundos / 60.0;
	//horas = minutos / 60;
	//dias = horas / 24;
	//segundosrestantes = segundos % 60;


	//
	//  
	//cout << "O numero em minutos e: " << minutos << endl; 
	//cout << "O numero em horas e: " << horas << endl;
	//cout << "O numero em dias e: " << dias << endl;
	//cout << "O numero de segundos restantes e: " << segundosrestantes << endl;



	//ATIVIDADE 2
	//cout << "Digite uma temperatura em celcius: ";
	//double celcius;
	//double kelvin;
	//double fahrenheit;

	//cin >> celcius;
	//fahrenheit = (celcius * 1.8) + 32;
	//kelvin = celcius + 273.15;

	//cout << "A conversao de celcius para fahrenheit e: " << fahrenheit << endl;
	//cout << "A conversao de celcius para kelvin e: " << kelvin << endl;
	


	//ATIVIDADE 4 
	
	int numero = 50;

	cout << "Valor original: " << numero << "\n";
	cout << "Endereco da variavel: " << &numero << "\n";

	int* ptr = &numero;
	*ptr = *ptr * 2;
	cout << "Novo valor apos alteracao pelo ponteiro: " << numero << "\n";

	

}