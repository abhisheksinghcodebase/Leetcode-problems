class Solution {
public:
    void mergeSort(vector<int>& nums, vector<int>& temp, int left, int right) {
        if (left >= right)
            return;

        int mid = left + (right - left) / 2;

        mergeSort(nums, temp, left, mid);
        mergeSort(nums, temp, mid + 1, right);

        // Already sorted, no need to merge
        if (nums[mid] <= nums[mid + 1])
            return;

        int i = left;
        int j = mid + 1;
        int k = left;

        while (i <= mid && j <= right) {
            if (nums[i] <= nums[j])
                temp[k++] = nums[i++];
            else
                temp[k++] = nums[j++];
        }

        while (i <= mid)
            temp[k++] = nums[i++];

        while (j <= right)
            temp[k++] = nums[j++];

        for (int x = left; x <= right; x++)
            nums[x] = temp[x];
    }

    vector<int> sortArray(vector<int>& nums) {
        int n = nums.size();

        vector<int> temp(n);

        mergeSort(nums, temp, 0, n - 1);

        return nums;
    }
};