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
	printf("\nReversed number is: ");
	for (int i = 6; i >= 0; i--)
	{
		printf("%d, ", arr[i]);
	}
	printf("\n");
}

int primeFactors(int arr[7])
{
	int i = 2, n = 0, c =0;

	for (int a = 0; a < 7; a++)
	{
		i = 2;
		printf("\nprime factor for %d : ", arr[a]);

		switch (arr[a])
		{
		case 1:
			printf("1 ");
			break;
		case 0:
			printf("0 ");
			break;
		default:
			break;
		}
		
		while (arr[a] != 1 && arr[a] != 0)
		{

			while (arr[a] % i == 0)
			{
				printf(" %d x", i);
				arr[a] /= i;
			}
			if (arr[a] % i != 0)
			{
				i++;
			}
		}
	}
	printf("\n");
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

	while (opt != 0)
	{
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
			printf("\nsum is %d\n", total);
			break;
		default:
			printf("\nInvalid\n");
			break;
		}
		printf("\nChoose an operation\n press 1 for Prime factors\n press 2 to reverse the number\n press 3 for summation\n press 0 to exit\n");
		printf(">> ");
		scanf_s("%d", &opt);

	}
	return 0;
}