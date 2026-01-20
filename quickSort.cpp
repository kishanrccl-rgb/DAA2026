#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (i < j) {
        while (arr[i] <= pivot)
            i++;

        while (arr[j] > pivot)
            j--;
        if(i<j)    
        swap(arr[i], arr[j]);
    }
  	swap(arr[low],arr[j]);
	return j;  
}
void quickSort(int arr[],int low, int high){
	if(low<high){
		int p = partition(arr,low,high);
		quickSort(arr,low,p-1);
		quickSort(arr,p+1,high);
	}
}
int main(){
	int arr[]={4,2,6,9,2};
	int n = 5;
	int i;
	quickSort(arr,0,n-1);
	cout<<"SORTED ARRAY: ";
	for(i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

