#include<iostream>
using namespace std;

int tp(int n){
    if(n==1||n==0){
        return 1;
    }
    return tp(n-1)+tp(n-2);   // n-1 for keeping the curr tile vertical checking next,  for n-2 keeping curr tile as horizontal and check next
}

int main(){
    int ans=tp(4);
    cout<<ans<<endl;
}