#include <iostream>
#include <clocale>

using namespace std;

int main(){
	setlocale (LC_ALL, "portuguese");
	
int a[] = {-10,5,9,-78,54};
int b[] = {2,51,91,-78,56};
int c[10];

for(int i=0 ; i <5 ; i++){
	c[i]= a[i];
}

for (int i=5; i<10; i++ ){
	c[i] = b[i-5];
}

for (int i=0; i<10; i++ ){
cout << c[i] << endl;
}
return 0;
}

