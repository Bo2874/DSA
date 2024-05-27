#include <bits/stdc++.h>
using namespace std;
#define ll long long

struct node{
	int val;
	node *left;
	node *right;
	node(int x){
		val = x; // gán giá trị cho node
		left = right = NULL; // mỗi lần tạo node mới thì sẽ gán luôn left, right của node = NULL
	}	
};
void makeRoot(node *root, int u, int v, char c){
	if(c == 'L') root->left = new node(v); // đưa vào giá trị của node 
	else root->right = new node(v);
}
void insertNode(node *root, int u, int v, char c){
	if(root == NULL) return; // đi đến lá cuối cùng r mà kh thấy val = u thì dừng chạy ở lá này
	if(root->val == u){
		makeRoot(root, u, v, c); // tìm thấy thì tạo node
	}
	else{// đệ quy đến khi nào tìm được val = u hoặc bằng NULL thì dừng
		insertNode(root->left, u, v, c);
		insertNode(root->right, u, v, c);
	}
}
void spiralOrder(node *root){
	stack <node*> s1, s2;
	s1.push(root);
	while(!s1.empty() || !s2.empty()){
		while(!s1.empty()){
			node *x = s1.top(); s1.pop();
			cout << x->val <<" ";
			if(x->right != NULL) s2.push(x->right);
			if(x->left != NULL) s2.push(x->left);
		}
		while(!s2.empty()){
			node *x = s2.top(); s2.pop();
			cout << x->val <<" ";
			if(x->left != NULL) s1.push(x->left);
			if(x->right != NULL) s1.push(x->right);
		}
	}
}

int main(){
	int t; cin >> t;
	while(t--){
		node *root = NULL;
		int n; cin >> n;
		for(int i = 0; i < n; i++){ // tạo cây
			int u, v; char c;
			cin >> u >> v >> c;
			if(root == NULL){
				root = new node(u); // tạo gốc
				makeRoot(root, u, v, c);
			}
			else insertNode(root, u, v, c);
		}
		spiralOrder(root);
		cout << endl;
	}
}