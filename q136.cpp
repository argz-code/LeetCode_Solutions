//Single Number
  //best method(XOR solution)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
         int sum=0;
        for(int i:nums){
            sum=sum^i;
        }  
        return sum;
    }
};


/* 
    //beginner's method
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int count=0,a;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
            if(count==1){
                a=nums[i];
                break;}
            count=0;
        }
        return a; 
    }
};
*/
