#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, result;
    
    printf("Armstrong numbers between 1 and 1000:\n");

    for(num = 1; num <= 1000; num++) {
        result = 0;
        originalNum = num;

        // count number of digits
        int n = 0;
        while (originalNum != 0) {
            n++;
            originalNum /= 10;
        }

        originalNum = num;

        // check if num is Armstrong
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += pow(remainder, n);
            originalNum /= 10;
        }

        if (result == num) {
            printf("%d ", num);
        }
    }
return 0;
}