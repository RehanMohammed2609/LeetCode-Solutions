## Problem: Two Sum (Easy)

**Link:** [https://leetcode.com/problems/two-sum/submissions/2162249065]

### Approach

Use a hash table to store each number and its index as we iterate through
the array. For each number, calculate its complement (`target - nums[i]`)
and check if that complement has already been stored. If found, return
the stored index and the current index.

Linear probing is used to handle hash collisions.

### Complexity

- Time: 0 ms average
- Space: 10.34 MB
### Notes

The solution handles duplicate values and ensures the same array element
is never used twice. The hash table stores both the value and its original
index so the required indices can be returned.