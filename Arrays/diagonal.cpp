#include<iostream>
using namespace std;

//brute force O(N2)
int diagonalSum(int a[][3],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sum+=a[i][j];
            }
            else if((i+j)==n-1){
                sum+=a[i][j];
            }
        }
    }
    return sum;
}

//optimised O(N)
int diagonalSum2(int a[][3],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i][i];
        if(i!=n-i-1){
            sum+=a[i][n-i-1];
        }
    }
    return sum;
}

int main(){
    int matrix[3][3]={{1,2,3},{5,6,7},{9,10,11}};
    int val=diagonalSum(matrix,3);
    int val2=diagonalSum2(matrix,3);
    cout<<"The Sum of Diagonal elements :"<<val2<<endl;
}