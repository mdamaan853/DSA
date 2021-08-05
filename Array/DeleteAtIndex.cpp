#include<iostream>
using namespace std;

int DeleteAtIndex(int arr[],int n,int ele){
    int i;
    for( i=0; i<n ;i++){
        if(arr[i] == ele){
            break;
        }
        if(i == n){
            cout<<"no element found "<<endl;
          return n;
        }
        for(int j=i;j<=n-1;j++){
            arr[j]=arr[j+1];
        }
        return (n-1);
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
int n=5;
int arr[]={2,3,4,5,8};
int ele=5;
DeleteAtIndex(arr,n,ele);
display(arr,n);
}