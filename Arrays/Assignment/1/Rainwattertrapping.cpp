class Solution {
public:

int trap(vector<int>& height) 
{
    int n = height.size();
    if(n == 0 || n == 1)
        return 0;
    
    int Pmax[n], Smax[n];
    
    Pmax[0] = height[0];
    
    for(int i = 1; i < n; i++)
        Pmax[i] = max(height[i], Pmax[i - 1]);
    
    Smax[n - 1] = height[n - 1];
    
    for(int i = n - 2; i >= 0; i--)
        Smax[i] = max(height[i], Smax[i + 1]);
    
    int res = 0;
    for(int i = 0; i < n; i++)
        res += min(Smax[i], Pmax[i]) - height[i];
    
    return res;
}
};