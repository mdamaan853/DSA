#include<iostream>
using namespace std;


int insertAtEnd(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<"enter element to insert :";
        cin>>arr[i];
    }
    return 0;
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
int n=4;
int arr[n];
insertAtEnd(arr,n);
display(arr,n);
}
