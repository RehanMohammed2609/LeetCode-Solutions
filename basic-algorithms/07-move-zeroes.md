## Problem: Move Zeroes (Easy)

**Link:** [https://leetcode.com/problems/move-zeroes/submissions/2162298327]

### Approach

Use a pointer `pos` to track the position where the next non-zero element
should be placed. Iterate through the array, and whenever a non-zero
element is found, swap it with the element at `pos` and move `pos` forward.

This places all non-zero elements at the beginning while moving all zeroes
to the end, without changing the relative order of the non-zero elements.

### Complexity

- Time: 0 ms
- Space: 20.43 MB

### Notes

The array is modified in-place without creating a copy. Swapping only when
a non-zero element is found preserves the relative order of all non-zero
elements.