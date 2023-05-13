#include <stdio.h>
#include <math.h>

// Function to convert decimal to binary
long decimalToBinary(int decimalNumber) {
   long binaryNumber = 0;
   int remainder, i = 1;

   while (decimalNumber != 0) {
      remainder = decimalNumber % 2;
      decimalNumber /= 2;
      binaryNumber += remainder * i;
      i *= 10;
   }

   return binaryNumber;
}

// Function to convert binary to decimal
int binaryToDecimal(long binaryNumber) {
   int decimalNumber = 0, i = 0, remainder;

   while (binaryNumber != 0) {
      remainder = binaryNumber % 10;
      binaryNumber /= 10;
      decimalNumber += remainder * pow(2, i);
      i++;
   }

   return decimalNumber;
}

int main() {
   int decimalNumber;
   long binaryNumber;

   printf("Enter a decimal number: ");
   scanf("%d", &decimalNumber);

   binaryNumber = decimalToBinary(decimalNumber);
   printf("Binary number is: %ld\n", binaryNumber);

   printf("Enter a binary number: ");
   scanf("%ld", &binaryNumber);

   decimalNumber = binaryToDecimal(binaryNumber);
   printf("Decimal number is: %d\n", decimalNumber);

   return 0;
}
