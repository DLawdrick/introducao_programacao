#include <iostream>
using namespace std;

int main(){
	
int q ;

	cout<< " quanto valores vc quer digitar? " << endl;
	cin>> q;

int dados[q];	
int posicao, valor;

for (int i = 0 ; i < q; i++){
	cout<< "informe um valor: ";
	cin>> dados[i];
}

for(int i=0; i < q ;i++){
	
	cout << i+1 << " posição = " << dados [i] << endl;
}

return 0;
}
