#include<stdio.h>
#include<stdlib.h>
int main(void)
{
int n;
n = rand();
switch(n > 0)
{
case 1:
printf("%d is positive\n",n);
break;
case 0:
if (n == 0) {
printf("%d is zero\n",n);
} else {
printf("%d is negative\n",n);
}
break;
}
return (0);
}
