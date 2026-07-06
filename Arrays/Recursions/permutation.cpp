#include<iostream>
#include<vector>
using namespace std;

void permute(vector<int>&nums,vector<vector<int>>&ans,vector<int>ds,int freq[]){
    if(nums.size()==ds.size()){
        ans.push_back(ds);
        return;
    }

    for(int i=0;i<nums.size();i++){
        if(!freq[i]){
            ds.push_back(nums[i]);
            freq[i]=1;
            permute(nums,ans,ds,freq);
            ds.pop_back();
            freq[i]=0;
        }
    }
}

int main(){
    vector<vector<int>>ans;
    vector<int>ds;
    vector<int>nums={1,2,3};
    int freq[nums.size()]={0};
    permute(nums,ans,ds,freq);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}