#include <iostream>
using namespace std;
int main(){
char* name;
name=new char[30];
cout<<"Buenos días, introduzca nombres de teninstas: ";cin.getline(name,30);
cout<<"El nombre del tenist: "; cout<<name;
return 0;
}

