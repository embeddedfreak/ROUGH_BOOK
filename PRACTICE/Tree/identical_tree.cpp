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

int main()
{
	vector<int> preorder = {1, 2, -1, -1, 3, -1, -1};

	Node* root1 = buildTree(preorder);
	idx = -1;
	Node* root2 = buildTree(preorder);

	preorder_traverse(root1);
	cout<<endl;
	preorder_traverse(root2);
	cout<<endl;

	if(is_identical(root1, root2)) {
		cout<<"Both trees are identical"<<endl;
	} else {
		cout<<"Both trees are not identical"<<endl;
	}

	
	return 0;
}
