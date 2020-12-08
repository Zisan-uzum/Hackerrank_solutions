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