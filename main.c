#include<stdio.h>
#include<conio.h>
int  main()
{
int number1, number2, sum;

FILE *p_task1;
p_task1=fopen("Text (4).txt","r");
fscanf(p_task1, "%d", &number1);
fscanf(p_task1, "%d", &number2);
sum = number1 + number2;
printf("Number (1) = %d\n", number1);
printf("Number (2) = %d\n", number2);
printf("Sum = %d\n\n", sum);
fclose(p_task1);

p_task1=fopen("Text (4).txt","a+");
fputs("The Sum = ", p_task1);
fprintf(p_task1, "%d\n", sum);
fclose(p_task1);

// This is My Application within the Session:
// -------------------------------------------
/*
int num1, num2, sum;
printf("Number (1) = ");    scanf("%d", &num1);
printf("Number (2) = ");    scanf("%d", &num2);
sum = num1 + num2;
printf("The Sum = %d\n\n",sum);

FILE *p_fady;
p_fady=fopen("example.txt","w+");
fputs("Number (1): ",p_fady);       fprintf(p_fady, "%d\n", num1);
fputs("Number (2): ",p_fady);       fprintf(p_fady, "%d\n", num2);
fputs("The Sum = ",p_fady);       fprintf(p_fady, "%d\n", num1+num2);
fclose(p_fady);
*/


return 0;
}
