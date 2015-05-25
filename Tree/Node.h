#ifndef NODE_H
#define NODE_H


class Node
{
    public:
        Node(int x)
        {
            num=x;
        }
        void append(Node* x)
        {
            children[++childnumber]=x;
            x->parent=this;
        }
        int count()
        {
            int cont=1;
            for (int i=1;i<=childnumber;i++)
            {
                cont+=children[i]->count();
            }
            return cont;
        }
        Node* getParent()
        {
            return parent;
        }
        int getValue()
        {
            return num;
        }
        int childnumber=0;
    protected:
    private:
        int num;
        Node* children[10];
        Node* parent;
};

#endif // NODE_H
