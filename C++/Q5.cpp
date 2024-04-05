#include <iostream>
#include <locale>
 using namespace std;
int main () {
	setlocale(LC_ALL, "Portuguese");
    float a, b, temp, resultado;
    cout<<"digite um valor:";
    cin>>a;
        cout<<"digite um valor:";
    cin>>b;
    cout<<a<<" "<<b<<" "<<endl;
  temp = a;
  a = b;
  b = temp;
    
    cout<<a<<" "<<b<<endl; 
    return 0;
}
   

 
