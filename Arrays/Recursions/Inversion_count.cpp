// Modified Merge Sort
#include<iostream>
#include<vector>
using namespace std;

int merge(vector<int> &a,int st,int mid,int end){
    int cnt=0,k=0;
    int i=st,j=mid+1;
    int temp[end-st+1];
    while(i<=mid && j<=end){
        if(a[i]>a[j]){
            temp[k++]=a[j++];
            cnt=mid-i+1;                     //left will be left in org and right will be right in org but when right[i]<left[i] change happens , as left is sorted already by that change the ele>left[i] in left also inverse so inversions=mid-i+1;
        }else{                                //count== no of greater ele present in left for each ele of right.
            temp[k++]=a[i++];
        }
    }
    while(i<=mid){
        temp[k++]=a[i++];
    }
    while(j<=end){
        temp[k++]=a[j++];
    }
    k=0;
    for(int i=st;i<=end;i++){
        a[i]=temp[k++];
    }
    return cnt;
}

int divide(vector<int> &a,int st,int end){
    int count=0;
    if(st<end){
        int mid=st+(end-st)/2;
        count=divide(a,st,mid);
        count+=divide(a,mid+1,end);
        count+=merge(a,st,mid,end);
    }
    return count;
}

int inversionCount(vector<int> &nums,int st,int end){
    int invCount=divide(nums,st,end);
    return invCount;
}

int main(){
    vector<int> arr={2,4,1,3,5};
    int ans=inversionCount(arr,0,arr.size()-1);
    cout<<"No of Inversions:"<<ans<<endl;
}
