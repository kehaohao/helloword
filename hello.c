#include<stdio.h>
#define HOW_MANY_TIMES_TO_SAY_HELLO 10000 
int main(int argv,const char *arc[])
{
     int i;                                         
     for(i = 0; i <= HOW_MANY_TIMES_TO_SAY_HELLO ; i ++)
     { 
          printf("hello everyone ! is %d\n",i);
     } 
     return 0;
}
