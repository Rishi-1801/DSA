#include<iostream>
using namespace std;
void printArr(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<' ';
    }
    cout<<endl;
}

//Reverse an Array(2 ptrs)
void Rev(int a[],int n){
    int i=0,j=n-1;
    while(i<j){
        int temp=a[j];
        a[j]=a[i];
        a[i]=temp;
        i++;
        j--;
    }
}
int main(){
    int arr[]={5,4,3,9,2};
    int n=sizeof(arr)/sizeof(int);
    cout<<"Before Reversing Array "<<endl;
    printArr(arr,n);
    Rev(arr,n);
    cout<<"After Reversing Array "<<endl;
    printArr(arr,n);
}