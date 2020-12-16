import java.util.ArrayList;

class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode() {
    }

    TreeNode(int val) {
        this.val = val;
    }

    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

class inorder {

    ArrayList<Integer> list = new ArrayList<>();

    public void traverse(TreeNode root) {
        if (root == null) {
            return;
        } else {
            traverse(root.left);
            list.add(root.val);
            traverse(root.right);
        }
    }

    public TreeNode increasingBST(TreeNode root) {
        traverse(root); 

        TreeNode node = new TreeNode(list.get(0));
        TreeNode curr = node;
        for (int i = 1; i < list.size(); i++) {
           curr.right = new TreeNode(list.get(i));
           curr = curr.right;
        }
        return node;

    }

    public static void main(String[] args) {

    }

}