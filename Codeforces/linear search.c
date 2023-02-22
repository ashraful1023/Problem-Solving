#include<stdio.h>
int main()
{
    int i,Array[100],random,position=-1;
    for(i=0;i<10;i++)
    {
        scanf("%d",&Array[i]);
    }
      scanf("%d",&random);
    for(i=0;i<10;i++)
    {
       if(Array[i]==random)
       {
           position=i+1;
           break;
       }
    }
         if(position==-1)
            printf("na");
        else
            printf("%d",position);

}
