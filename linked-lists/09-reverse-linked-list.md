## Problem: Reverse Linked List (Easy)

**Link:** [https://leetcode.com/problems/reverse-linked-list/submissions/2162280064]

### Approach

Use three pointers: `prev`, `current`, and `next`.

Start with `prev` as `NULL` and `current` as the head of the list. For each
node, save the next node, reverse the current node's pointer to point to
`prev`, then move both pointers forward.

Finally, `prev` becomes the new head of the reversed list.

### Complexity

- Time: 0 ms
- Space: 11.32 MB

### Notes

The list is reversed in-place without creating any new nodes. The `next`
pointer is saved before changing it so that the rest of the list is not
lost.