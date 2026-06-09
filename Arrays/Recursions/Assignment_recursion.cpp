#include<iostream>
#include<vector>
using namespace std;


//Q1
int binarySearch(vector<int> a,int st,int end,int target){
    int mid=(st+end)/2;
    if(a[mid]==target){
        return mid;
    }
    if(target>a[mid] && st<=end){
      return binarySearch(a,mid+1,end,target);
    }else if(target<a[mid] && st<=end){
       return binarySearch(a,st,mid-1,target);
    }
    return -1;
}

//Q2
void allOccurrences(vector<int> a,int i,int target){
    if(i==a.size()){
        return;
    }
    if(a[i]==target){
        cout<<i<<" ";
        allOccurrences(a,i+1,target);
    }else{
        allOccurrences(a,i+1,target);
    }
}

//Q3
int contSubstrings(string s,int i,int j,int n){
    if(n==1){
        return 1;
    }
    if(n<=0){
        return 0;
    }
    int res=contSubstrings(s,i+1,j,n-1)+contSubstrings(s,i,j-1,n-1)-contSubstrings(s,i+1,j-1,n-2);

    if(s[i]==s[j]){
        res++;
    }
    return res;
}

//Q4
void towerofHonai(int n , string src,string helper,string dest){
    if(n==1){
        cout<<"transfer disk "<<n<<" from "<<src<<"to "<<dest<<endl;
        return;
    }
    //transfer the n-1 disk to helper from source
    towerofHonai(n-1,src,dest,helper);
    //transfer nth disk from src to dest
    cout<<"transfer disk "<<n<<" from "<<src<<" to "<<dest<<endl;
    //transfer n-1 disk from helper to destion taking src as help
    towerofHonai(n-1,helper,src,dest);

}

int main(){
    vector<int> arr={1,2,3,4,5,7};
    vector<int> arr1={3,2,4,5,6,2,7,2,2};
    int idx=binarySearch(arr,0,arr.size()-1,6);
    cout<<"index:"<<idx<<endl;

    allOccurrences(arr1,0,2);
    int ans=contSubstrings("abcab",0,4,5);
    cout<<"ans:"<<ans<<endl;

    towerofHonai(4,"A","B","C");
}