#include <stdio.h>

int sum(int arr [7])
{
	int total = 0;
	for (int i = 0; i < 7; i++)
	{
		total = total + arr[i];	// value of array stores inside total
	}
	return total;
}
void revArray(int arr[7])
{
	printf("\nReversed number is: ");
	for (int i = 6; i >= 0; i--)	// i will be minus by 1 after every loop
	{
		printf("%d, ", arr[i]);		// thus will print arr[i-1]
	}
	printf("\n");
}

int primeFactors(int arr[7])
{
	int i = 2, n = 0, c =0;

	for (int a = 0; a < 7; a++)
	{
		int n = arr[a];		//	preventing arr being overwritten on line 51
		i = 2;
		printf("\nprime factor for %d : ", n);

		switch (n)		//	this function will print respective output if users input 1 or 0
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
		
		while (n > 1 && n != 0)	//	program will fail if you don't put != 0
		{
			
			while (n % i == 0)	// if n % i != 0; n will % by i +1 until it == 0
			{
				printf("%d ", i);
				n /= i;
			}
			if (n % i != 0)
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
	for (int i = 0; i < 7; i++)		//	get all 7 numbers to be pass to ^
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
			total = sum(arr);	// return value of func sum.
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