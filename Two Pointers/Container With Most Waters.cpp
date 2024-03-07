class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxWaterContainer = 0;

        while(left<right){
            cout<<height[left]<<" "<<height[right]<<endl;
            int heightContainer  = min(height[left],height[right]);
            int widthContainer  = right-left;
            maxWaterContainer = max(maxWaterContainer,heightContainer*widthContainer);
            if(height[left]<height[right])
                left++;
            else 
                right--;
        }

        return maxWaterContainer;
    }
};