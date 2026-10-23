#include<iostream>
#include<vector>

using namespace std;

class Node {
public:
	int data;
	Node* left;
	Node* right;

	Node(int val)
	{
		data = val;
		left = right = NULL;
	}
};

static int idx = -1;

Node* buildTree(vector<int> preorder) 
{
	idx++;

	if(preorder[idx] == -1) {
		return NULL;
	}

	Node* root = new Node(preorder[idx]);

	root->left = buildTree(preorder);
	root->right = buildTree(preorder);

	return root;
}

void preorder_traverse(Node* root)
{
	if(root == NULL) {
		return;
	}

	cout<<root->data<<" ";

	preorder_traverse(root->left);
	preorder_traverse(root->right);
}

bool is_identical(Node* p, Node* q) 
{
	//left NULL,  right data = false
	//left data,  right NULL = false
	//left NULL, right NULL = true
	 
	if(p == NULL || q == NULL) {
		return p == q;
	}

	return ((p->data == q->data) && (is_identical(p->left, q->left)) && (is_identical(p->right, q->right))); 
}

bool is_subtree(Node* root, Node* subroot)
{
	if(root == NULL || subroot == NULL) {
		return root == subroot;
	}

	if(root->data == subroot->data && is_identical(root, subroot)) {
		return true;
	}

	return is_subtree(root->left, subroot) || is_subtree(root->right, subroot);
}

int main()
{
	vector<int> preorder_tree = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
	vector<int> preorder_sub = {3, 4, -1, -1, 5, -1, -1};

	Node* root1 = buildTree(preorder_tree);
	idx = -1;
	Node* root2 = buildTree(preorder_sub);

	preorder_traverse(root1);
	cout<<endl;
	preorder_traverse(root2);
	cout<<endl;

	if(is_subtree(root1, root2)) {
		cout<<"Subtree exists in main tree"<<endl;
	} else {
		cout<<"Subtree doesnt exists in main tree"<<endl;
	}
	
	return 0;
}
