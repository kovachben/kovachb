#include <stdio.h>

/*
  File: hw5_Ben_Kovach.c
  Author: Ben Kovach
  Assignment: Homework 5
  Date: 2/9/2025
  References: Stack Overflow - Input Checking
*/

int exclusiveOr(int var1, int var2)
/*
  This function inputs two numbers and performs the bitwise "exclusive or"
   operation between them. The result is the output.
*/
{
  int ans;
  
  ans = var1^var2;
  
  return ans;
}

int normalOr(int var1, int var2) 
/*
  This function inputs two numbers and performs the bitwise "or" operation
  between them. The result is the output.
*/
{
  int ans;
  
  ans = var1|var2;
  
  return ans;
}

int bitwiseAnd(int var1, int var2) 
/* 
  This function inputs two numbers and performs the bitwise "and" operation
  between them. The result is the output.
*/
{
  int ans;
  
  ans = var1&var2;
  
  return ans;
}

int twosCompliment(int var1) 
/* 
  This function inputs a number and performs the bitwise twos compliment 
  operation on it. The result is the output.
*/
{
  int ans;
  
  ans = ~var1 +1;
  
  return ans;
}

int main()
{
  printf("Hello user!\n\n");
  printf("Please input two numbers\n");
  
  int num1, num2, ans, ans1;
  
  printf("Enter the first number: ");
  
  while (scanf("%d", &num1) != 1)
  {
    while (getchar() != '\n')
    {
      continue;
    }
  }
  
  getchar();
  
  printf("\nEnter the second number: ");
  
  while (scanf("%d", &num2) != 1)
  {
    while (getchar() != '\n')
    {
      continue;
    }
  }
  
  getchar();
  
  int user = 0;
  
  while (user == 0)
  {

    int operation;
    
    printf("\n\nMenu of Operations\n\n");
    printf("Enter the number of the operation you want to perform.\n\n");
    printf("1) XOR\n");
    printf("2) OR\n");
    printf("3) AND\n");
    printf("4) 2's Compliment\n\n");
    printf("Enter number here: ");
    
    while (scanf("%d", &operation) != 1)
    {
      while (getchar() != '\n')
      {
        continue;
      }
    }
  
  getchar();
  
    switch (operation)
    {
      case 1:
        
        ans = exclusiveOr(num1, num2);
        
        printf("Result: %d\n\n", ans);
        
        break;
      
      case 2:
        
        ans = normalOr(num1, num2);
        
        printf("Result: %d\n\n", ans);
        
        break;
      
      case 3:
      
        ans = bitwiseAnd(num1, num2);
        
        printf("Result: %d\n\n", ans);
        
        break;
      
      case 4:
      
        ans = twosCompliment(num1);
        
        ans1 = twosCompliment(num2);
        
        printf("Result of first number: %d\n\n", ans);
        
        printf("Result of second number: %d\n\n", ans1);
        
        break;
        
      default:
        
        printf("Error. Must print a number between 1 and 4\n\n"); 
    }
    
    int choice;
    int error_check = 0;
    printf("What would you like to do next\n");
    printf("1) Perform calculations w/ different numbers\n");
    printf("2) Perform calculations w/ the same numbers\n");
    printf("3) Close the program\n");
    printf("Enter number here: ");
    
    while (error_check == 0)
    {
      while (scanf("%d", &choice) != 1)
      {
        while (getchar() != '\n')
        {
          continue;
        }
      }
    
      getchar();
      
      switch (choice)
      {
        case 1:
        
          printf("\n\nEnter the new first number: ");
    
          while (scanf("%d", &num1) != 1)
          {
            while (getchar() != '\n')
            {
              continue;
            }
          }
    
          getchar();
    
          printf("\nEnter the new second number: ");
  
          
          while (scanf("%d", &num2) != 1)
          {
            while (getchar() != '\n')
            {
              continue;
            }
          }
    
          getchar();
          
          error_check = 1;
          
          break;
          
        case 2:
        
          error_check = 1;
          
          break;
          
        case 3:
          
          error_check = 1;
          user = 1;
          
          break;
          
        default:
        
          printf("Error. Please enter a number from 1 to 3: ");
          
      }
    }
  } 
  return 0;
}