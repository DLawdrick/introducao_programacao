#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;
int main () { 
float peso;
set_locale ("Portuguese");

cout<<"Qual seu peso ( em kg )";
cin>>peso;
cout<<"Agua:" <<peso*0.05 << " litros"<<endl;
cout<<"Carbo: " <<peso*0.006 << " kg"<<endl;
cout<<"Prot: " <<peso*0.0025 << " litros"<<endl;

return 0;


}
