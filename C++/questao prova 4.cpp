#include <iostream>
#include <string>

using namespace std;

int main( ){

const int tamanho = 5;
string alunos[tamanho] = {"joao", "maria", "jose", "carlos", "claudio"};
bool vaiPraExcursao[tamanho] = {true, true, false, true, false};
string nome;
bool taNalista = false;

cout << "informe o nome do aluno: ";
cin>> nome;
for (int i= 0 ; i < 5 ; i++){
if (alunos[i] == nome and vaiPraExcursao[i] == true )	{
cout << "vai pra excursao! ";
taNalista = true;
break; 
} 

if (alunos[i] == nome and vaiPraExcursao[i] == false )	{
cout << "N�o vai pra excursao! ";
taNalista= true;
break; 
} 

}

if (taNalista == false) {
	cout << "nao ta na lista!" ;
}
//"Vai para excurs�o";
//"N�o vai para excurs�o";
//"nao esta na lista";
return 0;
}



