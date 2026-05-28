#include<iostream>
using namespace std;

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void selectionSort(int a[],int n){
    for(int i=0;i<n-1;i++){
        int minidx=i;
        for(int j=i+1;j<n;j++){
            if(a[minidx]>a[j]){
                minidx=j;
            }
        }
        if(i!=minidx){
            swap(a[minidx],a[i]);
        }
    }
}

int main(){
    int arr[5]={5,4,1,3,2};
    int n=size(arr);
    cout<<"Before Sorting"<<endl;
    printArray(arr,n);
    cout<<"After Sorting"<<endl;
    selectionSort(arr,n);
    printArray(arr,n);
}