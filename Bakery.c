// Copyright (c) 2022 Nina Mathew All rights reserved
//
// Created by: Nina Mathew
// Created on: Mar 1, 2023
// This program the cost of crossaints



#include <stdlib.h>
#include <stdio.h>


int main() {
    // This function calculates cost of crossaints
    const float CROISSANTS = 2.55;
    const float HST = 0.13;


    float crossaint_Number;
    float sub_total1;
    float sub_total2;
    float total1;
    float total2;
    int crossaintNumber = 0;


    // input
    printf("How many crossaints would you like?: ");
    scanf("%f", &crossaint_Number);


    // process
        if (crossaintNumber = 0) {
        printf("Invalid input, please try again.\n"); }
if (crossaint_Number >= 6) {
        // output
        total1 = crossaint_Number * CROISSANTS;
        printf("The cost for the crossaints is $ %.2f.\n", total1);
        } else {
            sub_total2 = crossaint_Number * CROISSANTS;
            total2 = sub_total2 + (sub_total2 * HST);
        printf("The cost for the crossaints is $ %.2f.\n", total2); }
        if (crossaintNumber = 0) {
        printf("Invalid input, please try again.\n"); }

        printf("\nDone.\n");
        return 0;
        }
