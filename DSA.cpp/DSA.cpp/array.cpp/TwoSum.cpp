class Solution {
public:
    vector<int> twoSum(vector<int> &arr, int target) {
        // Create a vector of pairs to store the original indices along with the values
        vector<pair<int, int>> indexedArr;
        for (int i = 0; i < arr.size(); ++i) {
            indexedArr.push_back({arr[i], i});
        }

        // Sort the indexed array based on values
        sort(indexedArr.begin(), indexedArr.end(), [](const auto &a, const auto &b) {
            return a.first < b.first;
        });

        int left = 0, right = arr.size() - 1;

        while (left < right) {
            int sum = indexedArr[left].first + indexedArr[right].first;
            if (sum == target) {
                // Return the indices of the two numbers from the original array
                return {indexedArr[left].second, indexedArr[right].second};
            } else if (sum < target) {
                left++;
            } else {
                right--;
            }
        }

        // Return an empty vector if no such pair is found
        return {};
    }
};
    
