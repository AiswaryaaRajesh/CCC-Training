#infinite loop
for(i=1;i=5,i<10;i++)
{
  printf("do i ever stop?")
}                             #infinite execution


#multiple conditions...only rigth most condition is important
for(i=1,j=10;i<10,j>8;i++,j--)
{
  printf("Good Day!");
}                             #excute 2 times as j>8

  
#switch case.....if it does not encounter a break statement, it will keep on executing statements Eg. if ch=2, it will execute case 2 and the next cases 
# till it encounters break or switch casse ends
  
#check if prime or not
int n,i;
scanf("%d",&n);
if(n==1)
{
    printf("No")
}
else if (n==2 || n==3)
{
    printf("Yes")
}
else if (n%2==0 || n%3==0)
{
    printf("No")
}
else
{
    for(i=5;i*i<=n;i+=6)
    {
        if (n%i==0 || n%(i+2)==0)
        {
             printf("No");
             exit(0);
        }
    }
    printf("Yes")
}

#interchange first and laast digit of a number by usinf no loop, no string logic, no recursion. Consider the number only as an integer
#logic Algo
p=floor(log base10 n)
l=n/(pow(10,p))
n=n-u+l-l*pow(10,p)+u*pow(10,p)
  
  
#Analyze situation
A()
  for (i=1 to n)
    for(k=1 to n/2)
      printf("#");

