/**
 * Aviable on https://www.w3resource.com/c-programming-exercises/array/index.php
 * Date: 12/31/2019
 * Author: @filypsdias
 * Github: https://github.com/filypsdias
 */

#include<stdio.h>
#define LENGTH 3

int main() {

    int array[LENGTH], scn[LENGTH];
    for(int i = 0; i < LENGTH; i++) {
        scanf("%d", &array[i]);
    }

    for(int i = 0; i < LENGTH; i++) {
        scn[i] = array[i];
    }

    return 0;
}