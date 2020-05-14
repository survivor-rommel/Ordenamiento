#include<iostream>
#include<conio.h>
using namespace std;

int c = 0;

void counting( int A[] , int B[] , int n ){
	int C[30];
	int i , j;
	for(int i = 0 ; i < c+i ; i++){
		C[i] = 0;     // inicializa c con cero
	}
	for(int j = 1 ; j <= n ; j++ ){
		C[A[j]]++;    // contando la ocurrencia de cada elemento  x en a y incrementandolo en un posisicon x en C
	}
	for( i = 1 ; i<=c ; i++){
		C[i] = C[i]+C[i-1];  //almacenar la última ocurrencia de elemente i
	}
	for( j = n ; j>0 ; j--){
		B[C[A[j]]] = A[j];  // lugar de los elementos en su respectivo indice
		C[A[j]] = C[A[j]]-1;
	}
}
int main(){

	int n;
	int A[30];
	int B[30];
	int i;
	cout<<"Ingrese el tamaño del array\n"; cin>>n;
	for( i = 1 ; i<= n ; i++){
		cout<<"Elemento\n"; cin>>A[i];
		if(A[i]>c){
			c = A[i];
		}
	}
	counting(A,B,n);
	for( i=1 ; i<=n ; i++){
		cout<<B[i]<<" ";
	}
	cout<<endl;
	getch(); 
	return 0;
}
