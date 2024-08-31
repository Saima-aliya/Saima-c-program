#include<stdio.h>

#include<math.h>

void main()

{

int n;

printf("enter the number:");

scanf("%d",&n);

if(n%2==0)

{

printf("not a prime number");

}

else

{

printf("prime number");

}

}

#include<stdio.h>

#include<math.h>

void main()

{

int n,flag=0,i,j;

printf("enter the upper limit:");

scanf("%d",&n);

for(i=2;i<=n;i++){

flag=0;

for(j=2;j<i;j++){

if(i%j==0){

flag = 1;

break;

}

}

if(flag==0)

{

printf("%d is a prime number.\n",i);

}

else

{

printf("%d is not a prime number.\n",j);

}

}
}
