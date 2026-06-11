#include<iostream>
#include<vector>
using namespace std;

void findCombination(int i,vector<int> &a,vector<vector<int>> &ans,int tar,vector<int> &ds){
    if(i==a.size()){
        if(tar==0){
            ans.push_back(ds);
        }
        return;
    }

    //pick the object
    if(a[i]<=tar){ 
        ds.push_back(a[i]);
        findCombination(i,a,ans,tar-a[i],ds);
        ds.pop_back();
    }
    //not to pick the object
    findCombination(i+1,a,ans,tar,ds);
}

vector<vector<int>> CombinationSum(vector<int> &nums,int target){
    vector<int>ds;
    vector<vector<int>> ans;
    findCombination(0,nums,ans,target,ds);
    return ans;
}

int main(){
    vector<int> nums={2,3,4,7};
    vector<vector<int>> ans=CombinationSum(nums,7);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}