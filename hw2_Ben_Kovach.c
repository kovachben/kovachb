#include <stdio.h>
#include <unistd.h>

/*
File: hw2_Ben_Kovach.c
Author: Ben Kovach
Assignment: Homework 2
Date: 1/14/2025
References: Stack Overflow
*/

int main()
{
  float ambienttemperature, takeofftemperature;
  int gallonsused, gallonsoffuel, gallonsinput;
  
  printf("What is the abient temperature? : ");
  scanf("%f", &ambienttemperature);
  
  int negativecheck = 0;
  while (negativecheck == 0)
  {
    printf("How many gallons (whole number) do you have? : ");
    scanf("%i", &gallonsinput);
    if (gallonsinput > 0)
    {  
      negativecheck += 1;
    }
    else
    {
        printf("Invalid input. Cannot have negative number of gallons.\n");
    }
  }
  
  int negativecheck1 = 0;
  while (negativecheck1 == 0)
  {
    printf("What is the engine temperature (in degrees F) required for takeoff? : ");
    scanf("%f", &takeofftemperature);
    if (takeofftemperature > 0)
    {
      negativecheck1 += 1;
    }
    else
    {
      printf("Invalid input. Cannot have a negative number of gallons.\n");
    }
  }
  
  gallonsoffuel = gallonsinput;
  
  float ambientenginetemperature = ambienttemperature + 3 ;
  int seconds = 0;
  
  while (ambientenginetemperature < takeofftemperature)
  {
    sleep(1);
    gallonsoffuel = gallonsoffuel - 2 ;
    ambientenginetemperature = ambientenginetemperature + 1.25 ;
    seconds = seconds + 1 ;
    printf("Current Engine Temperature: %.2f; Gallons of Fuel Remaining: %i\n", ambientenginetemperature, gallonsoffuel);
  }
  gallonsused = gallonsinput - gallonsoffuel ;
  printf("\nEngine warmup completed after %i seconds. Warmup used %i gallons of fuel. You have %i gallons remaining.\n", seconds, gallonsused, gallonsoffuel);
  
  return 0;
}

  

