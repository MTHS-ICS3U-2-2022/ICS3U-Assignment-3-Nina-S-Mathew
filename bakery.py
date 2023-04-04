#!/usr/bin/env python3
""""
Created by: Nina Mathew
Created on: Feb 28 2023
This is the "Calculates cost of a croissants" module
"""


import constants


def main():
    """The main() function calculates the cost of croissants, returns None."""
    # input
    croissant_number_str = input("Enter the number of croissants: ")
    # process
    try:
        croissant_number = int(croissant_number_str)
        if (
            croissant_number >= 6
        ):  # if the number of croissants is greater than or equal to 6
            total1 = constants.CROISSANT * croissant_number
            print(f"\nThe cost for a {croissant_number} croissants is ${total1:.2f}.")
        else:
            sub_total = constants.CROISSANT * croissant_number
            total2 = sub_total + (sub_total * constants.HST)
            print(f"\nThe cost for a {croissant_number} croissant's is ${total2:.2f}.")
    except ValueError:
        print("\nInvalid input")
    finally:
        print("\nThanks for coming! 😊.")


if __name__ == "__main__":
    main()
    print("\nDone")
