# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def inorder(self, root, ans):
        if not root: return None

        self.inorder(root.left, ans)
        ans.append(root.val)
        self.inorder(root.right, ans)

    def isValidBST(self, root: Optional[TreeNode]) -> bool:
        if not root: return True

        ans = []
        self.inorder(root, ans)

        for i in range(1, len(ans)):
            if ans[i] <= ans[i - 1]:
                return False
        
        return True