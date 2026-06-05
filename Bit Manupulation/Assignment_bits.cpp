#include<iostream>
using namespace std;

void clearRange(int num,int i,int j){
    int a=(1<<i)-1;
    int b=~(0)<<j+1;
    num=(num&b)|a;
    cout<<num<<endl;
}

int main(){
    clearRange(31,1,3);
}