//medical dosage calculator
#include<stdio.h>
int main(void)
{
	float patient_weight; //declaring variable for patients weight
	printf("Enter Patient Weight:");//prompting the user to enter the weight
	scanf("%f",&patient_weight);//allows the user to input the value
	float dosage = patient_weight*0.8;//declaring the dosage formula after input so it takes the value that the user entered in the formula
	printf("The patient's recommended dosage is %f mg",dosage);//output statement
}