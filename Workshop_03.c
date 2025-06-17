#include<stdio.h>
#define MAX_SIZE 100

void inputArray(int a[], int *size);
void displayArray(int a[], int size);
int searchValue(int a[], int size, int target);
void calculateStatistics(int a[], int size);

// input array
void inputArray(int a[], int *size) {
    do {
        printf("Enter the number of elements (1-100): ");
        scanf("%d", size);
        if (*size < 1 || *size > MAX_SIZE) {
            printf("Invalid size! Please enter a number between 1 and 100.\n");
        }
    } while (*size < 1 || *size > MAX_SIZE);

    for (int i = 0; i < *size; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

// hiển thị mảng
void displayArray(int a[], int size) {
    printf("Array elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

// tìm giá trị trong mảng
int searchValue(int a[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (a[i] == target) {
            return i;
        }
    }
    return -1;
}

// tính giá trị sum, trung bình, max, min
void calculateStatistics(int a[], int size) {
    int sum = 0, max = a[0], min = a[0];
    float average;

    for (int i = 0; i < size; i++) {
        sum += a[i];
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    average = (float)sum / size;

    printf("Calculations:\n");
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
}

int main(){
	int a[MAX_SIZE], size = 0; 
	int target, index, choice;
	do{
		printf("\n--- Menu ---\n");
		printf("1. Input data\n");
		printf("2. Display array\n");
		printf("3. Search for a number\n");
		printf("4. Calculate statistics (Sum, Average, Max, Min)\n");
		printf("5. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		
		switch(choice){
			case 1: 
//				input data
				inputArray(a, &size);
				break;
			case 2:
//				hiện thị mảng
				if (size >0){
					displayArray(a, size);
				} else{
					printf("No data to display. Please input data first.\n");
				}
				break;
			case 3:
//				tìm số
				if (size >0){
					printf("Enter the number you want to search for: ");
					scanf("%d", &target);
					index = searchValue(a, size, target);
					if(index == -1){
						printf("The number %d is not found in the array.\n", target);
					} else{
						printf("The number %d is found in the array.\n", target, index);
					}
				}else{
					printf("No data available to sreach. Please input data first.\n");
				}
				break;
			case 4:
//				tính
				if(size >0){
					calculateStatistics(a, size);
				} else{
					printf("No data available to calculate statistics. Please input data first.\n");
				}
				break;
			case 5:
//				exit
				printf("Exiting the program.\n");
				break;
			default:
				printf("Invalid choice. Please try again.\n");
		}
	} while (choice != 5);
	
	return 0;
}
