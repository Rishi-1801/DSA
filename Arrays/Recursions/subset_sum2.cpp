#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void subsetSum2(int idx,vector<int>& a,vector<int>& ds,vector<vector<int>>& ans){
    ans.push_back(ds);       // 1 loop runs at each level so to get same no of ele at each level and 1 ele inc at each level(at each level instead of pick and not pick we think like there would be probabilty of any ele as first call)
    for(int i=idx;i<a.size();i++){
        if(i!=idx && a[i]==a[i-1])
        continue;
        ds.push_back(a[i]);
        subsetSum2(i+1,a,ds,ans);
        ds.pop_back();
    }
}

int main(){
    vector<int> nums={3,2,1,2,3,2};
    vector<vector<int>> ans;
    vector<int> ds;
    sort(nums.begin(),nums.end());
    subsetSum2(0,nums,ds,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}