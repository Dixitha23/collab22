<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
//nischitha file
#include<stdio.h>
int main()
{
	int n=29;
	int cnt=0;
	if(n<=1)
		printf("%d is NOT prime\n",n);
	else
	{
		for(int i=1;i<=n;i++)
		{
			if(n%i==0)
			cnt++;
		}
		if(cnt>2)
			printf("%d is NOT prime\n",n);
		else
			printf("%d is prime",n);
	}
	return 0;
=======
//Ananth patil file
#include<stdio.h>
int main() {
	int a,b,sum=0;
	printf("Enter two intergers");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("sum:%d",sum);
	return 0;
}	
>>>>>>> 709be4fb819a64a613a69eefc2b3dff7ac831c4c
=======
//Prerana's file
#include<stdio.h>
int main()
{
	int a=5;
	if(a%2==0)
	{
		printf("Even");
	}
	else
	{
		printf("Odd");
	}
>>>>>>> 7762e3632b09cd74512e5e0e724f305ea2382674
}
>>>>>>> 7762e3632b09cd74512e5e0e724f305ea2382674
=======
//this is dixitha file
#include<stdio.h>
int main(){
	int a=10,b=20;
	printf("enter the value",a,b);
	scanf("%d,%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
}

>>>>>>> 04d59b59138ae3898122a13e7be4fb58769b5fbf
