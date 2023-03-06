//heap sort 



#include<stdio.h>
swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
heapify(int arr[], int N, int i){
//	int i, N, arr[100];
	int l = i;
	int left = 2*i+1;
	int right = 2*i+2;
	if(left < N && arr[left]>arr[l]){
		l = left;
	}
	if(right < N && arr[right]>arr[l]){
		l = right;
	}
	if (l != i){
		swap(&arr[i], &arr[l]);
		heapify(arr, N, l);
	}
}
void heapSort(int arr[], int N)
{
	int i;
	for (i = N / 2 - 1; i >= 0; i--)
		heapify(arr, N, i);
	for (i = N - 1; i >= 0; i--) {
		swap(&arr[0], &arr[i]);
		heapify(arr, i, 0);
	}
}
int main()
{

	int i, N, arr[25];
   printf("Enter the No of Element: ");
   scanf("%d",&N);
   printf("Enter %d elements: ", N);
   for(i=0;i<N;i++)
   scanf("%d",&arr[i]);
	heapSort(arr, N);
	printf("Sorted array is\n");
	for (i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
