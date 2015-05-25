#include<cstdio>
struct node
{
       int name;
       node* next;
};
node link[1000];
int pos;
int head;

void ins(int af,int na)
{
     if (head==0)
     {
         head=++pos;
         link[pos].name=na;
     }
     else
     {
         node* a=&link[head];
         while (a->name!=af)
         {
               a=a->next;
         }
         link[++pos].next=a->next;
         link[pos].name=na;
         a->next=&link[pos];
     }
}

void del(int na)
{
     node *a=&link[head];
     node *b;
     while (a->name!=na)
     {
           b=a;
           a=a->next;
     }
     b->next=a->next;
}

int main()
{
    pos=0;
    head=0;


    return 0;
}
