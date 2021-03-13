  
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //define variable
        vector<int> answer;
        map<int,int> hashmap;
        int order;
        for(int i=0;i<nums.size();i++)
        {
            order=target-nums[i]; //目標值減去當前index的值
            if(hashmap.count(order) && hashmap[order]!=i) //查詢array是否有滿足的值
            {
                answer.push_back(hashmap[order]);
                answer.push_back(i);
                break;
            }
            hashmap[nums[i]]=i;
        }
        return answer;
    }
};
