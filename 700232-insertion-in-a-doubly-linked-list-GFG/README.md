# [Insertion in a Doubly Linked List](https://www.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1)
## Easy
Given the head of a doubly-linked list, a position p, and an integer x. Insert a new node with value x at the position just after pth node&nbsp;(0-based indexing) in the doubly linked list and return the head of the modified list.
Examples:
Input: p = 2, x = 6Output: 2 &lt;-&gt; 4 &lt;-&gt; 5 &lt;-&gt; 6
Explanation: Insert a node of value 6 after the 2nd node.
Input: p = 0, x = 44 Output: 1 &lt;-&gt; 44 &lt;-&gt; 2 &lt;-&gt; 3 &lt;-&gt; 4
Explanation: Insert a node of value 44 after the 0th node.
Constraints:0 ≤ p &lt; list size ≤ 1040 ≤ x, node-&gt;data&nbsp;≤ 104