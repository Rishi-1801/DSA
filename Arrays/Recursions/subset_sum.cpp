#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subsetSum(int i, int sum,vector<int>& a,vector<int>& ans){
    if(i==a.size()){
        ans.push_back(sum);
        return;
    }

    //pick the object
    subsetSum(i+1,sum+a[i],a,ans);

    //not pick the object
    subsetSum(i+1,sum,a,ans);
}

int main(){
    vector<int> nums={3,1,2};
    vector<int> ans;
    subsetSum(0,0,nums,ans);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}