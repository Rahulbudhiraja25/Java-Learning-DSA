#include<iostream>
using namespace std;
struct Pair {

int min,max;

};

Pair getminmax(int arr[],int n){
struct Pair minmax;
int i;

if(n==1){
minmax.min=arr[0];
minmax.max=arr[0];
return minmax;
}

if(arr[0]>arr[1]){

minmax.min=arr[1];
minmax.max=arr[0];
}
else{
minmax.min=arr[0];
minmax.max=arr[1];

}
for(i=2;i<n;i++){

if(arr[i]>minmax.max){
minmax.max=arr[i];

}
else if(arr[i]<minmax.min){
minmax.min=arr[i];

}

}
return minmax;

}

int main(){

int arr[]={1,3,6,8,5};
int size=5;
struct Pair minmax;
minmax=getminmax(arr,size);
cout<<"Minimum element of array is"<<minmax.min<<endl;
cout<<"Maximum element of array is"<<minmax.max<<endl;



    return 0;
}