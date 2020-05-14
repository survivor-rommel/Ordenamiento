#include<iostream>

using namespace std;


//ORDENAMIENTO POR INSERCION
int main(){
	
	int numbers[] = { 102, 85, 10 , 9 ,23 , 64 , 54, 47 , 64 , 12 , 86 , 98 , 34 };
	int aux , pos , i ; 
	for(i = 0 ; i < 13 ; i ++ ){
		pos   = i ; 
		aux = numbers[i];
		while( (pos > 0) && (numbers[pos-1] > aux )){
			numbers[pos]  = numbers[pos-1];
			pos--;
		}
		numbers[pos] = aux;
	}
	
	cout<<"Array ordenado\n";
	for(int e = 0 ; e < 13 ; e++){
		cout<<numbers[e]<<" ";
	}
	
	return 0; 
}
