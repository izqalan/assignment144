#include <stdio.h>
#include <iostream>

int revArray()	// wip. need help. stack error. var rev corrupted
{
	int rev[6] = {};	
	int sum = 0;
	for (int i = 0; i < 7; i++)
	{
		printf("Enter a value ");
		scanf_s("%d", (rev + i));
	}
	for (int i = 7 - 1; i >= 0; i--)
	{
		printf("reversed number %d\t\n", rev[i]);
	}
	return 0;
}

int primeFactors()   //opt = 1
{
	int i;
	for (i = 0; i < 7; i++)
	{
		int n = 0;
		printf("\nEnter positive int ");
		scanf_s("%d", &n);
		int oldnum = n;		// saving user input number
		printf("The prime factor is\t");
		// Print the number of 2s that divide n
		// 1st digit
		while (n % 2 == 0)		//2 % 2 = 0
		{
			printf("%d X ", 2);
			n = n / 2;
		}

		// n must be odd at this point. So we can skip 
		// one element (Note i = i + 2)
		// 2nd digit
		for (int i = 3; i <= sqrt(n); i = i + 2)
		{
			// While i divides n, print i and divide n
			while (n%i == 0)
			{
				printf("%d X ", i);
				n = n / i;
			}
		}

		// This condition is to handle the case when n 
		// is a prime number greater than 2
		// 3rd digit
		if (n > 2)
		{
			printf("%d = %d\n ", n, oldnum);

		}
	}

	return 0;
}


int reverse()	// opt = 2
{
	// need to update; use array.
	//eqn
	// a=a*10+(x%10)
	// x/=10
	int num, rev;
	rev = 0;
	printf("Enter 7 digits\n");
	scanf_s("%d", &num);

	while (num < 1000000)
	{
		printf("not enough digits\nEnter 7 digits\n");
		scanf_s("%d", &num);
	}

	for (; num != 0;)
	{
		rev = rev * 10 + (num % 10);
		num = num / 10;
	}

	printf("reverse number is %d", rev);
	return 0;
}

int sum()	//opt = 3
{
	//sum loader
	int num, total;
	total = 0;
	for (int i = 0; i < 7; i++)
	{
		printf("Enter a positive integers\n");
		scanf_s("%d", &num);
		total = num + total;
	}
	printf("%d", total);
	return 0;
}

int main()
{
	int opt;
	printf("Choose an operation\n press 1 for Prime number\n press 2 to reverse the number\n press 3 for summation\n press 0 to exit\n");
	scanf_s("%d", &opt);

	while (opt != 0)
	{
		if (opt == 1)
		{
			primeFactors();
			system("pause");
		}
		else if (opt == 2)
		{
			reverse();
			system("pause");
		}
		else if (opt == 3)
		{
			sum();
			system("pause");

		}
		else
		{
			printf("Invalid option !!\n");
			system("pause");

		}
		printf("Choose an operation\n press 1 for Prime number\n press 2 to reverse the number\n press 3 for summation\n press 0 to exit\n");
		scanf_s("%d", &opt);
	}
	printf("press enter to exit\n");
	//system("pause");
	return 0;
}
