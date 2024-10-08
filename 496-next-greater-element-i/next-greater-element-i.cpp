class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreaterMap;
        stack<int> st;

        for (int i = nums2.size() - 1; i >= 0; --i) {
            int num = nums2[i];
            while (!st.empty() && st.top() <= num) {
                st.pop();
            }
            nextGreaterMap[num] = st.empty() ? -1 : st.top();
            st.push(num);
        }
        vector<int> result;
        for (int num : nums1) {
            result.push_back(nextGreaterMap[num]);
        }

        return result;
    }
};
