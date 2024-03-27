/*Write a program which take only one number as input and then find prime
numbers from 1 to that number*/

# include <stdio.h>
int main( )
{

int num;
printf("Enter any number : ");
scanf("%d",&num);
printf("Prime number upto %d are following\n",num);
int i;

for ( i= 1 ; i<= num ; i++ )
{
int j = 2 ;
for ( j = 2 ; j < i ; j++ )
{
if(i%j== 0 )
break;
}

if ( j == i )

printf("%d\t",i ) ;
}
return 0 ;
}
