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
void levelOrder(node *root){
	queue<node*> q;
	q.push(root);
	while(!q.empty()){
		node *x = q.front(); q.pop();
		cout << x->val <<" ";
		if(x->left != NULL) q.push(x->left); // nếu là lá thì không push thêm left với right vào nữa
		if(x->right != NULL) q.push(x->right);
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
		levelOrder(root);
		cout << endl;
	}
}