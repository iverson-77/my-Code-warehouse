/*����һ���������� nums ����ĳ��Ԫ�ؽ�����һ����,
����ÿ��Ԫ�ض�ǡ�������Ρ������ҳ��������Ǹ�ֻ������һ�ε�Ԫ�ء�*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a[10000][2]={0};
        int j;
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            for(j=0;j<k;j++)
            {
               if(a[j][0]==nums[i])
               {
                   a[j][1]++;
                   break;
               }
            }
            if(j==k)
            {
                a[k][0]=nums[i];
                a[k][1]=1;
                k++;
            }
        }
        int l;
        for(int p=0;p<k;p++)
        {
            if(a[p][1]==1)
            {
                l=a[p][0];
                break;
            }
        }
        return l;
    }
};
