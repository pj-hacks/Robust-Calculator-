/*this is a robust calculator program
creted by: joseph prince
for: himself
on: 1 /june /2024
this is how to use the calculator
select any number as your prompt     */

#include <stdio.h>
#include <math.h>
#define PI 3.142

//function declaration
void arithematic();
void logarithm();
void trigonometry();

int factorial(int n){
if (n <= 1 ){
return 1;
}
return n * factorial(n-1);
}


//global variable that can be used anywhere in the program
int facto;
double first;
double second;
int compute;
float result;
float firstnumber;
float secondnumber;
char agree;

int main()
{
//welcoming the user
printf("PLEASE THE CALCULATOR IS UNDER DEVELOPED \n\n BEAR WITH US IF YOU FIND ANY MISTAKE");
printf("\n You have to select the number that suit your taste");
printf("\n1:ARITHEMATIC\t2:LOGARITHM\t3:TRIGONOMETRY\n");
//take input from the user for switch
scanf("%d",&compute);
do {
switch (compute){
case 1:
arithematic();
break;

case 2:
logarithm();
break;

case 3:
trigonometry();
break;
}
printf("\nWill you like to continue(y = yes or n = no):");
scanf(" %c",&agree);
if(agree == 'y' || agree == 'Y'){
printf("What do yoou want to do now\n");
printf("\n1:ARITHEMATIC\t2:LOGARITHM\t3:TRIGONOMETRY\n");
scanf("%d",&compute);
}

}while (agree == 'y' || agree == 'Y');

}

//function definition
void arithematic(){
printf("YOU SELLECTED ARITHMETIC");
printf("\n1:ADDITION\t2:SUBTRACTION\t3:MULTIPLICATION\t4:DIVISION\t5:RAISE TO THE POWER\t6:SQUARE ROOT\t7:FACTORIAL\n");
scanf("%d",&compute);

switch (compute){
case 1:
printf("\n\nADDITION\n");
printf("ENTER YOUR FIRST NUMBER:");
scanf("%f",&firstnumber);
printf("ENTER YOUR SECOND NUMBER:");
scanf("%f",&secondnumber);
// TO GET RESULT FOR ADDITION
result = firstnumber + secondnumber;
printf("\n%f + %f = %f", firstnumber, secondnumber, result);
break;

case 2:
printf("\n\nSUBTRACTION\n");
printf("ENTER YOUR FIRST NUMBER:\n");
scanf("%f",&firstnumber);
printf("ENTER YOUR SECOND NUMBER:\n");
scanf("%f",&secondnumber);
// TO GET RESULT FOR SUBTRACTION
result = firstnumber - secondnumber;
printf("\n%f - %f = %f", firstnumber, secondnumber, result);
break;

case 3:
printf("\n\nMULTIPLICATION\n");
printf("ENTER YOUR FIRST NUMBER:");
scanf("%f",&firstnumber);
printf("ENTER YOUR SECOND NUMBER:");
scanf("%f",&secondnumber);
// TO GET RESULT FOR MULTIPLICATION
result = firstnumber * secondnumber;
printf("%f * %f = %lf", firstnumber, secondnumber, result);
break;

case 4:
printf("\n\nDIVISION\n");
printf("ENTER YOUR FIRST NUMBER:");
scanf("%f",&firstnumber);
printf("ENTER YOUR SECOND NUMBER:");
scanf("%f",&secondnumber);

if (firstnumber == 0){
printf("infinity");
}
else if (secondnumber == 0){
printf("invalid");
}
else {
 //TO GET RESULT FOR SUBTRACTION
result = firstnumber / secondnumber;
printf("\n%f / %f = %f", firstnumber, secondnumber, result);
break;}

case 5:
//INPUT BASE AND EXPONENT
printf("\n\nRAISE TO POWER:\n");
printf("ENTER BASE:");
scanf("%lf",&first);
printf("ENTER EXPONENT:");
scanf("%lf",&second);

//calculate power
result = pow(first, second);
//DISPLAY RESULT
printf("%.3lf raise to power %.3lf is equal to %.3lf",first,second,result);
break;

case 6:
//INPUT THE NUMBER FOR SQUAREROOT
printf("\n\nSQUAREROOT\n");
printf("Enter a number:");
scanf("%lf",&first);

//calculate squareroot
result = sqrt(first);

//display result
printf("Square root of %.3lf is %.3lf",first,result);
break;

case 7:
printf("\n\nFACTORIAL\n");
printf("ENTER THE NUMBER TO CALCULATE IT'S FACTORIAL\n");

scanf("%d",&facto);
printf("Factorial of %d is %d\n",facto, factorial(facto));
break;
}

}

void logarithm(){
printf("YOU SELLECTED LOGARITHM");
printf("\n1:NATURAL LOGARITHM\t2:Log10\n");
scanf("%d",&compute);

switch (compute){
case 1:
printf("\n\nNATURAL LOGARITHM\n");
printf("Enter the number:");
scanf("%lf",&first);
//calculate natural logarithm
result = log(first);
printf("Natural logarithm of %.3lf is %.3lf",first,result);
break;

case 2:
printf("\n\nLOG 10\n");
printf("LOG 10 of:");
scanf("%lf",&first);
//calculate LOG 10
result = log10(first);
printf("LOG 10 of %.3lf is %.3lf",first,result);
break;
}

}
void trigonometry(){
printf("YOU SELLECTED TRIGONOMETRY\n");
printf("1:SINE\t2:COSINE\t3:TANGENT\t4:SINE INVERSE\t5:COSE INVERSE");
scanf("%d",&compute);  //to take the userr desiredinput for trigonometry

//switch for trigonometry
switch(compute){
case 1:
printf("\nSINE\n"); //for sine
printf("sine:");
scanf("%f",&firstnumber); //to take input for sine
result = sin(firstnumber);
printf("SINE of %f = %f", firstnumber, result);
break;

case 2:
//cosine
printf("\nCOSINE\n");
printf("cosine:");
scanf("%f",&firstnumber);
//to take the input  of cosine
result = cos(firstnumber);
printf("COSINE of %f = %f",firstnumber, result);
break;

case 3:
printf("\nTANGENT\n");
printf("TANGENT:");
scanf("%f",&firstnumber);
//to take the input  of cosine
result = tan(firstnumber);
printf("TANGENT of %f = %f",firstnumber, result);
break;

case 4:
printf("\nSINE INVERSE\n");
printf("SINE INVERSE OF:");
scanf("%f",&firstnumber);
//CHECK IF THE VALU IS BETWEEN THE RANGE [-1 , 1]
if (firstnumber < -1 || firstnumber > 1){
printf("Error value must be in the range of [-1, 1]\n");
}
//to take the input  of cosine
result = asin(firstnumber);
// converting radian to degree
result = result * (180 / PI);
printf("SINE INVERSE of %f = %f",firstnumber, result);
break;

case 5:
printf("\nCOS INVERSE\n");
printf("COS INVERSE OF:");
scanf("%f",&firstnumber);
//CHECK IF THE VALU IS BETWEEN THE RANGE [-1 , 1]
if (firstnumber < -1 || firstnumber > 1){
printf("Error value must be in the range of [-1, 1]\n");
}
//to take the input  of cosine
result = acos(firstnumber);
// converting radian to degree
result = result * (180 / PI);
printf("COS INVERSE of %f = %f",firstnumber, result);
break;
}

}


