## Problem: Longest Common Prefix (Easy)

**Link:** [https://leetcode.com/problems/longest-common-prefix/submissions/2162284764]

### Approach

Use the first string as the initial prefix. Compare it with every other
string character by character and reduce the prefix length whenever the
characters do not match.

After checking all strings, create and return a new string containing the
remaining common prefix.

### Complexity

- Time: 0 ms
- Space: 9.02 MB
### Notes

The solution handles cases where there is no common prefix by returning an
empty string. `m` represents the length of the shortest string, while `n`
is the number of strings.