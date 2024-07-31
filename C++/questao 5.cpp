#include <iostream>
#include <string>

using namespace std;

int main( ){
	
const int tamanho = 4;
string emails[tamanho] = {"joao@outlook.com", "maria@gmail.com",
"jose@gmail.com", "carlos@yahoo.com.br"};
string senhas[tamanho]= {"123abc", "aaa543", "234bbb", "313rer"};
string email, senha;
bool autenticado = false;

cout << "informe email  ";
cin>> email;
cout << "informe sua senha ";
cin>> senha;

for (int i= 0 ; i > tamanho ; i++ ){
if(emails[i]== email and senhas[i]== senha){
autenticado = true;
break;	
	
}	
	
}
if (autenticado){
	cout << "BEM-VINDO!";
} else {
	cout << "Não autorizado " ;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
