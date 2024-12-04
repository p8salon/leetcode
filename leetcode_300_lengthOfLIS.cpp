class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int len = nums.size();
        int ret = 0;
        vector<int> v(len);
        
        if(len==0)
            return ret;
         
        for(int i=0; i<len; i++)
        {
            int tmp = 1;
            for(int j=0; j<i; j++)
            {
                if(nums[i] > nums[j])
                {
                    tmp = max(tmp, v[j]+1);
                }
            }
            v[i] = tmp;
            ret = max(ret, tmp);
        }
        
        return ret;
    }
};
