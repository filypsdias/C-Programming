/**
 * Date: 01/01/2020
 * Author: @filypsdias
 * Github: https://github.com/filypsdias
 *
 * Given a list of numbers and a number k, return whether any two numbers from the list add up to k.
   For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_VALUE 4


int hasPairWithSum(int *vec, int sum) {
    for(int i = 0; i < MAX_VALUE; i++) {
        for(int j = 1; j <= MAX_VALUE; j++) {
            if(vec[i] + vec[j] == sum) {
                return 0;
            }
        }
    }

    return 1;
}

int main() {

    int nums[MAX_VALUE], k;

    for(int i = 0; i < MAX_VALUE; i++) {
        scanf("%d", &nums[i]);
    }

    scanf("%d", &k);

    int validSum = hasPairWithSum(nums, k);
    if(validSum == 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}