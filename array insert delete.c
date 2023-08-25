


int main()
{
	int array[MAX_SIZE];
    int i, N,search,insertValue,insertIndex,deleteIndex;
    printf("Enter size of array: ");
    scanf("%d", &N);
    printf("Enter %d elements in the array : ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &array[i]);
    }
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 30;

	printf("Array before deletion\n");
	for (i = 0; i < n; i++)
	printf("%d ", arr[i]);

	n = deleteElement(arr, n, key);

	printf("\nArray after deletion\n");
	for (i = 0; i < n; i++)
	printf("%d ", arr[i]);

	return 0;
}

