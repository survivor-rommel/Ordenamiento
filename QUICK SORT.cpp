#include<iostream>

using namespace std;

void exchange(int &x , int & y){
	int  aux;
	aux = x; 
	x  = y ; 
	y = aux;
}

void Quicksort(int lis[] ,int first , int thelast){
	int i,j,central;
	int pivote;
	
	central = (first+thelast)/2;
	pivote = lis[central];
	i = first; 
	j = thelast;
	do{
		while(lis[i] < pivote) i++;
		while(lis[j] > pivote) j--;
		if(i<=j){
			exchange(lis[i],lis[j]);
			i++;
			j--;
		}
	}while(i<=j);
	
	if(first < j){
		Quicksort(lis,first,j);
	}
	if(i<thelast){
		Quicksort(lis,i,thelast);
	}
}

int main(){
	int lista[] = { 102, 85, 10 , 9 ,23 , 64 , 54, 47 , 64 , 12 , 86 , 98 , 34 };
	Quicksort(lista,0,12);
	for(int i= 0 ; i < 13 ; i++){
		cout<<lista[i]<<" ";
	}
	
	return 0;
}
