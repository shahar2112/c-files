#include <stdio.h>

int missingnum( int arr[], int n, int *num2);


int main()
{
	int arr[] = {1,2,5,6};
	int n = 6;
	int num2 = 0;
	int num1 = 0;
		
	num1 = missingnum( arr, n, &num2);
	printf("the two missing nums are %d , %d \n", num1, num2);
	
	return 0;
}

int missingnum( int arr[], int n, int *num2)
{
	int num1=0, i=0;
	int real_sum = 0;
	int our_sum = 0;
	int total_left_sum = 0, total_right_sum = 0;
	int arr_left_sum =0, arr_right_sum = 0;
	int half_miss_sum = 0;
	 
	/* first find real sum */
	real_sum = (n*(n+1))/2;
	printf("real sum is %d\n", real_sum);
	
	/*find our sum */
	for(i=0; i<n-2; i++)
	{
		our_sum +=arr[i];
	}

	/* half of the sum of the two missing numbers */
	half_miss_sum = (real_sum - our_sum) / 2;
	
	/*finding total left sum */
	total_left_sum = half_miss_sum*(half_miss_sum +1) / 2;
	
	/*finding total right sum */
	total_right_sum = real_sum - total_left_sum;
	
	printf("total_left %d \n total_right %d \n", total_left_sum, total_right_sum);
	
	/* finding arr xor */
	for(i=0; i<n-2; i++)
	{
		if(arr[i] <= half_miss_sum)
		{
			arr_left_sum += arr[i];
		}
		else
		{
			arr_right_sum += arr[i];
		}
	}
	printf("arr_left_xor is %d\n arr_right is %d \n", arr_left_sum, arr_right_sum);
	
	num1 = total_left_sum - arr_left_sum;
	*num2 = total_right_sum -arr_right_sum;
	
	return num1;
}
