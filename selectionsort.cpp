#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
	for(int i=0; i<n; i++){
		int num = i;
		for(int j=i+1; j<n; j++){
			if(arr[j]<arr[num]){
				num=j;
				
			}
		}
		swap(arr[i],arr[num]);
	}
}
void printArr(int arr[], int n){
	for(int i=0; i<n; i++){
		cout<<arr[i] <<" ";
	}
	cout<<endl;
}
int main(){
	int arr[] = {1,4,7,9,3};
	int n=sizeof(arr) / sizeof(arr[0]);
	
	selectionSort(arr,n);
	printArr(arr,n);
	
	return 0;
}


