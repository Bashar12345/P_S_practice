#include<bits/stdc++.h>
using namespace std;
typedef struct node
{
    int data;
    struct node *next;
} node;
void displayList(node*Head);
node *linkedListCreate(int n);
void addStart(node *Start);
void addLast(node * LinkList);
void middleAdd(int n,node *LinkList);

int main()
{
    int n=0;
    node *Head = NULL;
    cout<<"Enter how many  nodes u want to insert ?? "<<endl;
    cin>>n;
    Head =linkedListCreate(n);
    cout<<endl;
    cout<<Head<<endl;
    displayList(Head);
   //  addStart(Head);
   // addLast(Head);
 middleAdd(n,Head);
}
node *linkedListCreate(int n)
{
    int i,j;
    node * Head =NULL;
    node * b1  =NULL;
    node * p =NULL;
    node* a = NULL;
    j=n/2;

    for (i=0; i<n; i++)
    {
        b1 = (node*)malloc(sizeof(node));
        cout << " Enter information for the current node : " <<i+1<< endl ;
        scanf("%d",&(b1->data));
        b1->next = NULL ;
        cout<< b1<<endl;
      if (i==j)
        {
         a =b1;
         cout<<"\n\n Fuck "<<a<<"\n\n";
        }
        if (Head==NULL)
        {
            Head = b1;
        }
        else
        {
      p = Head;
            // cout<<Head<<endl;
            // cout<<p->next<<endl;

            while ( p->next !=NULL )
                p = p->next ;
            p->next = b1 ;
            //cout<<b1<<endl;
            // cout<<p<<endl;
        }
    }
    return Head;
}
void addStart(node * LinkList)
{
    node * b = NULL;
    node * Head = NULL;
    node * c = NULL;
    int i,n;
    cout<<" Enter the size of nodes u want to add "<<endl;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cout <<"\n Enter the data you want to add node in the Start point "<<endl;
        b =(node*)malloc(sizeof(node));
        scanf("%d",&(b->data));
        b->next = NULL;
        if (Head==NULL)
        {
            Head = b;
        }
        else
        {
//cout<<b<<endl;
            c=Head;
            while(c->next !=NULL)
                c=c->next;
            c->next = b;
        }
    }
     c=NULL;
    c=Head;
            while(c->next !=NULL)
                c=c->next;
                c->next = LinkList;
    displayList(Head);
}
void addLast(node * LinkList)
{
    node * b = NULL;
    node * Last = NULL;
    node * c = NULL;
    int i,n;
    cout<<" Enter the size of nodes u want to add "<<endl;
    cin>>n;
    for (i=0; i<n; i++)
    {
        cout <<"\n Enter the data you want to add node in the Last point "<<endl;
        b =(node*)malloc(sizeof(node));
        scanf("%d",&(b->data));
        b->next = NULL;
        if (Last==NULL)
        {
            Last = b;
        }
        else
        {
//cout<<b<<endl;
            c=Last;
            while(c->next !=NULL)
                c=c->next;
            c->next = b;
        }
    }
    c=NULL;
    c=LinkList;
            while(c->next !=NULL)
                c=c->next;
                c->next = Last;
    displayList(LinkList);

}
void middleAdd(int n,node *LinkList)
{
      int i=0,m,o,j=0;
    node * Head =NULL;
    node * b1  =NULL;
    node * p =NULL;
    node * q =NULL;
    cout<<" Enter the size of nodes u want to add "<<endl;
    cin>>m;
    for (i=0; i<m; i++)
    {
        b1 = (node*)malloc(sizeof(node));
        cout << " Enter information for the current node : " <<i+1<< endl ;
        scanf("%d",&(b1->data));
        b1->next = NULL ;
        //cout<< b1<<endl;
        if (Head==NULL)
        {
            Head = b1;
        }
        else
        {
            p = Head;
            // cout<<Head<<endl;
            while ( p->next !=NULL )
                p = p->next ;
            p->next = b1 ;
            //cout<<b1<<endl;
        }
    }
    q=LinkList;
    while(q!=NULL)

        q=q->next;
  //  Head=q->next;
        q->next= Head;

   //  cout<<Linklist<<endl;
    displayList(LinkList);
}
void displayList(node*Head)
{
    node * p=Head ;
    cout<<" The List as follows : "<<endl;
    while(p!=NULL)
    {
        cout<<"\t"<<p->data;
        p=p->next;
    }
}
