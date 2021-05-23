/*给定一个非空整数数组，除了某个元素只出现一次以外，
其余每个元素均出现两次。找出那个只出现了一次的元素。*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int val=0;
        for(const auto &e:nums)
        {
            val=val^e;
        }
        return val;
    }
}; 
