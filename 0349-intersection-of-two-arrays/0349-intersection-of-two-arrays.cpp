
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int s1 = nums1.size();
        int s2 = nums2.size();

        vector<int> newlist;

        for (int i = 0; i < s1; i++) {
            for (int j = 0; j < s2; j++) {

                if (nums1[i] == nums2[j]) {
                    bool exists = false;

                    for (int x = 0; x < newlist.size(); x++) {
                        if (newlist[x] == nums1[i]) {
                            exists = true;
                            break;
                        }
                    }

                    if (!exists) {
                        newlist.push_back(nums1[i]);
                    }

                    break;
                }
            }
        }

        return newlist;
    }
};
