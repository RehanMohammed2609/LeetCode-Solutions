## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** [https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/2162275153]

### Approach

Keep track of the lowest stock price seen so far. For each day, calculate
the profit by selling at the current price and buying at the lowest price.

Update the maximum profit whenever a higher profit is found, and update the
minimum price whenever a lower price is encountered.

### Complexity

- Time: 0 ms
- Space: 16 MB

### Notes

The stock must be bought before it is sold, so the minimum price is always
taken from an earlier day. If no profitable transaction is possible, the
maximum profit remains 0.