//q 11
//two pointer approach
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1,area,maxarea=0;
        while(l<r){
            area=(r-l)*(min(height[l],height[r]));
            maxarea=max(area,maxarea);
            height[l]<height[r] ? l++ : r--;
        }
        return maxarea;
    }
};
