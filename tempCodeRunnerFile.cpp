#include<iostream>
using namespace std;
<<<<<<< HEAD

int main() {
    int n;
    cin >> n;
    for(int i=0;i++;i<n) {
        for(int j=0;j<n;j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    
}
=======
class node{
public:
char data[10];
node *left ,*right;
friend class binarytree;
};
class binarytree{
node *root;
public:
void create_r();
void create_r(node *var);
void createtree();
void inorder();
void inorder(node *var);
void inorder_nr();
void preorder();
void preorder(node *var);
void preorder_nr();
void postorder();
void postorder(node *var);
void postorder_nr();
};
void binarytree::create_r(){

root = new node();
cout<<"Enter the node data"<<endl;
cin>>root->data;
root->left = root->right = NULL;
create_r(root);
}
void binarytree::create_r(node *var){
char ch;
node*curr;
cout<<"Do you want to add node to the left of" << var->data << "(y/n)?"<<endl;
cin>>ch;
if(ch=='y'){
curr=new node();
cout<<"Enter the node data"<<endl;
cin>>curr->data;
var->left = curr;
create_r(curr);
}
cout<<"Do you want to add node to the right of" << var->data << "(y/n)?"<<endl;
cin>>ch;
if(ch=='y'){
curr=new node();
cout<<"Enter the node data"<<endl;
cin>>curr->data;
var->right = curr;
create_r(curr);
}
}

class stack{
int top;
node *st[30];
public:
stack(){
top=-1;
}
void push(node * temp);
node *pop();
int isempty();
friend class binarytree;
};
void stack::push(node * temp){
top++;
st[top]=temp;
}
int stack::isempty(){
if(top==-1){
return 1;
}
else{
return 0;
}
}

node * stack::pop(){
if(top==-1){
cout<<"Stack is empty"<<endl;
return NULL;
}
else{
node * temp = st[top];
top--;
return temp;
}
}
void binarytree::inorder(){
inorder(root);
}
void binarytree::preorder(){
preorder(root);
}
void binarytree::postorder(){
postorder(root);
}
void binarytree::inorder(node *var){
if(var!=NULL){
inorder(var->left);
cout << var->data;
inorder(var->right);
}

}
void binarytree::inorder_nr(){
node *temp=root;
stack a;
do{
while(temp!=NULL){
a.push(temp);
temp=temp->left;
}
if(a.isempty()==1){
break;
}
temp=a.pop();
cout<<temp->data;
temp=temp->right;
}while(1);
}
void binarytree::preorder_nr(){
node *temp=root;
stack a;
while(1){
while(temp!=NULL){
cout<<temp->data;
a.push(temp);
temp=temp->left;
}
if(a.isempty()==1){

break;
}
temp=a.pop();
temp=temp->right;
}
}
void binarytree::postorder_nr(){
node *temp=root;
stack a;
while(1){
while(temp!=NULL){
a.push(temp);
temp=temp->left;
}
if(a.st[a.top]->right==NULL){
temp=a.pop();
cout<<temp->data;
}
while(a.isempty()==0 && a.st[a.top]->right==temp){
temp=a.pop();
cout<<temp->data;
}
if(a.isempty()==1){
break;
}
temp=a.st[a.top]->right;
}

}
void binarytree::preorder(node *var){
if(var!=NULL){
cout << var->data;
preorder(var->left);
preorder(var->right);
}
}
void binarytree::postorder(node *var){
if(var!=NULL){
postorder(var->left);
postorder(var->right);
cout << var->data;
}
}
void binarytree::createtree(){
node * curr;
node * temp;
char ch ,choice;
root = new node();
cout<<"Enter root node data\n";
cin >> root->data;
root->left = root->right = NULL;
do{

curr=new node();
cout<<"Enter current node data\n";
cin>>curr->data;
curr->left = curr->right = NULL;
temp = root;
int flag=1;
while(flag == 1){
cout<<"Where do you want to attach the new node (Left(l)/Right(r) to " << temp->data ;
cin >> ch;
if(ch == 'l'){
if(temp->left == NULL){
temp->left = curr;
flag=0;
break;
}
else{
temp=temp->left;
flag=1;
}
}
if(ch=='r'){
if(temp->right==NULL){
temp->right=curr;
flag=0;
break;
}
else{
temp=temp->right;
flag=1;

}
}
}
cout<<"Do you want to add another node?\n";
cin>>choice;
}while(choice== 'y');
}
int main(){
int x;
int y,flag=0;
binarytree a;
stack s;
do{
cout<<"In which order do you want to create a binary tree\n1.Recursive\n2.Non-recursive\n";
cin>>y;
switch(y){
case 1: a.createtree();
flag=1;
break;
case 2: a.create_r();
flag=1;
break;
default: cout<<"Enter correct option"<<endl;
flag=0;

break;
}
}while(flag==0);
do{
cout<<"\nIn which manner do you want to display?\n1.Inorder Recursive\n2.Preorder

Recursive\n3.Postorder\n4.Inorder Non-Recursive\n5.Preorder Non-Recursive\n6.Postorder Non-
Recursive\n7.Exit\n";

cin >> x;
switch(x){
case 1: a.inorder();
break;
case 2: a.preorder();
break;
case 3: a.postorder();
break;
case 4: a.inorder_nr();
break;
case 5: a.preorder_nr();
break;
case 6: a.postorder_nr();
break;
case 7: exit(0);
}
}while(1);
return 0;
}
>>>>>>> e2ace3c942ee51ae8bcb41f17b84b94893f52d6d
