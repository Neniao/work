#include<cstdio>

class IntStack
{
      private:
              struct node
              {
               bool bottom;
                   int val;
                  node* next;
              };
              node* top;node* ptr;
      public:
             void reset()
             {
                  top=new node;
                  top->next=NULL;
                  top->bottom=1;
             }
             void push(int x)
             {
                  ptr=new node;
                  ptr->next=top;
                  ptr->val=x;
                  ptr->bottom=0;
                  top=ptr;
             }
             int gettop()
             {
                 return top->val;
             }
             void pop()
             {
                  if (top->bottom!=1) top=top->next;
             }
}ST;

int main()
{

    return 0;
}
