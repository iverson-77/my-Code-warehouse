/*����һ���ǿ��������飬����ĳ��Ԫ��ֻ����һ�����⣬
����ÿ��Ԫ�ؾ��������Ρ��ҳ��Ǹ�ֻ������һ�ε�Ԫ�ء�*/

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
