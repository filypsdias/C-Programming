/**
 * Aviable on https://www.w3resource.com/c-programming-exercises/array/index.php
 * Date: 12/31/2019
 * Author: @filypsdias
 * Github: https://github.com/filypsdias
 */

#include <stdio.h>
#define LENGTH 10

int main() {

    int array[LENGTH];
    for(int i = 0; i < LENGTH; i++) {
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < LENGTH; i++) {
        if(i != LENGTH - 1) {
            printf("%d ", array[i]);
        } else {
            printf("%d\n", array[i]);
        }
    }    

    return 0;
}