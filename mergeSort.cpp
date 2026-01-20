#include <iostream>
using namespace std;
void merge(int arr[],int low, int mid, int high){
	int i =low;
	int j =mid+1;
	int k=low;
	int p[10];
	
	while(i<=mid&&j<=high){
		if(arr[i]<=arr[j])
			p[k++]=arr[i++];
		else 
			p[k++]=arr[j++];
	}
	while(i<=mid)
	p[k++]=arr[i++];
	while(j<=high)
	p[k++]=arr[j++];
	
	for(int x=low;x<=high;x++){
		arr[x]=p[x];
	}
}
void mergeSort(int arr[],int low, int high){
	if(low<high){
		int mid = (low+high)/2;
		mergeSort(arr,low,mid);
		mergeSort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}
int main(){
	int arr[]={38,27,43,3,9,82,10};
	int n = 7;
	mergeSort(arr,0,n-1);
	cout<<"sorted: ";
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
return 0;
}

