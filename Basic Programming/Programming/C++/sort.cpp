#include<iostream>
using namespace std;
int sort(int arr[],int size){

for(int i=0;i<size - 1;i++){
    for(int j=0;j<size-i-1;j++){
if(arr[j]>arr[j+1]){
    swap(arr[j],arr[j+1]);

}
    }


}

};


void printarray(int arr[],int size){

for(int i=0;i<size;i++){

cout<<arr[i]<<endl;

}

}

int main(){

cout<<"Array before  sort is : "<<endl;
int arr[5]={1,10,5,78,5};
printarray(arr,5);
sort(arr,5);
cout<<"Array after sort is : "<<endl;
printarray(arr,5);




return 0;
}