#include<iostream>
#include<vector>
using namespace std;

int firstOccurance(vector<int> arr,int i,int target){
    if(i==arr.size()){
        return -1;
    }
    if(arr[i]==target){
        return i;
    }
    return firstOccurance(arr,i+1,target);
}


//1st Method
int lastOccurance1(vector<int> arr,int i,int target){
    if(i<0){
        return -1;
    }
    if(arr[i]==target){
        return i;
    }
    return lastOccurance1(arr,i-1,target);
}


//2nd Method
int lastOccurance2(vector<int> arr,int i, int target){
    if(i==arr.size()){
        return -1;
    }
    int idx=lastOccurance2(arr,i+1,target);
    if(idx==-1 && arr[i]==target){
        return i;
    }
    return idx;
}

int pow(int x,int n){
    if(n==0){
        return 1;
    }
    int halfpower=pow(x,n/2);
    int halfSquare=halfpower*halfpower;

    if(n%2!=0){
        return x*halfSquare;
    }else{
        return halfSquare;
    }
}

int main(){
    vector<int> arr1={1,2,3,3,3,4};
    int idx1=firstOccurance(arr1,0,3);
    int idx2=lastOccurance1(arr1,arr1.size()-1,3);
    int idx3=lastOccurance2(arr1,0,3);
    cout<<idx1<<endl;
    cout<<idx2<<endl;
    cout<<idx3<<endl;

    int n=pow(3,5);
    cout<<n<<endl;
}