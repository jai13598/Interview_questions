#include<iostream>
#include<algorithm>
using namespace std;
void Arange(int *arr,int n){
	int j=0;
	for(int i=0;i<n;i++){
		if(arr[i]<0){
			if(i!=j){
				swap(arr[i],arr[j]);
			}
			j++;
		}
	}
}
void Print(int arr[10000],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n,arr[10000];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	Arange(arr,n);
	Print(arr,n);
}