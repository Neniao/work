
#include<cstdio>
#include<cstring>
struct node
{
     char name[10];
     int store;
}Computer[100];
int kind;
void buy(char na[10],int num,int cost,int year,int month,int day)
{
     int k=0;
     for (int i=1;i<=kind;i++)
     {
         if (strcmp(Computer[i].name,na)==0)
         k=i;
         break;
     }
     if (k==0)
     {
         k=++kind;
         for (int i=0;i<9;i++)
         {
             Computer[k].name[i]=na[i];
         }
         Computer[k].store=num;
     }
     else
     {
         Computer[k].store+=num;
     }
     //freopen("收支记录.txt","w",stdout);
     printf("%d,%d,%d,buy %s computer %d,cost%d\n",year,month,day,na,num,cost);
     //freopen("CON","w",stdout);
}
void sale(char na[10],int num,int val,int year,int month,int day)
{
     int k;
     for (k=1;k<=kind;k++)
     {
         if (strcmp(Computer[k].name,na)==0)
         break;
     }
     Computer[k].store-=num;
     //freopen("收支记录.txt","w",stdout);
     printf("%d,%d,%d,sale %s computer %d,get%d\n",year,month,day,na,num,val);
     //freopen("COB","w",stdout);
}
int main()
{

    kind=0;
    char order;
    char na[10];
    int num,val,cost,year,month,day;
    while (1)
    {
          printf("Please input 'b' mean buy while 's' mean sale\n if no order please input e.\n");
          scanf("\n");
          scanf("%c",&order);

          if (order=='e') break;
          if (order=='b')
          {
              printf("Please input computer name,number,cost,and the time with the perform of year month day\n");
              scanf("%s%d%d%d%d%d",na,&num,&cost,&year,&month,&day);
              //scanf("\n");
              buy(na,num,cost,year,month,day);
          }
          else if (order=='s')
          {
              printf("Please input computer name,number,income,and the time with perform of year month day\n");
              scanf("%s%d%d%d%d%d",na,&num,&val,&year,&month,&day);
              //scanf("\n");
              sale(na,num,val,year,month,day);
          }
          else continue;
    }
    return 0;
}
