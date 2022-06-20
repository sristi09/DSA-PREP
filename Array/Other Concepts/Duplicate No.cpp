//Uses linked list Floyd concept
//hare and tortoise 
//Detecting loops : https://www.youtube.com/watch?v=LUm2ABqAs1w
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int t=nums[0];
        int h=nums[0];
        while(1) {
            t = nums[t];
            h = nums[nums[h]];
            if(h==t)
                break;
        }
        h=nums[0];
        while(h!=t) {
            t=nums[t];
            h=nums[h];
        }
        return t;
        
    }
};
