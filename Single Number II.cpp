class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len = nums.size();
        unordered_map <int, int> m;
        unordered_map <int, int> :: iterator it;
        for(int i = 0; i < len; i++){
            m[nums[i]]++;
        }
        for(it = m.begin(); it != m.end(); it++){
            if(it->second == 1){
                return it-> first;
            }
        }
        return 0; 
    }
};
