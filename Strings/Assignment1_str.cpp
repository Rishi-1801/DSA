#include<iostream>
#include<string>
using namespace std;

//Q1  the no of  lowercase vowels in the sting
//Q2  by performing at most 1 swap check if s1==s2 if true return true else return false

void smallVowels(string s1){
    int count=0;
    for(char ch:s1){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            count++;
        }
    }
    cout<<"The no of lowercase Vowels are:"<<count<<endl;
}

bool equalSwap(string s1, string s2){
    if(s1.length()!=s2.length()){
        return false;
    }
    int diff=0;
    char diffcahr1,diffchar2;
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]){
            if(!diff){
                diffcahr1=s1[i];
                diffchar2=s2[i];
            }else{
                if(s1[i]!=diffchar2 || s2[i]!=diffcahr1){
                    return false;
                } 
            }
            diff++;
        }
        if(diff>2){
            return false;
        }
    }
    if(diff==1){
        return false;
    }
    return true;
}

int main(){
    string s1="abc",s2="acc";
    smallVowels(s1);
    bool x=equalSwap(s1,s2);
    if(x){
        cout<<true;
    }else{
        cout<<false;
    }
}