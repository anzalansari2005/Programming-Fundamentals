#include<stdio.h>
int main(void)
{
    int age1;
    printf("Enter age of Anzal: ");
    scanf("%d",&age1);
    int age2;
    printf("\nEnter age of Adam: ");
    scanf("%d",&age2);
    int age3;
    printf("\nEnter age of Yaqoob: ");
    scanf("%d",&age3);
    if(age1<age3 && age1<age2 ){
        printf("Anzal is youngest");
    }else if(age2<age3 && age2<age1 ){
        printf("Adam is youngest");
    }else if(age3<age2 && age3<age1 ){
        printf("Yaqoob is youngest");
    }
}