#include <stdio.h>

#include<math.h>

void main()

{

int n,originalNum,reminder,result=0,digits=0;

printf("Enter a number:");

scanf("%d",&n);

originalNum=n;

while(originalNum!=0)

{

originalNum/=10;

digits++;

printf("iteration: %d,digits couted so far: %d\n",digits,digits);

}

originalNum=n;

while(originalNum!=0)

{

reminder=originalNum%10;

result +=pow(reminder,digits);

originalNum/=10;

}
