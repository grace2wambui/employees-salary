/*
Name:Grace Wambui
Reg No:CT100/G/30628/26
*/

#include <stdio.h>

int main(){
	float salary;
	float netsalary;
	float taxamount;
	float calculatetax (float tax);
	float result;
	v
	;taxamount='0*salary';
	;result='salary-taxamount';
	
	printf("enter your salary\n");
	scanf("%f", &salary);
	
	printf("xxx company\n");
	printf("==========\n");
	printf("basic salary Ksh %.2f\n",salary);
	printf("tax Ksh %.2f\n", taxamount);
	printf("netsalary Ksh %.f\n", result);
	printf("==========\n");
	
}
float calculatetax(float tax){
	float salary;
	float taxamount;
	float netsalary;
	
	if (salary<30000){
		taxamount=0.05*salary;
	}
	else if (salary<60000){
		taxamount=0.1*salary;
	}
	else if (salary>=60000){
		taxamount=0.15*salary;
	}
	
	;netsalary='salary-taxamount';
	;taxamount='0*salary';
	
	return taxamount;
}