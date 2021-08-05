#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int kminmax(int arr[],int n,int k){
   sort(arr,arr+n);
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
   }
   cout<<endl;
    cout<<"Kth smallest element :"<<arr[k-1]<<endl;
    cout<<"Kth largest element :"<<arr[n-k];
}

//kya hua amisha msg mat krna phone me mummy pass hai 

int main(){
    int arr[]={12,3,5,7,19,2,65,34};
    //[2,3,5,7,12,19,34,65]
    int k=2;
    kminmax(arr,8,k);
}