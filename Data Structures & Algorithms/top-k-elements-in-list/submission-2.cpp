typedef pair<int,int> pa;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> freq;

        for(int num : nums)
        {
            freq[num] ++;
        }
        
        priority_queue< pa , vector<pa> , greater<pa>> qu;

        for(auto x : freq)
        {
            qu.push({x.second , x.first});

            if(qu.size() > k)
            {
                qu.pop();
            }
        }
        vector<int>ans;

        while(!qu.empty())
        {
            ans.push_back(qu.top().second);
            qu.pop();
        }

        return ans;
    }
};
