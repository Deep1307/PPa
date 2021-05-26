class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int cmax = INT_MIN;
        int ans = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++ ){
            cmax = max(cmax,arr[i]);
            if(cmax == i){
               ans++;
            }
        }
        return ans;
    }
};