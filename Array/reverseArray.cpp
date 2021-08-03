#include<iostream>
using namespace std;


void reverse(int arr[],int n){
    int low=0 , high=n-1;
    while(low < high){
         int temp;
        temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[]={2,3,4,5};
    reverse(arr,4);
}
