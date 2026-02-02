#include <iostream>
using namespace std;

int main() {

    int arr[]={-2,-5,6,-2,-3,1,5,-6};
    int n=sizeof(arr)/sizeof(arr[0]);

    int currentSum=0;
    int maxSum=arr[0];

    for (int i=0;i<n;i++) {
	currentSum+=arr[i];

    if (currentSum>maxSum) {
    maxSum=currentSum;
    }
    if(currentSum<0) {
    currentSum=0;
    }
    }
    cout<<"Maximum Subarray Sum ="<<maxSum<<endl;
	return 0;
}

