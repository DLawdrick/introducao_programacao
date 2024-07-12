#include <iostream>
#include <clocale>
 using namespace std;
 
 int main (){
 setlocale (LC_ALL, "portuguese");
 	
 int dia;
 cout<<"digite o dia da semana: " << endl;
 cin>> dia;
 cout<< "o dia da semana é: " << endl ;
 
 if(dia==1){
 	cout<< "Domingo";
 } else if(dia==2){
 	cout<< "segunda";
 }	else if(dia==3){
    cout<< "terça";
} else if(dia==4){
	    cout<< "quarta";
	}else if(dia==5){
	cout<< "quinta";
}else if(dia==6){
		cout<< "sexta";
	}else if(dia==7){
	cout<< "sabado";
} else{
	cout<< " DIA DA SEMANA INVALIDO!";
}

 	return 0;
 }
