#include<stdio.h>
int main(){
    float m,h,bmi;
    int ch1,ch2;
    printf_s("WELCOME TO THE BMI CALCULATOR IT WILL STATE ABOUT YOUR HEAL;TH CONDITION \n PLEASE ENTER YOUR HEIGHT AND MASS AS FOLLOWING");
    printf_s("CHOOSE THE INPUT VALUE OF MASS IN 1.KG 2.POUND \n");
    scanf("%d",&ch1);
    printf_s("CHOOSE THE INPUT VALUE OF HEIGHT IN 1.INCHES 2.METER 3.CENTIMETER \n");
    scanf("%d",&ch2);
    printf_s("ENTER YOUR MASS AND HEIGHT RESPECTIVELY \n");
    scanf("%f %f",&m,&h);
    if(ch1==2) m=m*0.45359237;
    if(ch2==1) h=h*0.0254;
    else if(ch2==3) h=h*0.01;
    bmi=(m/(h*h));
    printf_s("HENCE BMI IS=%f",bmi);
    if(bmi<=18) printf_s("You are underweight");
    else if(bmi>=30) printf("You are in obesity");
    else printf("You weight is perfect ENJOY YOUR LIFE!!!");
    return 0;
}
