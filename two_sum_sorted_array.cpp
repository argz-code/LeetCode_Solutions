//q167
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>numbers={2,3,4,5,7};
    int target=6;
    int i=0,j=(numbers.size()-1);
    vector<int>two;
    while(i<j){
        int sum=numbers[i]+numbers[j];
        if(sum>target){
            j--;
        }
        else if(sum<target){
            i++;
        }
        else{
            two.push_back(i+1);
            two.push_back(j+1);
            break;
        }
    }
    for(int num : two) {
        cout << num << " ";
    }
    return 0;
}