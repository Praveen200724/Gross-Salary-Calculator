//gross salary = basic salary + all allowence + all benefits

#include<stdio.h>
int main()
{
	float BS, DA, RA, GS;
	printf("Enter Basic Salary : ");
	scanf("%f",&BS);
	DA = ((float)BS*40)/100;
	RA = ((float)BS*20)/100;
	printf("\n Dearness Allowance is : %.2f",DA);
	printf("\n Rent Allowance is : %.2f",RA);
	GS = BS + DA + RA;
	printf("\n Gross Salary is : %.2f",GS);
	return 0;
}
