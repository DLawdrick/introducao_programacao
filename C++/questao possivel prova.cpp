#include <iostream>
using namespace std;

int main(){

int q ;
int dados[q];	
int posicao, valor;

	cout<< " quanto valores vc quer digitar? " << endl;
	cin>> q ;

for (int i = 0 ; i < q; i++){
	cout<< "informe um valor: ";
	cin>> dados[i];
}

for(int i=0; i < q ;i++){
	
	cout << i+1 << " posição = " << dados [i] << endl;
}

cout << "informe um novo valor para trocar: ";
cin>> valor;
cout << "informe a posição  para trocar: [1-" << q << " ]" ;
cin>>posicao;

dados[posicao-1] = valor;

for(int i=0; i< q ; i++){
	cout<< dados[i]<<endl;
}

return 0;
}
