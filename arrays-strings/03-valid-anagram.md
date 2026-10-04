## Problem: Valid Anagram (Easy)

**Link:** [https://leetcode.com/problems/valid-anagram/submissions/2162271272]

### Approach

Use an integer array of size 26 to count the frequency of each lowercase
English letter in `s`. Then subtract the frequency of each letter in `t`.

If all 26 counts are zero, both strings contain the same characters with
the same frequencies, so they are anagrams.

### Complexity

- Time: 0 ms
- Space: 8.86 MB

### Notes

The solution works because the input contains only lowercase English
letters. The fixed-size array of 26 elements uses constant extra space.