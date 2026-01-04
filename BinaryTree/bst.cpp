/*time O(n)
space O(h)*/
#include <iostream>
using namespace std;

// Node structure
struct Node {
    int val;
    Node* left;
    Node* right;

    Node(int x) {
        val = x;
        left = right = nullptr;
    }
};

// Insert a key into BST
Node* insert(Node* root, int key) {
    if (!root) return new Node(key); // empty spot found
    if (key < root->val) {
        root->left = insert(root->left, key);
    } else if (key > root->val) {
        root->right = insert(root->right, key);
    }
    return root; // unchanged root
}

// Search for a key in BST
bool search(Node* root, int key) {
    if (!root) return false;
    if (root->val == key) return true;
    if (key < root->val) return search(root->left, key);
    return search(root->right, key);
}

// Find minimum value node (used in deletion)
Node* findMin(Node* root) {
    while (root && root->left) {
        root = root->left;
    }
    return root;
}

// Delete a key from BST
Node* deleteNode(Node* root, int key) {
    if (!root) return root;

    if (key < root->val) {
        root->left = deleteNode(root->left, key);
    } else if (key > root->val) {
        root->right = deleteNode(root->right, key);
    } else {
        // Node found
        if (!root->left) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (!root->right) {
            Node* temp = root->left;
            delete root;
            return temp;
        } else {
            // Node with two children
            Node* temp = findMin(root->right);
            root->val = temp->val;
            root->right = deleteNode(root->right, temp->val);
        }
    }
    return root;
}

// Inorder traversal (sorted order)
void inorder(Node* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

// Driver code
int main() {
    Node* root = nullptr;

    // Insert nodes
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    // Search
    cout << "Search 40: " << (search(root, 40) ? "Found" : "Not Found") << endl;
    cout << "Search 25: " << (search(root, 25) ? "Found" : "Not Found") << endl;

    // Delete
    cout << "Deleting 20...\n";
    root = deleteNode(root, 20);
    cout << "Inorder after deletion: ";
    inorder(root);
    cout << endl;

    cout << "Deleting 30...\n";
    root = deleteNode(root, 30);
    cout << "Inorder after deletion: ";
    inorder(root);
    cout << endl;

    cout << "Deleting 50...\n";
    root = deleteNode(root, 50);
    cout << "Inorder after deletion: ";
    inorder(root);
    cout << endl;

    return 0;
}
