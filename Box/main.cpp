#include<cstdio>
#include<algorithm>
#include<conio.h>
#include<time.h>
const int size=20;
char Map[size][size];

int BoxNum,MatchCount;

int Playerx,Playery;

/*地图：P 代表玩家
        C 代表硬币
        B 代表箱子
        M 代表箱子已经和硬币匹配
        Q 代表玩家踩在硬币上
        * 表示墙壁
*/
void MapBuild()
{
     BoxNum=rand()%4+2;

     int Tem=BoxNum,Tep;

     for (int i=0;i<size;i++)
     {
         for (int j=0;j<size;j++)
         {
             Map[i][j]=' ';
         }
     }

     int a,b;

     while (Tem!=0)
     {
         do
         {
             a=rand()%size;
             b=rand()%size;
         }while (Map[a][b]!=' ');

         Map[a][b]='B';

         Tem--;
     }

     Tem=BoxNum;

     while (Tem!=0)
     {
         do
         {
             a=rand()%size;
             b=rand()%size;
         }while (Map[a][b]!=' ');

         Map[a][b]='C';

         Tem--;
     }

     for (int i=0;i<size;i++)
     {
         for (int j=0;j<size;j++)
         {
             if ((Map[i][j]=='C')||(Map[i][j]=='B')) continue;

             Tep=rand()%30;

             if (Tep==0)
             {
                 Map[i][j]='*';
             }

         }
     }

     do
     {
         a=rand()%size;
         b=rand()%size;
     }while (Map[a][b]!=' ');

     Playerx=a;
     Playery=b;

}

void MapPrintf()
{
    for (int i=0;i<size;i++)
    {
        for (int j=0;j<size;j++)
        {
            if ((i==Playerx)&&(j==Playery))
            {
                if (Map[i][j]=='C') printf("%c",'Q');
                else printf("%c",'P');
            }
            else
            {
                printf("%c",Map[i][j]);
            }
        }
        printf("\n");
    }

}

void NextRound()
{
     MapPrintf();

     char Order;

     Order=_getch();

     system("cls");

     switch (Order)//边界，墙,硬币，空地，箱子；
     {
         case 'a':{
                       if (Playery==0) break;
                       if (Map[Playerx][Playery-1]=='*') break;
                       if ((Map[Playerx][Playery-1]!='B')&&(Map[Playerx][Playery-1]!='M'))
                       {
                           Playery--;
                           break;
                       }

                       //有箱子的情况；
                       if (Playery==1) break;
                       if (Map[Playerx][Playery-2]=='*') break;
                       if (Map[Playerx][Playery-2]=='B') break;
                       if (Map[Playerx][Playery-2]==' ')
                       {
                           Map[Playerx][Playery-2]='B';
                       }

                       if (Map[Playerx][Playery-2]=='C')
                       {
                           Map[Playerx][Playery-2]='M';
                           MatchCount++;
                       }

                       if (Map[Playerx][Playery-1]=='M')
                       {
                           Map[Playerx][Playery-1]='C';
                           MatchCount--;
                       }
                       else
                       {
                           Map[Playerx][Playery-1]=' ';
                       }
                       Playery--;
                       break;
                  };
         case 'd':{
                       if (Playery==size-1) break;
                       if (Map[Playerx][Playery+1]=='*') break;
                       if ((Map[Playerx][Playery+1]!='B')&&(Map[Playerx][Playery+1]!='M'))
                       {
                           Playery++;
                           break;
                       }

                       if (Playery==size-2) break;
                       if (Map[Playerx][Playery+2]=='*') break;
                       if (Map[Playerx][Playery+2]=='B') break;
                       if (Map[Playerx][Playery+2]==' ')
                       {
                           Map[Playerx][Playery+2]='B';
                       }

                       if (Map[Playerx][Playery+2]=='C')
                       {
                           Map[Playerx][Playery+2]='M';
                           MatchCount++;
                       }

                       if (Map[Playerx][Playery+1]=='M')
                       {
                           Map[Playerx][Playery+1]='C';
                           MatchCount--;
                       }
                       else
                       {
                           Map[Playerx][Playery+1]=' ';
                       }
                       Playery++;
                       break;
                  };
         case 'w':{
                       if (Playerx==0) break;
                       if (Map[Playerx-1][Playery]=='*') break;
                       if ((Map[Playerx-1][Playery]!='B')&&(Map[Playerx-1][Playery]!='M'))
                       {
                           Playerx--;
                           break;
                       }

                       if (Playerx==1) break;
                       if (Map[Playerx-2][Playery]=='*') break;
                       if (Map[Playerx-2][Playery]=='B') break;
                       if (Map[Playerx-2][Playery]==' ')
                       {
                           Map[Playerx-2][Playery]='B';
                       }

                       if (Map[Playerx-2][Playery]=='C')
                       {
                           Map[Playerx-2][Playery]='M';
                           MatchCount++;
                       }

                       if (Map[Playerx-1][Playery]=='M')
                       {
                           Map[Playerx-1][Playery]='C';
                           MatchCount--;
                       }
                       else
                       {
                           Map[Playerx-1][Playery]=' ';
                       }
                       Playerx--;
                       break;
                  };
         case 's':{
                       if (Playerx==size-1) break;
                       if (Map[Playerx+1][Playery]=='*') break;
                       if ((Map[Playerx+1][Playery]!='B')&&(Map[Playerx+1][Playery]!='M'))
                       {
                           Playerx++;
                           break;
                       }

                       if (Playerx==size-2) break;
                       if (Map[Playerx+2][Playery]=='*') break;
                       if (Map[Playerx+2][Playery]=='B') break;
                       if (Map[Playerx+2][Playery]==' ')
                       {
                           Map[Playerx+2][Playery]='B';
                       }

                       if (Map[Playerx+2][Playery]=='C')
                       {
                           Map[Playerx+2][Playery]='M';
                           MatchCount++;
                       }

                       if (Map[Playerx+1][Playery]=='M')
                       {
                           Map[Playerx+1][Playery]='C';
                           MatchCount--;
                       }
                       else
                       {
                           Map[Playerx+1][Playery]=' ';
                       }
                       Playerx++;
                       break;
                  };
     }
}

void GameBegin()
{
     MatchCount=0;

     while (MatchCount!=BoxNum)
     {
           NextRound();
     }

     printf("You have won the game\nThank You for your experience!\n");
}

int main()
{
    srand((unsigned)time(NULL) );

    MapBuild();

    GameBegin();

    return 0;
}

