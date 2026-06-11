//extension of Combination Sum
//each ele used once and no repeated combinations

//2nd Technique used

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void findCombination(int idx,vector<int>& a,vector<int>& ds,vector<vector<int>>& ans,int tar){
    if(tar==0){
        ans.push_back(ds);
        return;
    }
    for(int i=idx;i<a.size();i++){
        if(i>idx && a[i]==a[i-1])
        continue;
        if(a[i]>tar)
        break;
        ds.push_back(a[i]);
        findCombination(i+1,a,ds,ans,tar-a[i]);
        ds.pop_back();
    }
}

vector<vector<int>> CombinationSum2(vector<int>& nums,int target){
    vector<int> ds;
    vector<vector<int>> ans;
    findCombination(0,nums,ds,ans,target);
    return ans;
}

int main(){
    vector<int> nums={2,1,2,1,1};
    sort(nums.begin(),nums.end());
    vector<vector<int>> ans=CombinationSum2(nums,4);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}