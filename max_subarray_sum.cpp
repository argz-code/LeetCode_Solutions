#include<iostream>
#include<limits.h>
using namespace std;

int main(){
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
    cout<<maxsum<<endl;
    return 0;
}