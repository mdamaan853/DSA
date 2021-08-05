#include<iostream>
using namespace std;


int insertAtIndex(int arr[],int n,int cap,int ele,int pos){
if(n == cap){
    cout<<"array is full "<<endl;
    return cap;
}
int index=pos-1;
for(int i=n-1;i>=index;i--){
    arr[i+1]=arr[i];
   }
arr[index]=ele;
return n;
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
int n=4;
int arr[n]={2,3,4};
int cap=3 ;
int ele=32;
int pos=2;
insertAtIndex(arr,n,cap,ele,pos);
display(arr,n);
}