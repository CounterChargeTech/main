#include <stdio.h>
#include <string.h>

typedef struct {
	char name[25];
	unsigned int emp_no;
	unsigned short hours;
	unsigned short rate;
	unsigned short sss;
	unsigned short pagibig;
	unsigned short philHealth;
} Employee;

int main() {
	float salary;
	float tsalary;
	Employee emp;

	puts("Welcome to our Payroll System");
	printf("Enter Name: "); gets(emp.name);
	printf("Enter EmployeeNo. :"); scanf("%d", &emp.emp_no);
	printf("No. of Hours Work: "); scanf("%hu", &emp.hours);	
	printf("Salary Rate: "); scanf("%hu", &emp.rate);
	
	salary = emp.hours * emp.rate;
	printf("Salary: %.2f\n", salary);

	puts("Deduction:");
	printf("\tSSS: "); scanf("%hu", &emp.sss);
	printf("\tPag-ibig: "); scanf("%hu", &emp.pagibig);
	printf("\tPhilHealth: "); scanf("%hu", &emp.philHealth);
	
	tsalary = salary - (emp.sss + emp.pagibig + emp.philHealth);
	printf("Total Salary: %.2f\n", tsalary);
	
	printf("\nMr. %s, with %hu hours of work and %hu pesos salary rate, your total salary is %.2f\n", emp.name, emp.hours, emp.rate, tsalary);	
	return 0;
}

	
