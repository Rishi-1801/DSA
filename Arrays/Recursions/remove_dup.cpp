#include<iostream>
#include<string>
using namespace std;

//1st Method using i
void removeDuplicates(string s,string ans,int i,int map[26]){
    if(i==s.size()){
        cout<<"ans:"<<ans<<endl;
        return;
    }
    char ch=s[i];
    int mapidx=(int)(ch-'a');
    if(map[mapidx]==1){
        removeDuplicates(s,ans,i+1,map);
    }else{
        map[mapidx]=1;
        removeDuplicates(s,ans+ch,i+1,map);
    }
}

//2nd Method not using i
void removeDuplicates2(string s,string ans,int map2[26]){
    if(s.size()==0){
        cout<<"ans:"<<ans<<endl;
        return;
    }
    int n=s.size();
    char ch=s[n-1];
    int mapidx=(int)(ch-'a');
    s=s.substr(0,n-1);
    if(map2[mapidx]==1){
        removeDuplicates2(s,ans,map2);
    }else{
        map2[mapidx]=1;
        removeDuplicates2(s,ans+ch,map2);
    }
}

int main(){
    string s="appnnacollege";
    string a="";
    int map[26]={0};
    int map2[26]={0};
    removeDuplicates(s,a,0,map);
    removeDuplicates2(s,a,map2);
}