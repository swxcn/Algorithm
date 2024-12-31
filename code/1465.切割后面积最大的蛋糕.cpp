/*
 * @lc app=leetcode.cn id=1465 lang=cpp
 *
 * [1465] 切割后面积最大的蛋糕
 */

// @lc code=start
const long long mod=1e9+7;
class Solution {
public:
    int maxArea(int h, int w, vector<int>& arr, vector<int>& brr) {
        long long a=0;
        arr.push_back(0);
        arr.push_back(h);
        sort(arr.begin(),arr.end());
        brr.push_back(0);
        brr.push_back(w);
        sort(brr.begin(),brr.end());
        for(int i=1;i<arr.size();i++)
        {
            a=max(a,(long long)(arr[i]-arr[i-1]));
            a%=mod;
        }
        long long b=0;
        for(int i=1;i<brr.size();i++)
        {
            b=max(b,(long long)(brr[i]-brr[i-1]));
            b%=mod;
        }
        return a%mod*b%mod;
    }
};
// @lc code=end

