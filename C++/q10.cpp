#include <iostream>
#include <clocale>

using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	int num;
	
	cout<< endl << " Insira o número: ";
	cin>> num;
	
	if(num>0){
	cout<< "Este número é positivo";	
	} else if(num==0){
	cout<< "Este número é neutro";	
	} else{
	cout<< "Este número é negativo";	
	}

	
	return 0;
}
