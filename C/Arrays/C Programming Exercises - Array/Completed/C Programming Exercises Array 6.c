/**
 * Aviable on https://www.w3resource.com/c-programming-exercises/array/index.php
 * Date: 12/31/2019
 * Author: @filypsdias
 * Github: https://github.com/filypsdias
 */

#include <stdio.h>

int main() {

    int array[3], count;
    count = 0;

    for(int i = 0; i < 3; i++) {
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i != j) {
                if(array[i] == array[j]) {
                    count++;
                }
            }
        }

        if(count == 0) {
            printf("%d ", array[i]);
        } else {
            count = 0;
        }
    }

    return 0;
}
