//Modified Binary Search
#include<iostream>
using namespace std;
int Search(int arr[],int st,int end,int tar){
    if(st>end){
        return -1;
    }
    int mid=st+(end-st)/2;
    if(arr[mid]==tar){
        return mid;
    }
    if(arr[st]<=arr[mid]){  //left part sorted
        if(arr[st]<=tar && tar<arr[mid]){
          return  Search(arr,st,mid-1,tar);
        }else{
          return  Search(arr,mid+1,end,tar);
        }
    }else{                  //right part sorted
        if(arr[mid]<tar && tar<=arr[end]){
           return  Search(arr,mid+1,end,tar);
        }else{
           return Search(arr,st,mid-1,tar);
        }
    }
}
int main(){
    int arr[7]={4,5,6,7,0,1,2};
    int n=7;
    cout<<"Index:"<<Search(arr,0,n-1,0)<<endl;
    return 0;
}