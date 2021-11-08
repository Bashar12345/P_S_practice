#include<bits/stdc++.h>
using namespace std;

typedef struct node{
int data ;
struct node *next;
}node;
void displayList(node*head)
{
    node *p;
  p=head;
  while (p!=NULL){
    cout<<"\t"<<p->data;
    p = p->next;}

}
node *linkedList(int n)
{
 int i;
 node *head =NULL;
 node * b = NULL;
 node * p = NULL;
 for(i=0;i<n;i++)
 {
    b=(node*)malloc(sizeof(node));
    cout<<" Enter the value in the current index : "<<i+1<<endl;
    cin>>b->data;
    b->next=NULL;
        if (head==NULL)
        {
            head = b;
        }
        else{
                p =head;
                while(p->next !=NULL){
            p=p->next;
            p->next =b;
                }
        }
 }
 return head;
}
int main()
{
  int n=0;
  node * Head;
  cout<<" Enter how many data you want to insert "<<endl;
  cin>>n;
  Head = linkedList(n);
  displayList(Head);
}
