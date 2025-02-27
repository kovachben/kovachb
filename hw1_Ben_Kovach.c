#include <stdio.h>

/*
File: hw1_Ben_Kovach.c
Author: Ben Kovach
Assignment: Homework 1
Date: 01/09/2025
References:
*/


int main()
 {
    float numerator = 0;
    float denominator = 0;
    printf("Enter the first number (numerator): ");
    scanf("%f", &numerator);
    printf("Enter the second number (denominator): ");
    scanf("%f", &denominator);
    if (denominator == 0)
    {
        printf("Invalid number, cannot divide by zero.");
    }
    else
    { 
    float quotient = numerator / denominator;
    printf("Numerator: %.2f; Denominator: %.2f; Answer: %.2f\n", numerator, denominator, quotient);
    }
}

