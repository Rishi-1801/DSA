#include<iostream>
using namespace std;

//Bruteforce O(n3)
void maxSumSubarry(int a[],int n){
    int maxsum=INT_MIN;
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            int cursum=0;
            for(int i=st;i<=end;i++){
                cursum+=a[i];
            }
            maxsum=max(maxsum,cursum);
        }
    }
    cout<<"The Maximun Sum of the SubArray:"<<maxsum<<endl;
}

//O(n2) improved version of above one
void maxSumSubarry2(int a[],int n){
    int maxsum=INT_MIN;
    for(int st=0;st<n;st++){
        int cursum=0;
        for(int end=st;end<n;end++){
            cursum+=a[end];
            maxsum=max(maxsum,cursum);
        }
    }
    cout<<"The Maximun Sum of the SubArray:"<<maxsum<<endl;
}

//Kadane's Algorithm O(n) optimised
void Kadane(int a[],int n){
    int maxsum=INT_MIN;
    int cursum=0;
    for(int i=0;i<n;i++){
        cursum+=a[i];
        maxsum=max(maxsum,cursum);
        if(cursum<0){
            cursum=0;
        }
    }
    cout<<"The Maximun Sum of the SubArray:"<<maxsum<<endl;
}

int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n= sizeof(arr)/sizeof(int);
    maxSumSubarry(arr,n);
    maxSumSubarry2(arr,n);
    Kadane(arr,n);
    return 0;
}