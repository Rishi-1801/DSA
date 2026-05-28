#include<iostream>
using namespace std;

void printArray(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void countingSort(int a[],int n){
    int minval=INT_MAX;
    int maxval=INT_MIN;
    for(int i=0;i<n;i++){
        minval=min(minval,a[i]);
        maxval=max(maxval,a[i]);
    }
    int n1=(maxval-minval)+1;
    int freq[n1]={0};

    for(int i=0;i<n;i++){  //frequency updation
        freq[a[i]-minval]++;
    }

    for(int i=minval,j=0;i<=maxval;i++){
        while(freq[i-minval]>0){
            a[j++]=i;
            freq[i-minval]--;
        }
    }
}

int main(){
    int arr[5]={5,4,1,3,2};
    int n=size(arr);
    cout<<"Before Sorting"<<endl;
    printArray(arr,n);
    cout<<"After Sorting"<<endl;
    countingSort(arr,n);
    printArray(arr,n);
}