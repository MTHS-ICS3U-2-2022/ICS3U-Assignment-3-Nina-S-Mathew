// Copyright (c) 2022 Nina Mathew All rights reserved
//
// Created by: Nina Mathew
// Created on: Mar 1, 2023
// This program the cost of croissants

#include <stdio.h>

int main()
{
    // This function calculates cost of croissants
    const float CROISSANTS = 2.55;
    const float HST = 0.13;

    float croissantNumberFloat = 0;
    int croissantNumber;
    float sub_total1;
    float sub_total2;
    float total1;
    float total2;

    // input
    printf("How many croissants would you like?: ");
    scanf("%f", &croissantNumberFloat);

    // process
    if (croissantNumberFloat == 0)
    {
        printf("Invalid input, please try again.\n");
    }
    if (croissantNumberFloat >= 6)
    {
        // output
        total1 = croissantNumberFloat * CROISSANTS;
        printf("The cost for the croissants is $ %.2f.\n", total1);
    }
    if (croissantNumberFloat < 6 && croissantNumberFloat > 0)
    {
        sub_total2 = croissantNumberFloat * CROISSANTS;
        total2 = sub_total2 + (sub_total2 * HST);
        printf("The cost for the croissants is $ %.2f.\n", total2);
    }
    printf("\nDone.\n");
    return 0;
}
