# Last updated: 9/1/2026, 2:01:56 pm
1# Definition for a binary tree node.
2# class TreeNode:
3#     def __init__(self, val=0, left=None, right=None):
4#         self.val = val
5#         self.left = left
6#         self.right = right
7class Solution:
8    def subtreeWithAllDeepest(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
9        def dfs(node):
10            if not node:
11                return (0,None)
12            ldepth,lnode=dfs(node.left)
13            rdepth,rnode=dfs(node.right)
14            if ldepth==rdepth:
15                return (ldepth+1,node)
16            if ldepth>rdepth:
17                return(ldepth+1,lnode)
18            if rdepth>ldepth:
19                return(rdepth+1,rnode)
20        return dfs(root)[1]
21
22        