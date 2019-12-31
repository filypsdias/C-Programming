/**
 * Aviable on https://www.w3resource.com/c-programming-exercises/array/index.php
 * Date: 12/31/2019
 * Author: @filypsdias
 * Github: https://github.com/filypsdias
 */

#include<stdio.h>
#define LENGTH 3

int countDuplicates(int *array) {

    int count = 0;
    for(int i = 0; i < LENGTH - 1; i++) {
        for(int j = 1; j < LENGTH; j++) {
            if(array[i] == array[j]) {
                count++;
            }

            if(i >= j) {
                break;
            }
        }
    }

    return count;

}

int main() {

    int vec[LENGTH];
    for(int i = 0; i < LENGTH; i++) {
        scanf("%d", &vec[i]);
    }

    printf("%d\n", countDuplicates(vec));

    return 0;
}