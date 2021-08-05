#include<iostream>
using namespace std;


int insertAtEnd(int arr[],int n,int cap){   
    for(int i=cap;i<n;i++){
        cout<<"enter the element too insert :";
        cin>>arr[i];
        cap++;
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
int n=5;
int arr[n]={2,3,43};
int cap=3;
insertAtEnd(arr,n,cap);
display(arr,n);
}
