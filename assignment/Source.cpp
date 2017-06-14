#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;
int reverse()
{
	//eqn
	// a=a*10+(x%10)
	// x/=10
	int num, rev;
	rev = 0;
	printf("Enter 7 digits\n");
	scanf("%d", &num);

	while (num < 1000000 )
	{
		printf("not enough digits\nEnter 7 digits\n");
		scanf("%d", &num);
	}

	for (; num != 0; )
	{
		rev = rev * 10 + (num % 10);
		num = num / 10;
	}

	cout << "reverse number is " << rev << endl;
	return 0;
}

int prime()
{
	int num, i, p;

	for (int i = 0; i < 7; i++)
	{
		bool isPrime = true;
		printf("Enter a positive integer: ");
		scanf("%d", &num);	//get 7 number
		
		for (p = 2; p <= num / 2; p++)	//divisable by 2
		{
			if (num % p == 0)	//if remainder(modulo) is 0 :: is not a prime number
			{
				isPrime = false;
				break;
			}
			//if (num % p != 0) isPrime is still true
		}
		
		if (isPrime) //if true
			printf("This is a prime number\n");
		else //if false
			printf("This is not a prime number\n");
	}
	return 0;
}


void sum()
{
	//sum loader
	int num, total;
	total = 0;
	for (int i = 0; i < 7; i++)
	{
		printf("Enter a positive integers\n");
		scanf("%d", &num);
		total = num + total;
	}
	cout << total << endl;
}

int main()
{
	reverse();
	system("pause");
	prime();
	system("pause");
	sum();
	return 0;
}