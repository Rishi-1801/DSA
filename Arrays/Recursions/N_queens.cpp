#include<iostream>
#include<vector>
using namespace std;
bool isSafe(int row,int col,vector<string>&board,int n){
    int drow=row;
    int dcol=col;
    while(row>=0 && col>=0){       //Upper diagonal
        if(board[row][col]=='Q')return false;
        row--;
        col--;
    }
    col=dcol;
    row=drow; 
    while(col>=0){               //left side
        if(board[row][col]=='Q')return false;
        col--;
    }

    col=dcol;
    row=drow;
    while(row<n &&col>=0){
        if(board[row][col]=='Q')return false;
        col--;
        row++;
    }
    return true;
}
void n_queens(int col,vector<string>&board,vector<vector<string>>&ans,int n){
    if(col==n){
        ans.push_back(board);
        return;
    }
    for(int r=0;r<n;r++){
        if(isSafe(r,col,board,n)){
            board[r][col]='Q';              //placing Queen
            n_queens(col+1,board,ans,n);     //to next col
            board[r][col]='.';             //  backtracking
        }
    }
}

int main(){
    int n=4;
    vector<vector<string>>ans;
    vector<string>board(n);
    string a(n,'.');
    for(int i=0;i<n;i++)board[i]=a;

    n_queens(0,board,ans,n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<ans[i][j]<<endl;
        }
        cout<<endl;
    }
    return 0;
}
