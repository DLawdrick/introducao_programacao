#include <iostream>
using namespace std;

int main(){
	
int dados[10];
int posicao;
int valor;

cout<< "qual o novo valor:" << endl ;
cin>> valor;
cout << "informe uma posição: [1-10]" << endl;
cin>> posicao;

dados[posicao-1] = valor;

for (int i=0 ; i < 10; i++){
	cout << dados[i] << endl;
}
	
	

	return 0;
}
