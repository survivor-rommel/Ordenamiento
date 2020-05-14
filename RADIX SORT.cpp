#include<iostream>
#include<vector>
#include<math.h>
using namespace std; 

vector<vector<int> > vec;


void radix(int a[] , int n ){
	vec.resize(10);
	int temp , m = 0;
	for(int i = 0 ; i < 7 ; i++){
		for(int j = 0 ; j < n ; j++){
			temp = (int)(a[j]/pow(10,i)) %  10 ;
			vec[temp].push_back(a[j]);
		}
		for(int k = 0 ; k < 10 ; k++){
			for(int c = 0 ; c < vec[k].size() ; c++){
				a[m] = vec[k][c];
				m++;
			}
			vec[k].clear();
		}
		m = 0;
	}
}




int main(){
	int n ; 
	cout<<" Ingrese n elementos\n"; cin>>n;
	int lista[n];
	for(int i = 0 ; i < n ; i++ ){
		cout<<"Element?\n";cin>>lista[i];
	}
	radix(lista,n);
	cout<<"\nArreglo Ordenado\n";
	for(int i = 0; i < n ; i++){
		cout<<lista[i]<<" ";
	}
	return 0;
}

