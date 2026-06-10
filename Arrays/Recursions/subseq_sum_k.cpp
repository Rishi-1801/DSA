#include<iostream>
#include<vector>
using namespace std;

void sumSbsequences(int i,vector<int> ds,int sum,int arr[],int n,int t){
    if(i>=n){
        if(sum==t){
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return ;
    }
    //pick the object from the array
    ds.push_back(arr[i]);
    sum+=arr[i];
    sumSbsequences(i+1,ds,sum,arr,n,t);
    ds.pop_back();
    sum-=arr[i];

    //not pick the object
    sumSbsequences(i+1,ds,sum,arr,n,t);
}

int main(){
    int arr[]={1,2,1};
    vector<int> ds;
    int n=3;
    int targetSum=2;
    int sum=0;
    sumSbsequences(0,ds,sum,arr,n,targetSum);
}