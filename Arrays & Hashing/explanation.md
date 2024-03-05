# LeetCode Problem 217: Contains Duplicate

## Problem Statement

Given an integer array `nums`, return `true` if any value appears at least twice in the array, and return `false` if every element is distinct.

### Examples

**Example 1:**

Input: `nums = [1,2,3,1]`
Output: `true`

**Example 2:**

Input: `nums = [1,2,3,4]`
Output: `false`

**Example 3:**

Input: `nums = [1,1,1,3,3,4,3,2,4,2]`
Output: `true`

### Constraints

- 1 <= nums.length <= 10^5
- (-10^9) <= nums[i] <= 10^9


# Understanding LeetCode Problem 217: Contains Duplicate

## Introduction
LeetCode Problem 217 asks us to determine whether an array contains any duplicate elements. We're given an integer array and need to return true if any value appears at least twice in the array, and false if every element is distinct. This problem is a classic example of using a hash set to efficiently detect duplicates.

## Solution Overview
To solve this problem efficiently, we can utilize a hash set data structure. We iterate through the array, adding each element to the set. If we encounter an element that already exists in the set, we return true, indicating the presence of a duplicate. If we complete the iteration without finding any duplicates, we return false.

### Detailed Explanation
Let's dive deeper into the solution provided:

```cpp
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_set<int> s;

       for(auto num : nums) {
           if(s.count(num) > 0) // If the element already exists in the set
               return true;
           else
               s.insert(num); // Add the element to the set
       }
       return false;
    }
};
```
- **Initialization:** We initialize an empty unordered set `s` to store unique elements encountered so far.
- **Iteration:** We loop through each element `num` in the input array `nums`.
- **Checking for Duplicate:** For each element `num`, we check if it already exists in the set `s`. We use the `count` function of the set to check if `num` is present. If the count is greater than 0, it means the element already exists in the set, indicating a duplicate. In such a case, we return `true`.
- **Inserting Unique Elements:** If `num` is not found in the set, we insert it into the set using the `insert` function. This ensures that we maintain a set of unique elements encountered so far.
- **Returning Result:** If we complete the iteration without finding any duplicates, we return `false`, indicating that the array contains only distinct elements.

### Time and Space Complexity
- **Time Complexity:** The time complexity of this solution is O(n), where n is the number of elements in the input array. This is because we iterate through the array once, and each lookup or insertion operation in the unordered set takes O(1) time on average.
- **Space Complexity:** The space complexity of this solution is also O(n), where n is the number of elements in the input array. This is because, in the worst case, the set may contain all unique elements of the input array.
