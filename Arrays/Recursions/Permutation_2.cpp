#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void permute(int idx,vector<int>&nums,vector<vector<int>>&ans){
    if(idx==nums.size()){
        ans.push_back(nums);
        return;
    }

    for(int i=idx;i<nums.size();i++){
        swap(nums[idx],nums[i]); // Swapping the index
        permute(idx+1,nums,ans);
        swap(nums[idx],nums[i]);  // reverse swap to get original one(back track)
    }
}

int main(){
    vector<int>nums={1,2,3};
    vector<vector<int>>ans;
    permute(0,nums,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}