#include <iostream>
using namespace std;

int main(){
	int arr[]={2,5,8,12,16,23,38,56,72,91};
	int n = 10; int index;
	int target = 23;
	int flag = -1;
	int l=0; int r=n-1;
	
	while(l<=r){
		int mid = (l + r)/2;
		
		if (arr[mid]==target){
		index = mid;
		flag = 1;
		break;
		}
		else if (arr[mid]<target)
		l = mid + 1;
		else
		r = mid - 1;
	}
	if(flag!=-1){
		cout<<"element found at: "<<index;
	}
	else
		cout<<"element not found";
	
return 0;
}

