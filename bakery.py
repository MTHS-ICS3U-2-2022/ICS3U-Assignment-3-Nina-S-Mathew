#!/usr/bin/env python3
""""
Created by: Nina Mathew
Created on: Feb 28 2023
This is the "Calculates cost of a crossaints" module
"""


import constants


def main():
    """The main() function calculates the cost of crossaints, returns None."""
    # input
    crossaint_number_str = int(input("Enter the number of crossaints: "))
    # process
    try:
        crossaint_number = int(crossaint_number_str)
    except ValueError:
        print("Invalid input")
    else:
        if (crossaint_number >= 6):  # if the number of crossaints is grater than or equal to 6
            total1 = constants.CROSSAINTS * crossaint_number
        print(
            f"\nThe cost for a {crossaint_number} inch pizza is ${:.2f}.")
        print("\nDone")
        else:  # if the number of crossaints is less than 6
            print(f"\nThe cost for a {crossaint_number} is ${total1:.2f}.")


print("\nDone")


if __name__ == "__main__":
    main()
