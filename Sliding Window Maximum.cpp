class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        vector<int> result;
        deque<int> deq ;

        for(int i = 0 ; i < nums.size(); i++){
            while(!deq.empty() && deq.front() < i-k+1){
                deq.pop_front();
            } 
            while (!deq.empty() && nums[deq.back()] < nums[i]) {
                deq.pop_back();
            }
            deq.push_back(i);
            if (i >= k - 1) {
                result.push_back(nums[deq.front()]);
            }

        }

        return result;

        
    }
};