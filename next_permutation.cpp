//q 31
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //find the pivot element
        int pivot=-1,n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pivot=i;
                break;
            }
        }
        if(pivot==-1){ //edge case
            reverse(nums.begin(),nums.end());
            return;
        }
        //swap the next larger element with pivot
        for(int i=n-1; i>pivot;i--){
            if(nums[i]>nums[pivot]){
                swap(nums[i],nums[pivot]);
                break;
            }
        }
        //reverse the elements after pivot
        reverse(nums.begin()+pivot+1 , nums.end());
    }
};
