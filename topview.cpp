#include<bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }


void leftImportantSearch(Node* node, int pos, vector<int>& storage) {
        if(!node) {
            return;
        }
        if(pos==storage.size()) {
            storage.push_back(node->data);
        }
        leftImportantSearch(node->left, pos+1, storage);
        leftImportantSearch(node->right, pos-1, storage);
    }

    void rightImportantSearch(Node* node, int pos, vector<int>& storage) {
        if(!node) {
            return;
        }
        if(pos==storage.size()) {
            storage.push_back(node->data);
        }
        rightImportantSearch(node->right, pos+1, storage);
        rightImportantSearch(node->left, pos-1, storage);
    }

    void topView(Node* root) {
        vector<int> leftPath;
        vector<int> rightPath;
        leftImportantSearch(root, 0, leftPath);
        rightImportantSearch(root, 0, rightPath);

        for(int i=leftPath.size()-1;i>0;i--) {
            cout << leftPath[i] << " ";
        }

        for(int i:rightPath) {
            cout << i << " ";
        }
        cout << endl;
    }
   

}; 
int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
	myTree.topView(root);
    return 0;
}
