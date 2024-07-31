#include<iostream>
using namespace std;

int main(){
	
int dados [] = {-1,5,9,-78,54};
for(int i=0 ; i < 5 ; i++){
	cout<< dados[i] << endl;
} 
for(int i=0 ; i < 5 ; i++){
if(dados[i]<0){
dados[i]=0;
	cout<< endl ;

}	
}

for(int i=0 ; i < 5 ; i++){
	cout<< dados[i] << endl;
}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
