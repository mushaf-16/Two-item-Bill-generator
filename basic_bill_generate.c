#include<stdio.h>
int main()
{
    float Q1,Q2,R1,R2,SUM1,SUM2,Total,Discount,Div,Mul,Net;
    char P1[50],P2[50];
    
    //FOR 1ST ITEM
    printf("ENTER ITEM ONE:");
    scanf("%49s",&P1);
    printf("ENTER QUANTITY OF 1ST ITEM:");
    scanf("%f",&Q1);
    printf("ENTER PRICE OF 1ST ITEM:");
    scanf("%f",&R1);

    //FOR 2ND ITEM
    printf("ENTER ITEM TWO:");
    scanf("%49s",&P2);
    printf("ENTER QUANTITY OF 2ND ITEM:");
    scanf("%f",&Q2);
    printf("ENTER PRICE OF 2ND ITEM:");
    scanf("%f",&R2);
    
    SUM1=(Q1*R1);
    SUM2=(Q2*R2);
    
    Total=(SUM1+SUM2);
    
    printf("Enter Discount %% COMBINED ON BOTH:");
    scanf("%f",&Discount);
    
    Div= (Total/100);
    Mul=Div*Discount;
    
    printf("The total AMOUNT is: %f\n",Total);
    printf("The discounted amount is:%f\n",Mul);
    Net=(Total-Mul);
    printf("The net amount to PAY is:%f", Net);
    
    return 0;
}