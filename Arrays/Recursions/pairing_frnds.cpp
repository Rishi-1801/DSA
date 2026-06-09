#include<iostream>
using namespace std;
int fp(int n){
    if(n==1||n==2){
        return n;
    }
    return fp(n-1)+(n-1)*fp(n-2);    //fp(n-1) for the without pairing and no of ways u can pair is n-1 and if paired fp(n-2)
}

int main(){
    int sol=fp(4);
    cout<<sol<<endl;
}