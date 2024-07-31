#include <iostream>
using namespace std;

int main(){

int dados[10];	
int posicao, valor;

for (int i = 0 ; i < 10; i++){
	cout<< "informe um valor: ";
	cin>> dados[i];
}

for(int i=0; i <10 ;i++){
	
	cout << i+1 << " posição = " << dados [i] << endl;
}

return 0;
}
