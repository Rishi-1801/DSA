#include<iostream>
using namespace std;

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void insertionSort(int a[],int n){
    for(int i=1;i<n;i++){
        int curr=a[i];
        int prev=i-1;
        while(prev>=0 && a[prev]>=curr){
            swap(a[prev],a[prev+1]);
            prev--;
        }
        a[prev+1]=curr;
    }
}

int main(){
    int arr[5]={5,4,1,3,2};
    int n=size(arr);
    cout<<"Before Sorting"<<endl;
    printArray(arr,n);
    cout<<"After Sorting"<<endl;
    insertionSort(arr,n);
    printArray(arr,n);
}