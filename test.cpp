#include<iostream>
using namespace std;

//frequency counts
int freq(int a[][3],int n ,int m,int key){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==key){
                count++;
            }
        }
    }
    return count;
}

void printMatrix(int a[][3],int n, int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

//Second Row Sum
int secondSum(int a[][3],int n,int m){
    int sum=0;
    int i=1;
    for(int j=0;j<m;j++){
        sum+=a[i][j];
    }
    return sum;
}

//without extra space only for n==m cases
void transpose2(int a[][3],int n,int m){

    for (int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(a[i][j],a[j][i]);
        }
    }

}

//for all transpose
void transpose(int a[][3],int n,int m){
    int b[m][3];
    cout<<"Before Transpose"<<endl;
    printMatrix(a,n,m);
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            b[j][i]=a[i][j];
        }
    }
    cout<<"After Applying Transpose"<<endl;
    printMatrix(b,m,n);
}

//The matrix is (90) rotated n==m (in place)
//solution: transpose and rev each row
void rotate(int a[][3],int n,int m){
    
    cout<<"Before Rotation"<<endl;
    printMatrix(a,n,m);
    transpose2(a,n,m);
    for(int i=0;i<n;i++){
        int st=0,end=n-1;
        while(st<end){
            swap(a[i][st],a[i][end]);
            st++,end--;
        }
    }

    cout<<"After Roatation"<<endl;
    printMatrix(a,n,m);
}
int main(){
    int arr[][3]={{4,7,8},{8,8,7}};

    //1Q
    int val1=freq(arr,2,3,7);
    cout<<"The no of 7 in Matrix are:"<<val1<<endl;

    //2Q
    int nums[][3]={{1,4,9},{11,4,3},{2,2,3}};
    int val2= secondSum(nums,3,3);
    cout<<"The Second row sum is :"<<val2<<endl;

    //3Q
    transpose(nums,3,3);
    transpose2(nums,3,3);

    //4Q
    int nums2[][3]={{1,2,3},{4,5,6},{7,8,9}};
    rotate(nums2,3,3);
}