#include<iostream>
using namespace std;

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int a[],int n){
    bool isSwap=false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]);
                isSwap=true;
            }
        }
        if(!isSwap){
            return;  //if already sorted
        }
    }
}

int main(){
    int arr[5]={5,4,1,3,2};
    int n=size(arr);
    cout<<"Before Sorting"<<endl;
    printArray(arr,n);
    cout<<"After Sorting"<<endl;
    bubbleSort(arr,n);
    printArray(arr,n);
}