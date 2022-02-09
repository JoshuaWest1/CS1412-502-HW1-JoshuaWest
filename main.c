#include <stdio.h>
// --------------------------------------------------------------------------------
// AUTHOR: Joshua Wade West
// FILENAME: HW1.cpp
// SPECIFICATION: Allows you to either Add 3 integers or convert Miles into Kilometers
// FOR: CS 1412 Lab- Section 502 
int main(void) {

int i;
int MenuOption; // the variable used when deciding which option you will select
  double Miles; // user inputted # of miles
  double Kilometers;// the Final # after Miles has been converted
  double Miles2Kilometers = 1.609;//the number need to convert Miles

int first_number,second_number,third_number;//the 1st, 2nd, and 3rd numbers inputted to be added
int total_number;//The result off adding first_number, second_number, and third_number

  
   for (i = 1; i < 2;)
  {


    printf("Please Select A Function To Perform\n List Of Options\n Press 1 to Enter and Add three Integers \n Press 2 to Convert Miles into Kilometers \n Press 3 to End Program\n ");
    scanf("%d", &MenuOption);



 if (MenuOption == 1) {
printf("\nPlease Enter Three Integers With Spaces Inbetween\n");
scanf("%d%d%d",&first_number,&second_number,&third_number);

  printf("\n%d + %d + %d",first_number,second_number,third_number);
  total_number=first_number+second_number+third_number;
  printf(" = %d\n\n",total_number);
 }


if (MenuOption == 2) {
printf("\nPlease Enter A Number Of Miles  ");
scanf("%lf",&Miles);

Kilometers = Miles * Miles2Kilometers;
printf("%.2lf Kilometers \n\n",Kilometers);
}

if (MenuOption == 3) {
  i++;}
  }

  printf(" \nProgram Has Ended");

  return 0;
}