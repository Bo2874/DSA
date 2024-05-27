#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct node{
	int data;
	node *left, *right;
	node (int x){
		data = x;
		left = right = NULL;
	}	
};
void makeNode(node *root, int u, int v, char c){
	if(c == 'L') root->left = new node(v);
	else root->right = new node(v);
}
void insertNode(node *root, int u, int v, char c){
	if(root == NULL) return;
	if(root->data == u){
		makeNode(root, u, v, c);
	}
	else{
		if(root->left != NULL) insertNode(root->left, u, v, c);
		if(root->right != NULL) insertNode(root->right, u, v, c);
	}
}

void inp(node *&root){
	int n; cin >> n;
	for(int i = 0; i < n; i++){
		int x, y; char c; cin >> x >> y >> c;
		if(root == NULL){
			root = new node(x);
			makeNode(root, x, y, c);
		}
		else insertNode(root, x, y, c);
	}
}

int check(node *root1, node *root2){
	if(root1 == NULL && root2 == NULL) return 1;
	if(root1->data != root2->data) return 0;
	if(root1->left && !root2->left || !root1->left && root2->left) return 0;
	if(root1->right && !root2->right || !root1->right && root2->right) return 0;
	
	return check(root1->left, root2->left) && check(root2->right, root2->right );
}
int main(){
	int t; cin >> t;
	while(t--){
		node *root1 = NULL, *root2 = NULL;
		inp(root1); inp(root2);
		cout << check(root1, root2) << endl;
	}
}