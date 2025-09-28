//question 3
#include<stdio.h>
int main()
{
	int sale,saleprice,cost;
	printf("Enter your total:");
	scanf ("%d",&cost);
	if (cost>=2000 && cost<=4000)
	{
		sale = cost*0.20;
		printf("\nYour total is : %d",cost);
		printf("\nYour discount is : %d ",sale);
		saleprice=cost-sale ;
		printf("\nYour total after discount is: %d",saleprice);
    }
    else if (cost>4000 && cost<=6000) {
    	sale = cost*0.30;
		printf("\nYour total is: %d",cost);
		printf("\nYour discount is: %d ",sale );
		saleprice=cost-sale ;
		printf("\nYour total after discount is: %d",saleprice);
	}
	else if (cost>6000) 
	{
    	sale = cost*0.50;
		printf("\nYour total is: %d",cost);
		printf("\nYour discount is: %d",sale );
		saleprice=cost-sale ;
		printf("\nYour total after discount is: %d",saleprice);
}
}