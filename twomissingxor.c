#include <stdio.h>

int missingnum( int arr[], int n, int *num2);


int main()
{
	int arr[] = { 9,3,8,5,2,7,6};
	int n = 9;
	int num2 = 0;
	int num1 = 0;
		
	num1 = missingnum( arr, n, &num2);
	printf("\nthe two missing nums are %d , %d \n", num1, num2);
	
	return 0;
}

int missingnum( int arr[], int n, int *num2)
{
	int num1=0, i=0;
	int real_sum = 0;
	int our_sum = 0;
	int total_left_xor = 0, total_right_xor = 0;
	int arr_left_xor =0, arr_right_xor = 0;
	int half_miss_sum = 0;
	 
	 /*find the missing sum */
	 for(i = 0; i < n- 2; i++)
	 {
		real_sum ^= arr[i];
	 }
	 for(i = 1; i <= n; i++)
	 {
		real_sum ^= i;
	 }

	/* first find real sum */
	/* real_sum = (n*(n+1))/2;
	printf("real sum is %d\n", real_sum); */
	
	/*find our sum */
	/* for(i=0; i<n-2; i++)
	{
		our_sum +=arr[i];
	}
	printf("our sum %d\n", our_sum); */

	/* half of the sum of the two missing numbers */
	half_miss_sum = (real_sum - our_sum) / 2;
	
	printf("half_miss_sum is %d\n", half_miss_sum);

	/*finding total left xor */
	for(i=1; i<=half_miss_sum; i++)
	{
		total_left_xor ^= i;
	}
	
	/*finding total right xor */
	for(i=(half_miss_sum+1); i<=n; i++)
	{
		total_right_xor ^= i;
	}
	
	printf("total_left %d \ntotal_right %d \n", total_left_xor, total_right_xor);
	
	/* finding arr xor */
	for(i=0; i<n-2; i++)
	{
		if(arr[i] <= half_miss_sum)
		{
			arr_left_xor ^= arr[i];
		}
		else
		{
			arr_right_xor ^= arr[i];
		}
	}
	printf("arr_left_xor is %d\narr_right is %d \n", arr_left_xor, arr_right_xor);
	
	num1 = total_left_xor^arr_left_xor;
	*num2 = total_right_xor^arr_right_xor;
	
	return num1;
}
