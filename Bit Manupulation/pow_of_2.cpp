#include<iostream>
using namespace std;

//1
bool powerOf2(int num){
    return (num & num-1);
}

int clearIthBit(int num,int i){
   int mask=~(1<<i);
   return (mask & num);
}

//2
void updateIthBit(int num,int i,int val){
    num=num & ~(1<<i); //clear the ith bit
    num=num | (val<<i);
    cout<<num<<endl;
}

//3 clear last i bits
void clearItBits(int num,int i){
    num=num & (~(0)<<i);
    cout<<num<<endl;
}

//count the set bits
void countSetBits(int num){
    int count=0;
    while(num>0){
        count+=num & 1;
        num=num>>1;
    }
    cout<<"count:"<<count<<endl;
}

//fastExpo
void fastExpo(int x,int n){
    int ans=1;
    while(n>0){
        int lastDig=n&1;
        if(lastDig){
            ans*=x;
        }
        x*=x;
        n=n>>1;
    }
    cout<<ans<<endl;
}

int main(){
    int a=15;
    bool t=powerOf2(a);
    if(!t){
        cout<<"Power of 2"<<endl;
    }else{
        cout<<"Not power of 2 "<<endl;
    }

    updateIthBit(7,3,1);

    clearItBits(15,2);

    countSetBits(15);

    fastExpo(3,5);
    return 0;
}