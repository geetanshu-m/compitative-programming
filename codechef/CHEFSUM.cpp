#include<iostream>
#include <stdio.h> 
#include <stdlib.h> 
using namespace std;

int prefix(int *a,int i){
	int c = 0;
	for(int k=0;k<=i;k++){
		c+=a[k];
	}
	return c;
}
int suffix(int *a,int i,int n){
	int c = 0;
	//i++;
	//i=n-i;
	for(int k=i;k<n;k++){
		c+=a[k];
	}
	return c;
}
int find_min(int *a,int n){
	int j = a[0],k=0;
	for(int i = 1;i<n;i++){
		if(a[i]<j){
			j = a[i];
			k=i;
		}
	}
	return k;
	
}
int main(){
	int a[1000],b[1000];
	int n;
	cin>>n;
	for(int z=0;z<n;z++){
		int k = 0;
		cin>>k;
		for(int i=0;i<k;i++){
			cin>>a[i];
		}
		for(int i=0;i<k;i++){
			b[i]=prefix(a,i)+suffix(a,i,k);
			//cout<<endl<<"="<<prefix(a,i)<<"+"<<suffix(a,i,k)<<endl;
		}
		cout<<find_min(b,k)+1<<endl;
	}
}
