#include<iostream>
using namespace std;

//we will consider the given array as selling prices and for that we will find the best buy
void maxProfit(int prices[],int n){
    int bestbuy[n];
    bestbuy[0]=INT_MAX;
    for(int i=1;i<n;i++){
        bestbuy[i]=min(bestbuy[i-1],prices[i-1]);
    }
    int maxprofit=0;
    int curprofit;
    for(int i=0;i<n;i++){
        curprofit=prices[i]-bestbuy[i];
        maxprofit=max(maxprofit,curprofit);
    }
    cout<<"The Maximum Profit gained :"<<maxprofit;
}
int main(){
    int prices[]={7,1,5,3,6,4};
    int n=sizeof(prices)/sizeof(int);
    maxProfit(prices,n);
    return 0;
}