#include <iostream>
#include <clocale>

using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	int num;
	
	cout<< endl << " Insira o n�mero: ";
	cin>> num;
	
	if(num>0){
	cout<< "Este n�mero � positivo";	
	} else if(num==0){
	cout<< "Este n�mero � neutro";	
	} else{
	cout<< "Este n�mero � negativo";	
	}

	
	return 0;
}
