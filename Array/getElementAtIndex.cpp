#include<iostream>
using namespace std;


int ElementAtIndex(int arr[],int n,int ele){
for(int i=0;i<n;i++){
    if(arr[i]==ele)
    return i;
}
return -1;
}


int main(){
int n=5;
int arr[n]={2,3,4,30,14};
int ele=30;
int found=ElementAtIndex(arr,n,ele);
cout<<"Element found in index "<<found; 
}