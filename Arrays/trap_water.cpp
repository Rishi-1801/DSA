#include<iostream>
using namespace std;
int trap(int height[],int n){
    int left_max[n],right_max[n];
    left_max[0]=height[0];
    right_max[n-1]=height[n-1];

    //finding left max of each index
    for(int i=1;i<n;i++){       
        left_max[i]=max(left_max[i-1],height[i-1]);
    }

    //finding right max each index
    for(int i=n-2;i>=0;i--){
        right_max[i]=max(right_max[i+1],height[i+1]);
    }

    //calculating water at each index
    int water=0;
    int curwater;
    for(int i=0;i<n;i++){
        curwater=min(left_max[i],right_max[i])-height[i];
        if(curwater>0){
            water+=curwater;
        }
    }
    return water;
}

int main(){
    int heights[]={4,2,0,6,3,2,5};
    int n= sizeof(heights)/sizeof(int);
    int trapped_water=trap(heights,n);
    cout<<"The water Trapped:"<<trapped_water;
    return 0;
}
