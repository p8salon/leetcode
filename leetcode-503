class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int len = nums.size();
        vector<int> ans(len, -1);
        stack<int> s;
        
        nums.resize(2*len);
        for(int i=len; i<2*len; i++)
        {
            nums[i] = nums[i - len];
        }
        
        for(int i=0; i<2*len; i++)
        {
            while(s.size()>0 && nums[i%len]>nums[s.top()])
            {
                ans[s.top()] = nums[i%len];
                s.pop();
            }
            s.push(i%len);
        }
        
        return ans;
    }
};
