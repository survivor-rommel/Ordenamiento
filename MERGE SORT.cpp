#include<iostream>
#include<stdlib.h>
using namespace std;

void merge(int lista[] , int iqz_primero , int iqz_ult , int der_primero , int der_ult ){
	int longitud = der_ult - iqz_primero+1;
	int tempo[longitud];
	
	int iqz  = iqz_primero;
	int der  = der_primero;
	
	for(int i = 0 ; i < longitud ; i++){
		if(iqz > iqz_ult){
			tempo[i] = lista[der++];
		}
		else if ( der > der_ult){
			tempo[i] = lista[iqz++];
		}
		else if(lista[iqz] <= lista[der]){
			tempo[i] = lista[iqz++];;
		}
		else{
			tempo[i] = lista[der++];
		}
	}
	for(int i = 0 ; i < longitud ; i++){
		lista[iqz_primero++] = tempo[i];
	}
}
void mergesort(int lista[], int  primero , int ult ){
	if(primero >= ult)
		return;
	else{
		int medio = (primero + ult)/2;
		mergesort(lista,primero,medio);
		mergesort(lista,medio+1,ult);
		merge(lista, primero , medio , medio+1 , ult);
	}
}
void mergesort(int lista[] , int tam){
	mergesort(lista,0,tam-1);
}
void imprimir(int lista[], int tam){
	for(int i = 0 ; i < tam ; i++){
		cout<<lista[i]<<" ";
	}
}


int main(){
	int arreglo[] = {3,7,8,9,4,5,6,21,17};
	
	mergesort(arreglo,9);
	cout<<"\n\narreglo ordenado\n\n";
	imprimir(arreglo , 9);
	
	
	return 0;
}
