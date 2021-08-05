#include<iostream>
using namespace std;

int updateAtIndex(int arr[],int ele,int pos){
int index=pos-1;
arr[index]=ele;
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
int n=5;
int arr[n]={2,3,4,3,4};
int ele=32;
int pos=2;
// display(arr,n);
updateAtIndex(arr,ele,pos);
display(arr,n);
return 0;
}