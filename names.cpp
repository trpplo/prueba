#include <iostream>
#include <fstream>
#include <string>
using namespace std; 
int main() {
	char* name;
	name = new char[30];
	cout<<"Introduzca su nombre: "; cin.getline(name,30);
	cout<<"Su nombre es "<<name<< "\n";

    return 0;
}

