//sorted array with the index k rotated
#include<iostream>
using namespace std;
int search(int a[],int n,int key){
    int st=0,end=n-1;
    while(st<=end){
        int mid=(st+end)/2;
        if(a[mid]==key){
            return mid;
        }if(a[st]<=a[mid]){   //left sorted so apply binary search
            if(a[st]<=key && key<a[mid]){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }else{                 // right sorted so apply binary search
            if(a[mid]<key && key<=a[end] ){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return -1;
}

//Find the SubArry that has largest Product and return the product
int maxProduct(int a[],int n){
    int product=a[0];
    for(int i=0;i<n;i++){
        int curProduct=1;
        for(int j=i;j<n;j++){
            curProduct*=a[j];
            product=max(product,curProduct);
            cout<<curProduct<<", ";
        }
        cout<<endl;
    }
    return product;
}

int main(){
    //1st
    int nums[]={4,5,6,7,0,1,2};
    int n= sizeof(nums)/sizeof(int);
    int index=search(nums,n,3);
    cout<<"The Index the Target Element is:"<<index<<endl;

    //2nd
    int arr[]={-2,0,-1};
    int n1=sizeof(arr)/sizeof(int);
    int val=maxProduct(arr,n1);
    cout<<"The Maximum Product is:"<<val<<endl;
    return 0;
}