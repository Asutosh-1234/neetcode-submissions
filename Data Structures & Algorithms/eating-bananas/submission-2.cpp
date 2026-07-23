class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxPiles = 0;
        int minPiles = 1;
        for (int i : piles){
            maxPiles = max(maxPiles, i);
            minPiles = min(minPiles, i);
        }
        int ans = maxPiles;
        while(minPiles < maxPiles){
            int mid = minPiles + ((maxPiles - minPiles) / 2);
            long long total  = 0;
            for(int i : piles){
                total += ceil(static_cast<double>(i)/mid);
            }

            if(total > h){
                minPiles = mid + 1;
            }else{
                maxPiles =  mid;
                ans = mid;
            }
        }
        return ans;
        
    }
};
