#include<iostream>
using namespace std;

//if used in every row binSearch the O(NlogM)

//O(N+M)
bool search(int a[][4],int n,int m, int key){
    int i=0,j=m-1;

    while(i<n && j>=0){
        if(a[i][j] == key){
            cout<<"Key found at ("<<i<<","<<j<<")"<<endl;
            return true;
        }else if(a[i][j]<key){
            i++;   // down
        }else{
            j--;   //left
        }
    }
    cout<<"Key not found"<<endl;
    return false;
}

int main(){
    int matrix[4][4]={{10,20,30,40},{15,25,35,45},{27,29,37,48},{32,33,39,50}};
    search(matrix,4,4,100);
    return 0;
}