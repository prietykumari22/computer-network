#include <bits/stdc++.h>
using namespace std;
class node
{
    public:
    int data;
    node*next;

};
void print_list(node*s)
{
    while (s != NULL) {
        cout << s->data << " ";
         s=s->next;
    }
}

//creating pointer which is ready to point  //
int main()
{

node*first =NULL;
node*second =NULL;
node*third=NULL;
//creating pointer to node //
first =new node();
second =new node();
third =new node();
first->data =1;
first->next=second;
second->data =2;
second->next=third;
third->data =3;
third->next=NULL;
// print the linklist
 print_list(first);
 return 0;
}
