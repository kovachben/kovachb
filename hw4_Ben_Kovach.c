#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

/*
  File: hw4_Ben_Kovach.c
  Author: Ben Kovach
  Assignment: Homework 4
  Date: 2/2/2025
  References: GeeksForGeeks - srand & sleep
*/

int main()
{
  srand(time(NULL));
  int seconds, play = 1;
  int action_value, action;
  
  while (play == 1)
  {
    printf("\nWelcome to Autopilot Simulator!\n\n\n");
    
    int flight_path_distance = rand() % 21 + 50;
    
    for (seconds = 10; seconds > 0; --seconds)
    {
      action_value = rand() % 25 + 1;
    
      printf("\n\n%d second(s) until you reach your destination.\n", seconds);
      printf("Distance from flight path: %d ft\n\n", flight_path_distance);
      
      printf("Would you like to correct the plane or stay?\n");
      printf("1) Correct\n2) Stay\nEnter number here: ");
      scanf("%d", &action);
      
      while (action != 1 && action != 2)
      {
        printf("\nError. Enter a 1 or a 2.\n");
        printf("Re-enter number here: ");
        scanf("%d", &action);
      }

      if (action == 1)
      { 
        flight_path_distance = (flight_path_distance >= 0) 
        ? flight_path_distance - action_value
        : action_value + flight_path_distance;
      }
      else
      {
        flight_path_distance = (flight_path_distance >= 0) 
        ? action_value + flight_path_distance
        : flight_path_distance - action_value;
      
      }
    
      sleep(1);
      
    }
    
    printf("\nFlight Over!\n");
    
    if (flight_path_distance <= 4 && flight_path_distance >= -4)
    {
      printf("Success!\n");
      printf("You were %d ft from the flight path.\n", flight_path_distance);
    }
    else
    {
      printf("Flight failed!\n");
      printf("You were %d ft from the flight path.\n", flight_path_distance);
    }
    
    printf("Would you like to play again?\n");
    printf("1) Yes\n2) No\nEnter number here: ");
    scanf("%d", &play);
    
    while (play != 1 && play != 2)
      {
        printf("\nError. Enter a 1 or a 2.\n");
        printf("Re-enter number here: ");
        scanf("%d", &play);
      }
  }
  return 0;
}