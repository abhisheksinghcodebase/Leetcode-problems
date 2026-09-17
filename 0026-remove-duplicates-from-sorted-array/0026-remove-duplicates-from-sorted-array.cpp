class Solution {
public:
int removeDuplicates(vector<int>& nums) {
    int i =0,  size = nums.size();

    
    int idx = 0;
    while(i < size ) {
        if (i == 0 || nums[i] != nums[i - 1]) {
            nums[idx++] = nums[i];
        }
        i++;
    }
    return idx;
}   
};



