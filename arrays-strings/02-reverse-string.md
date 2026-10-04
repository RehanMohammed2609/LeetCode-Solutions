## Problem: Reverse String (Easy)

**Link:** [https://leetcode.com/problems/reverse-string/submissions/2162264287]

### Approach

Use two pointers, one starting at the beginning of the string and the
other at the end. Swap the characters at both pointers and move them
towards the center until the entire string is reversed.

The string is modified directly in-place.

### Complexity

- Time: 0 ms
- Space: 17.87 MB

### Notes

The solution uses a temporary variable to swap characters and does not
create another array or string. This satisfies the O(1) extra memory
requirement.