#include<stdio.h>
 #include<stdlib.h>
 #include<time.h>
 int main()
 {int i;
   srand((unsigned)time(NULL));
i=100+rand()%901;
printf("%d",i);
return 0;

 }