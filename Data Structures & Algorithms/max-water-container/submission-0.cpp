class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxarea=0;
        int i=0;
        int j=heights.size()-1;
        while(i<j){
            maxarea=max(maxarea,min(heights[i],heights[j])*(j-i));
            if(heights[i]<=heights[j]){
                i++;
            }
            else j--;
        }
        return maxarea;

    }
};
