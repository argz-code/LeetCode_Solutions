#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;

int main(){
    //brute force 
    /*
    int arr[]={3,-1,7,-4,5,9,-3,-7,10};
    int maxsum=INT_MIN;
    int cursum=0;
    for(int i=0;i<9;i++){
        cursum=0;
        for(int j=i;j<9;j++){
            cursum=cursum+arr[j];
            maxsum=max(cursum,maxsum);
        }
    }
    */
   //kadane's algorithm
    vector<int>nums={3,-1,7,-4,5,9,-3,-7,10};
    int cursum=0,maxsum=INT_MIN;
    for(int i:nums){
        cursum+=i;
        maxsum=max(cursum,maxsum);
        if(cursum<0){
            cursum=0;
        }
    }
    cout<<maxsum<<endl;
    return 0;
}