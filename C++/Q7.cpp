#include <iostream>
#include <locale>
#include <iomanip>
 using namespace std;
int main () {
	setlocale(LC_ALL, "Portuguese");
    float valor1;
    cout<<"informe um valor:";
    cin>>valor1;
        
        cout<<fixed<<setprecision(2);

    cout<<valor1; 
    return 0;
}
   

 
