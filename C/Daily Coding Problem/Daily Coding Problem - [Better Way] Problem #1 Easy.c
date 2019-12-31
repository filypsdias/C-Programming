#include<stdio.h>
#include<stdlib.h>

#define MAX_VALUE 4

int hasPairWithSum(int *nums, int sum) {
    
    int low = 0;
    int hi = MAX_VALUE - 1;

    while(low <= hi) {
        int s = nums[low] + nums[hi];
        if(s == sum) {
            return 0;
        }
        low++;
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
