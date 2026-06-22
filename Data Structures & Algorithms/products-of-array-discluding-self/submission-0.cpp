class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      vector<int> arr(nums.size(),1);
      int n = nums.size();

      for(int i=0 ; i<n ; i++)
      {
        for(int j=0 ; j<n ; j++)
        {
            if(j == i)
            {
                continue;
            }else
            {
                arr[i] *= nums[j];
            }
        }
      }
      return arr;
    }
};
