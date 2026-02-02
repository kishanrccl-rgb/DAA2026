#include<iostream>
using namespace std;

int main(){

int value[]={100,60,120};
int weight[]={20,10,40};

int n=3;
int W=50;

float ratio[3];

for(int i=0;i<n;i++)
ratio[i]=(float)value[i]/weight[i];

for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){

if(ratio[i]<ratio[j]){

float r=ratio[i];
ratio[i]=ratio[j];
ratio[j]=r;

int v=value[i];
value[i]=value[j];
value[j]=v;

int w=weight[i];
weight[i]=weight[j];
weight[j]=w;
}
}
}

float total=0;

for(int i=0;i<n&&W>0;i++){

if(weight[i]<=W){

total+=value[i];
W-=weight[i];
}
else{

total+=ratio[i]*W;
W=0;
}
}

cout<<"Maximum value="<<total<<endl;

return 0;
}

