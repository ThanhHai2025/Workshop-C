#include<stdio.h>
#include<stdlib.h>

//Function prototypes
float inputSalary();
float calculateAllowance(float basic_salary);
float calculateTax(float total_income);
float calculateNetIncome(float basic_salary, float allowance, float tax);

int main(){
//	Step 1: Initialize variable used in the program
	int num_employees;
	float total_salary_cost = 0;
	int count_25 = 0, count_15 = 0, count_10 = 0;
	
//	Step 2: In put the number of employee
	printf("Enter the number of employees: ");
	scanf("%d", &num_employees);
	
//	Step 3: Validate number of employees. If numberOfEmployees < 1 then exit the program
	if (num_employees < 1){
		printf("Validate number of employees. Exiting the program.\n");
		return 1;
	}
//	Step 4: Process each employee
for (int i = 0; i <num_employees; i++){
	printf("\nProcessing employee %d: \n", i + 1);
	float basic_salary = inputSalary();
	float allowance = calculateAllowance(basic_salary);
	float total_income = basic_salary + allowance;
	float tax = calculateTax(total_income);
	float net_income = calculateNetIncome(basic_salary, allowance, tax);
	
	if (allowance == basic_salary * 0.25) count_25++;
	else if (allowance == basic_salary * 0.15) count_15++;
	else if (allowance == basic_salary * 0.10) count_10++;
	total_salary_cost += net_income;
	printf("Basic Salary: %.2f\n", basic_salary);
	printf("Allowance: %.2f\n", allowance);
	printf("Tax Deduction: %.2f\n", tax);
	printf("Net Income: %.2f\n", net_income);
}
//	Step 5: Salary Statistic
printf("=== Salary Statistic ===\n");
printf("Total salary cost of the company: %.2f\n", total_salary_cost);
printf("Number of employee with allowance of 25%%: %d\n", count_25);
printf("Number of employee with allowance of 15%%: %d\n", count_15);
printf("Number of employee with allowance of 10%%: %d\n", count_10);

system("pause");
return 0;
}

//Function to calculate basic salary
float inputSalary(){
	float salary;
	do {
		printf("Enter the basic salary (>=0): ");
		scanf("%f", &salary);
		if (salary < 0){
			printf("Invalid salary. Please enter a non-negative value.\n");
		}
	}while(salary<0);
	return salary;
}

//Function to calculate allowance
float calculateAllowance(float basic_salary){
	if (basic_salary < 6000000) return basic_salary * 0.25;
	else if (basic_salary<= 15000000) return basic_salary * 0.15;
	else return basic_salary * 0.10;
}

//Function to calculate tax
 float calculateTax(float total_income){
 	if (total_income <= 8000000) return 0;
 	return (total_income -8000000) *0.10;
}

//Function to calculate net income
float calculateNetIncome(float basic_salary, float allowance, float tax){
	return basic_salary + allowance - tax;
}