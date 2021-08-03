#include<iostream>
using namespace std;

void maxMin(int arr[],int n){
    int min=arr[0],max=arr[0];
for(int i=0;i<n;i++){
    if(arr[i] > max){
        max=arr[i];
    }
    else if(arr[i] < min){
          min=arr[i];
    }
}
cout<<" maximum :"<<max<<endl;
cout<<" minimun :"<<min<<endl;
}

int main(){
    int arr[]={20,30,49,3};
    maxMin(arr,4);
}