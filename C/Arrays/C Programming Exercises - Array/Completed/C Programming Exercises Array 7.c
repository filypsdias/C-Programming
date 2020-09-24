/**
 * Aviable on https://www.w3resource.com/c-programming-exercises/array/index.php
 * Date: 12/31/2019
 * Author: @filypsdias
 * Github: https://github.com/filypsdias
 */

#include<stdio.h>
#define LENGTH 3

int mergeArrays(int *firstArray, int *secondArray) {
    
    int count = 0;
    int finalVecSize = LENGTH * 2;
    int finalVec[finalVecSize];

    for(int i = 0; i < LENGTH; i++) {
        finalVec[i] = firstArray[i];
        count++;
    }

    for(int i = (count + 1); i < finalVecSize; i++) {
        finalVec[i] = secondArray[i];
    }

    return *finalVec; 
}

void sortArray(int *array) {
    
    int aux;
    int finalVecSize = LENGTH * 2;

    for(int i = 0; i < finalVecSize - 1; i++) {
        for(int j = 0; j < finalVecSize; j++) {
            if(array[i] < array[j]){
                aux = array[i];
                array[i] = array[j];
                array[j] = aux;
            }
        }
    }
}

int main() {

    int firstArray[LENGTH], secondArray[LENGTH];
    int finalVecSize = LENGTH * 2;
    int finalVec[finalVecSize];

    for(int i = 0; i < LENGTH; i++) {
        scanf("%d", &firstArray[i]);
    }

    for(int i = 0; i < LENGTH; i++) {
        scanf("%d", &secondArray[i]);
    }

    *finalVec = mergeArrays(firstArray, secondArray);
    sortArray(finalVec);

    for(int i = 0; i < finalVecSize; i++) {
        printf("%d ", finalVec[i]);
    }
    printf("\n");

    return 0;
}