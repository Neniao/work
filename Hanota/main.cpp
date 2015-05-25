#include<cstdio>
int n;
void move(int total,char p1,char p2)
{
     int bottom;
     bottom=total;
     
     if (total==1)
     {
         printf("%d -> %c\n",bottom,p2);
         return ;
     }
      
     char p3;
     if ((p1!='A')&&(p2!='A')) p3='A';     
     if ((p1!='B')&&(p2!='B')) p3='B';     
     if ((p1!='C')&&(p2!='C')) p3='C';

     move(total-1,p1,p3);
     
     printf("%d -> %c\n",bottom,p2);
     
     move(total-1,p3,p2);          
}

int main()
{
    scanf("%d",&n);
    
    move(n,'A','C');
    
    return 0;
}
