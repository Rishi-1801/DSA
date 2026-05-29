#include<iostream>
#include<string>
using namespace std;

bool Anagrams(string str1, string str2){
    
    if(str1.length()!=str2.length()){
        return false;
    }
    int count[26]={0};
        for(int i=0;i<str1.length();i++){
            count[str1[i]-'a']++;
        }

        for(int i=0;i<str1.length();i++){
            if(count[str2[i]-'a']>0){
                count[str2[i]-'a']--;
            }else{
                return false;
            }
        }
        return true;
}

int main(){
    string s1="listen";
    string s2="silent";
    bool val=Anagrams(s1,s2);
    if(val){
        cout<<"Both are Anagrams";
    }else{
        cout<<"Not Anagrams";
    }
}
