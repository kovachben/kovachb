#include <stdio.h>


/*
  File: hw3_Ben_Kovach.c
  Author: Ben Kovach
  Assignment: Homework 2
  Date: 1/26/2025
  References:
*/

int main()
{
  // Initial User Inputs
  
  float hours_worked, hourly_rate;
  int employee_id, employee_type;
  
  printf("Please enter your unique employee ID: ");
  scanf("%d", &employee_id);
  
  while (employee_id < 1000 || employee_id > 1000000)
  {
    printf("\nError. Wrong ID number. Please re-enter your employee ID: ");
    scanf("%d", &employee_id);
  }
  
  printf("\nEnter 1 if you are hourly or 2 if you are salaried: ");
  scanf("%d", &employee_type);
  
  while (employee_type != 1 && employee_type != 2)
  {
    printf("\nError. Must enter a 1 or a 2.");
    printf("\nEnter 1 if you are hourly or 2 if you are salaried: ");
    scanf("%d", &employee_type);
  }
  
  printf("\nEnter the number of hours you have worked this week: ");
  scanf("%f", &hours_worked);
  
  printf("\nEnter your hourly rate: $");
  scanf("%f", &hourly_rate);
  
  while (hourly_rate > 100)
  {
    printf("\nError. Hourly rate is yoo large."); 
    printf("Please re-enter your hourly rate: $");
    scanf("%f", &hourly_rate);
  }
  
  // Summary Printout
  
  if (employee_type == 2)
  {  
    printf("\nHello salaried employee %d !\n", employee_id);
    printf("Below is your work summary:\n\n");
  }
  else
  {
    printf("\nHello hourly employee %d !\n", employee_id);
    printf("Below is your work summary:\n\n");
  }
  
  printf("You have worked %.2f hours.\n", hours_worked);
  printf("Your hourly rate is $%.2f.\n", hourly_rate);
  
  if (hours_worked > 60 && employee_type == 1)
  {
    printf("Please speak with the manager.\n");
  }
  
  // Queries
  
  int switch_variable, satisfied, pay_choice, current_pay_int, correction;
  float hours_worked_pay;
  
  printf("\nWould you like to know more information?"); 
  printf("Enter 1 for yes and 2 for no: ");
  scanf("%d", &satisfied);
  
  while (satisfied != 1 && satisfied != 2)
  {  
    printf("\nError. Must enter a 1 or a 2.\n");
    printf("Would you like to know more information.");
    printf(" Enter 1 if yes and 2 if no: ");
    scanf("%d", &satisfied);
  }
  
  while (satisfied == 1)
  {
    printf("\n\nMain menu:\n\n");
    printf("Enter 1 to view your current pay.\n");
    printf("Enter 2 to change any false information.\n");
    printf("Enter 3 to see if you must speak to the manager.\n");
    printf("Enter 4 to display your work summary again.\n");
    printf("Enter 5 to exit.\n");
    printf("Enter number here: ");
    scanf("%d", &switch_variable);
  
    switch (switch_variable)
    {
    case 1:
    
      hours_worked_pay = hours_worked;
      
      if (employee_type = 2 && hours_worked > 40)
      {
        hours_worked_pay = 40;
      }
      
      if (employee_type = 1 && hours_worked > 60)
      {
        hours_worked_pay = 60;
      }
      
      float current_pay = hours_worked_pay * hourly_rate;
      
      current_pay_int = (int) current_pay;
      
      printf("\nEnter 1 for exact pay. Enter 2 for whole dollar amount: ");
      scanf("%d", &pay_choice);
      
      while (pay_choice != 1 && pay_choice != 2)
      {
        printf("Error. Must enter a 1 or 2.\n");
        printf("Enter 1 for exact pay. Enter 2 for whole dollar amount: ");
      }
      if (pay_choice == 1)
      {
       printf("\nYour current pay is $%.2f", current_pay);
      }
      if (pay_choice == 2) 
      {
        printf("\nYour current pay (whole dollars) is $%d", current_pay_int);
      }
      
      break;
      
    case 2:
      printf("\nWhat information would you like to correct?\n");
      printf("Enter 1 to correct your employee type. (Salaried or Hourly)\n");
      printf("Enter 2 to correct the number of hours worked.\n");
      printf("Enter 3 to correct your hourly rate.\n");
      printf("Enter number here: ");
      scanf("%d", &correction);
      
      switch (correction)
      {
        case 1:
        
          printf("Enter 1 for hourly and 2 if you are salaried: ");
          scanf("%d", &employee_type);
          while (employee_type != 1 && employee_type != 2)
          {
            printf("\nError. Must enter a 1 or a 2.");
            printf("\nEnter 1 if you are hourly and 2 if you are salaried: ");
            scanf("%d", &employee_type);
          }
          
          break;
        
        case 2:
        
          printf("\nEnter the number of hours you have worked this week: ");
          scanf("%f", &hours_worked);    
      
          break;
      
        case 3:
        
          printf("\nEnter your hourly rate: $");
          scanf("%f", &hourly_rate);
  
          while (hourly_rate > 100)
          {
          printf("\nError. Hourly rate is yoo large."); 
          printf("Re-enter your hourly rate: $");
          scanf("%f", &hourly_rate);
          }
          
          break;
          
        default:
        
        printf("Error. You must enter a 1,2, or 3. Returning to main menu.");
      }
      
      break;
      
      case 3:
        
        (hours_worked > 60 && employee_type == 1) ? printf("Please speak with manager.")
                                                  : printf("You do not need to speak with manager.");
        
        
        break;
      
      case 4:
      
        if (employee_type == 2)
        {  
          printf("\nHello salaried employee %d!\n", employee_id);
          printf("Below is your work summary:\n");
        }
        else
        {
          printf("Hello hourly employee %d!\n", employee_id);
          printf("Below is your work summary:\n");
        }
  
        printf("You have worked %.2f hours.\n", hours_worked);
        printf("Your hourly rate is $%.2f.\n", hourly_rate);
  
        if (hours_worked > 60 && employee_type == 1)
        {
          printf("Please speak with the manager.\n");
        }
        
        break;
          
      case 5:
      
        printf("Have a nice day!\n");
        
        satisfied = 2;
        
        break;
        
      default:
        
        printf("You must enter a number 1-5.\n");
        
      } 
  }
  return 0;
}