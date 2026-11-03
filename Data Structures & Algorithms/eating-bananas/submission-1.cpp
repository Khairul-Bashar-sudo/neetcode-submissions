class Solution {
public:
    bool is_possible(int k,vector<int>&piles,int h){
        long long hrs=0;
        for(int i=0; i<piles.size();i++){
            hrs+=(piles[i]+k-1)/k;

        }
        return hrs<=h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(begin(piles),end(piles));
        int ans=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(is_possible(mid,piles,h)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
