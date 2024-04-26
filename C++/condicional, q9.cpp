#include <iostream>
#include <clocale>
using namespace std; 

int main() {  

    setlocale (LC_ALL, "portuguese");
    int valor, resto;
    cout<<"informe o valor:";
    cin>>valor;
    resto= valor%2;
    if (resto==0){ 
    cout<<"PAR!";
	} else { 
	cout<<"IMPAR!";
	
	}
	return 0; 
}
