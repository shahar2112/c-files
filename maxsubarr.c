#include <stdio.h> /*printf */
int SubArray(int arr[], int n, int *index1, int *index2);

int main()
{
	int arr[] = {-1, 3, 8, -12, -20, 5, 4, -10, -3};
	int n = sizeof(arr)/sizeof(arr[1]);
	int sum = 0;
	int index1=0, index2 = 0;
	
	sum =  SubArray(arr, n, &index1, &index2);
	printf("max sum is %d, index1 is %d , index2 is %d", sum, index1, index2);

return 0;
}

int SubArray(int arr[], int n, int *index1, int *index2)
{
	int tmp_sum = 0;
	int sum = 0;
	int i=0;
	int pot_index1=0;
	
	for(i=0; i<n; i++)
	{
		tmp_sum = arr[i] + tmp_sum;
		if(tmp_sum > sum)
		{
			sum = tmp_sum;
			*index1 = pot_index1;
			*index2 = i;
		}
		if(0 > tmp_sum)
		{
			tmp_sum = 0;
			pot_index1 = (i + 1);
		}
	}
	return sum;
}
