#include <stdio.h>
#include <iostream>

int sum(int arr [7])
{
	int total = 0;
	for (int i = 0; i < 7; i++)
	{
		total = total + arr[i];
	}
	return total;
}
void revArray(int arr[7])
{
	printf("Reversed number is: ");
	for (int i = 7 - 1; i >= 0; i--)
	{
		printf("%d, ", arr[i]);
	}
}

int primeFactors(int arr[7])
{
	int i = 2, n = 0;

	for (int a = 0; a < 7; a++)
	{
		n = arr[a];
		while (n != 1)
		{
			while (n%i == 0)
			{
				printf("%d ", i);
				n = n / i;
			}
			
		}
		i++;
	}
	
	return 0;
}

int main()
{
	//value loader
	int total = 0, arr[7] = {};
	for (int i = 0; i < 7; i++)
	{
		printf("Enter element %d: ", i);
		scanf_s("%d", &arr[i]);
	}
	// menu
	int opt;
	printf("\nChoose an operation\n press 1 for Prime factors\n press 2 to reverse the number\n press 3 for summation\n press 0 to exit\n");
	printf(">> ");
	scanf_s("%d", &opt);
	switch (opt)
	{
	case 1:
		primeFactors(arr);
		break;
	case 2:
		revArray(arr);
		break;
	case 3:
		total = sum(arr);
		printf("sum is %d\n", total);
		break;
	default:
		printf("Invalid\n");
		break;
	}
	return 0;
}
