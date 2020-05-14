#include<iostream>

using namespace std;

int main(){
	int lista[] = { 102, 85, 10 , 9 ,23 , 64 , 54, 47 , 64 , 12 , 86 , 98 , 34 };
	int aux , menor;
	for(int i = 0 ; i < 13 ; i++){
		menor = i;
		for(int j = i +1 ; j < 13 ; j++){
			if(lista[j] < lista[menor]){
				menor = j ; 
			}
		}
		aux = lista[i];
		lista[i] = lista[menor];
		lista[menor] = aux;
	}
	
	for(int e= 0 ; e < 13 ; e++ ){
		cout<<lista[e]<<" ";
	}
	

	return 0 ;
}
