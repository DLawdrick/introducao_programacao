#include <iostream>
#include <clocale>
#include <cmath>


using namespace std;

int main(){
setlocale (LC_ALL, "portuguese");

int num;
cout << "escreva o numero: :" << endl;
cin>> num;

if(num%2== 0){
cout<< endl << " Este número é Par!" ;	
	
} else {
	cout<< endl << " Este número é impar!" ;
}	
	

	
return 0;	
}

