//q 540
//binary search
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        int mid;
        if(nums.size()==1){
            return nums[0];
        }
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[0]!=nums[1]){ 
                return nums[0]; 
            }
            if(nums[nums.size()-1]!=nums[nums.size()-2]){ 
                return nums[nums.size()-1]; 
            }
            if(nums[mid]!=nums[mid-1]&&nums[mid]!=nums[mid+1]){
                return nums[mid];
            }
            if(mid%2==0){   //even in both sides
                if(nums[mid-1]==nums[mid]){ //go to right side
                    end=mid-1;
                }
                else{   //go to left side
                    start=mid+1;
                }
            }
            else{   //odd in both sides
                if(nums[mid-1]==nums[mid]){ //go to left side
                    start=mid+1;
                }
                else{   //go to right side
                    end=mid-1;
                }
            }
        }
        return -1;
    }
};
