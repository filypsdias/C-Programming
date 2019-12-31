/**
 * Aviable on https://www.w3resource.com/c-programming-exercises/array/index.php
 * Date: 12/31/2019
 * Author: @filypsdias
 * Github: https://github.com/filypsdias
 */

#include<stdio.h>
#define LENGTH 3

int arraySum(int *array) {
    
    int sum = 0;
    
    for(int i = 0; i < LENGTH; i++) {
        sum += array[i];
    }

    return sum;
    
}

int main() {

    int array[LENGTH];
    for(int i = 0; i < LENGTH; i++) {
        scanf("%d", &array[i]);
    }

    printf("%d\n", arraySum(array));

    return 0;

}