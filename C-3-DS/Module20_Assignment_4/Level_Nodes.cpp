#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft, *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}

void print_kth_level(Node *root, int k)
{
    if (root == NULL) // If the tree is empty
    {
        cout << "Invalid";
        return;
    }

    // To store the nodes at the kth level of the tree
    vector<int> level_nodes;

    // level order traversal
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        // pair <Node *, int> p = q.front();
        Node *node = q.front().first;
        int level = q.front().second;
        q.pop();

        // If the current node is at the kth level
        if (level == k)
            level_nodes.push_back(node->val);

        if (node->left)
            q.push({node->left, level + 1});
        if (node->right)
            q.push({node->right, level + 1});
    }

    if (level_nodes.empty()) // If no nodes are present at the kth level of the tree
        cout << "Invalid";
    else
    {
        for (int val : level_nodes)
            cout << val << " ";
    }
}

int main()
{
    Node *root = input_tree();
    int k;
    cin >> k;

    print_kth_level(root, k);
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
vector<int>v;
class Node{

    public:
        int val;
        Node * left;
        Node * right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* input_tree(){
    int val;
    cin>>val;
    Node * root;
    if(val==-1){
        root=NULL;
    }
    else{
        root= new Node(val);
    }
    queue<Node*>q;
    if(root){
        q.push(root);
    }

    while(!q.empty()){
        Node *p= q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node * myL, * myR;
        if(l==-1){
            myL=NULL;
        }
        else{
            myL=new Node(l);
        }

        if(r==-1){
            myR=NULL;
        }
        else{
            myR=new Node(r);
        }
        p->left=myL;
        p->right=myR;

        if(p->left){
            q.push(p->left);
        }
        if(p->right){
            q.push(p->right);
        }
    }
    return root;
}
void level_order(Node * root,int x){

    queue<pair<Node *,int>>q;
    if(root){
        q.push({root,0});
    }

    while(!q.empty()){
        pair<Node *,int> f=q.front();
        q.pop();
        Node * tmp=f.first;
        int level=f.second;

        if(level==x){
            v.push_back(tmp->val);
        }

        if(tmp->left){
            q.push({tmp->left,level+1});
        }
        if(tmp->right){
            q.push({tmp->right,level+1});
        }
    }
}
int max_dep(Node * root){
    if(root==NULL){
        return 0;
    }
    if(root->left==NULL && root->right==NULL){
        return 0;
    }
    int l=max_dep(root->left);
    int r=max_dep(root->right);
    return max(l,r)+1;
}
int main(){

    Node * root=input_tree();
    int x;
    cin>>x;
    int d=max_dep(root);
    if(x<0 || x>d){
        cout<<"Invalid"<<endl;
    }
    else{
        level_order(root,x);
    }

    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}

*/