// Copyright (c) 2022 Nina Mathew All rights reserved
//
// Created by: Nina Mathew
// Created on: Mar 1, 2023
// This program the cost of croissants



#include <stdio.h>


int main() {
    // This function calculates cost of croissants
    const float CROISSANTS = 2.55;
    const float HST = 0.13;


    float croissant_Number = 0;
    int croissantNumber;
    float sub_total1;
    float sub_total2;
    float total1;
    float total2;


    // input
    printf("How many croissants would you like?: ");
    scanf("%f", &croissant_Number);


    // process
    if (croissant_Number == 0) {
        printf("Invalid input, please try again.\n");
    }
        if (croissant_Number >= 6) {
        // output
            total1 = croissant_Number * CROISSANTS;
        printf("The cost for the croissants is $ %.2f.\n", total1);
        }
    if (croissant_Number < 6 && croissant_Number > 0) {
        sub_total2 = croissant_Number * CROISSANTS;
        total2 = sub_total2 + (sub_total2 * HST);
        printf("The cost for the croissants is $ %.2f.\n", total2);
    }
        printf("\nDone.\n");
        return 0;
    }
