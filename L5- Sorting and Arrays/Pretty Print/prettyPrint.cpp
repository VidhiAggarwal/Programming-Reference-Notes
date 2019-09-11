#include<iostream>
#include<queue>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int el){
        data = el;
        left = 0;
        right = 0;
    }
};

int pow(int a,int b){
    if(b==1) return a;
    return a*pow(a,b-1);
}

class binaryTree{
    node* head;
    
    public:
       binaryTree() : head(0){}

       node* getHead(){
           return head;
       }

       void create(){
           int n;
           cout<<"Enter the root data"<<endl;
           cin>>n;
           head = new node(n);
           queue<node*> q;
           q.push(head);
           while(!q.empty()){
               node* front = q.front();
               q.pop();
               cout<<"Enter the children of "<<front->data<<endl;
               int a,b;
               cin>>a>>b;
               if(a != -1){
                   node* temp = new node(a);
                   front->left = temp;
                   q.push(temp);
               }
               if(b != -1){
                   node* temp = new node(b);
                   front->right = temp;
                   q.push(temp);
               }
           }
       }

       void preOrder(node* myHead){
           if(!myHead) return;

           cout<<myHead->data<<endl;
           preOrder(myHead->left);
           preOrder(myHead->right);
       }

       int height(node* myHead){
           if(!myHead) return 0;
           return max( height(myHead->left), height(myHead->right)) + 1;
       }

       void prettyPrint(){
           int ht = height(head);
           int width = pow(2,ht);

           queue<node*> q;
           q.push(head);
           int currentlevel=1;
           int nextlevel=0;
           while(ht!=0){
               node* temp = q.front();
               q.pop();
               currentlevel--;
               int spaces = width/2 -1;
               for(int i=0; i<spaces; i++) cout<<" ";
               if(temp) cout<<temp->data;
               else cout<<" ";
               for(int i=0; i<spaces; i++) cout<<" ";
               cout<<" ";
               if(temp){
                   q.push(temp->left);
                   q.push(temp->right);
               }
               else{
                   q.push(0);
                   q.push(0);
               }
               nextlevel+=2;
               if(currentlevel==0){
                   swap(currentlevel, nextlevel);
                   cout<<endl<<endl;
                   width/=2;
                   ht--;
               }
           }
       }
};

int main(){
    // 9 4 6 2 1 5 8 9 3 -1 -1 -1 -1 -1 -1 1 -1 -1 -1 -1 -1
    binaryTree t;
    t.create();
    t.prettyPrint();
}
