#include<iostream>
using namespace std;

int main(){

int start[]={1,3,0,5,8,5};
int finish[]={2,4,6,7,9,9};

int n=sizeof(start)/sizeof(start[0]);

int count=1;
int last=0;

cout<<"Selected activities: ";
cout<<"("<<start[0]<<","<<finish[0]<<") ";

for(int i=1;i<n;i++){

if(start[i]>=finish[last]){

cout<<"("<<start[i]<<","<<finish[i]<<") ";
count++;
last=i;
}
}

cout<<endl;
cout<<"Maximum number of activities="<<count<<endl;

return 0;
}

