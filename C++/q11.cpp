#include <iostream>
#include <clocale>

using namespace std;

int main(){
	setlocale (LC_ALL, "portuguese");
	
int dados [] = {-1,5,9,-78,54};
float soma=0;
for(int i=0 ; i < 5 ; i++){
	soma = soma + dados[i];
	
}

cout << "a media é: " << soma/5.0 << endl;

	
	return 0;
}
