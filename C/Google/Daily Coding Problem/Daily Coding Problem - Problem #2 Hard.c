/**
 * Date: 01/01/2020
 * Author: @filypsdias
 * Github: https://github.com/filypsdias
 *
 * Given an array of integers, return a new array such that each element at index i of the new array
   is the product of all the numbers in the original array except the one at i.
   For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. 
   If our input was [3, 2, 1], the expected output would be [2, 3, 6].
 *
 */


#include<stdio.h>
#define LENGTH 4

int main() {

    int array[LENGTH];
    for(int i = 0; i < LENGTH; i++) {
        scanf("%d", &array[i]);
    }

    int productsArray[LENGTH];
    int product = 1;

    for(int i = 0; i < LENGTH; i++) {
        for(int j = 0; j < LENGTH; j++) {
            if(j != i) {
                product *= array[j];
                productsArray[i] = product;
            }
        }
        product = 1;
    }

    for(int i = 0; i < LENGTH; i++) {
        printf("%d ", productsArray[i]);
    }

    printf("\n");
    
    return 0;
}