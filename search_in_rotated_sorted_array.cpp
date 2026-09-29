//q33
//binary search
//TC=O(logn)
class Solution {
public:
    int search(vector<int>& nums, int target) {
       int n= nums.size();
       int start=0;
       int end=n-1;
       while(start<=end){
            int mid=start+(end-start)/2;
            if(target==nums[mid]){
                return mid;
            }
            //assuming if left part is sorted
            if(nums[start]<=nums[mid]){
                //if it is at the left side
                if(nums[start]<=target && target<=nums[mid]){
                    end=mid-1;
                }
                else{
                    start=mid+1;
                }
            }
            //assuming if right part is sorted
            else{
                //if it is at the right side
                if(nums[mid]<=target && target<=nums[end]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
       }
       return -1;
    }
};
