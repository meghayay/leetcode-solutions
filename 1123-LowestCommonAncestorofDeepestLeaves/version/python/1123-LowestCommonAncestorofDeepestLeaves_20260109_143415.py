# Last updated: 9/1/2026, 2:34:15 pm
1# Definition for a binary tree node.
2# class TreeNode:
3#     def __init__(self, val=0, left=None, right=None):
4#         self.val = val
5#         self.left = left
6#         self.right = right
7class Solution:
8    def lcaDeepestLeaves(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
9
10
11
12        def dfs(node):
13            if not node:
14                return(None, 0)
15
16            leftNode, leftHeight = dfs(node.left)
17            rightNode, rightHeight = dfs(node.right)
18
19            if leftHeight == rightHeight:
20                return node, 1+ leftHeight
21            elif leftHeight> rightHeight:
22                return leftNode, leftHeight + 1
23            else:
24                return rightNode, rightHeight + 1
25        node, _ = dfs(root)
26        return node
27        
28
29        