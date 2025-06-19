#include<stdio.h>
#include<stdlib.h>
#define MAX_DAYS 100

void Input(int arr[], int *n){
	do {
		printf("Enter the number of days (1-100): ");
		scanf("%d", n);
		if(*n < 1 || *n > MAX_DAYS) {
			printf("Invalid number! Please enter between 1 and 100.\n");
		}
	} while (*n < 1 || *n > MAX_DAYS);
		for (int i = 0; i < *n; i++){
			printf("Enter sales data for day %d: ", i + 1);
			scanf("%d", &arr[i]);
		}
}

void Display(int arr[], int n){
	if ( n == 0) {
		printf("No data available. Please input sales data first.\n");
		return;
	}
	printf("Sales data:\n");
	for (int i = 0; i < n; i++){
		printf("Day %d: %d\n", i + 1, arr[i]);
	}
}

void bubsortTang(int arr[], int n){
	for (int i = 0; i < n - 1; i++){
		for (int j = 0; j < n - i - 1; j++){
			if (arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void bubsortGiam(int arr[], int n){
	for (int i = 0; i < n - 1; i++){
		for (int j = 0; j < n - i - 1; j++){
			if (arr[j] < arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void searchGreater(int arr[], int n, int target){
	printf("Sales value greater than %d:\n", target);
	for (int i = 0; i < n; i++) {
		if(arr[i]  > target){
			printf("Day %d: %d\n", i + 1, arr[i]);
		}
	}
}

int main(){
	int arr[MAX_DAYS];
	int n = 0;
	int choice, target;
	do {
		printf("\n=== Enhanced Sales Data Management Menu ===\n");
		printf("1. Input Sales Data\n");
		printf("2. Display Sales Data\n");
		printf("3. Sort Sales Data in Ascending Order\n");
		printf("4. Sort Sales Data in Descending Order\n");
		printf("5. Search for Sales Greater Than a Target\n");
		printf("6. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		
		switch (choice){
			case 1:
				Input(arr, &n);
				break;
			case 2:
				Display(arr, n);
				break;
			case 3:
				bubsortTang(arr, n);
				printf("Sort sales data in ascending order:\n");
				Display(arr, n);
				break;
			case 4:
				bubsortGiam(arr, n);
				printf("Sort sales data in descending order:\n");
				Display(arr, n);
				break;
			case 5:
				printf("Enter the target sales value:");
				scanf("%d", &target);
				searchGreater(arr, n, target);
				break;
			case 6:
				printf("Exit program.\n");
				break;
			default:
				printf("Invalid choice! Try again.\n");
		}
	} while (choice != 6);
	system("pause");
	return 0;
}