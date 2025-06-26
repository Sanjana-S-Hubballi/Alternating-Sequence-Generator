#include <stdio.h>

int contains7(int num) {
    while (num > 0) {            // Loops through each digit of the number
        if (num % 10 == 7)       // Check if the last digit is 7
            return 1;            // If yes, return true (1)
        num /= 10;               // Remove the last digit and continue
    }
    return 0;                    // Return false (0) if no digit is 7
}

int altSeq(int n) {
    int value = 1;
    int direction = 1;

    for (int i = 2; i <= n; i++) {
        value += direction;                   // Increase or decrease the value based on current direction
        if (i % 7 == 0 || contains7(i)) {     // If current index 'i' is divisible by i or contains the digit 7, 
            direction *= -1;                  // Flip the direction (positive to negative / negative to positive)
        }
    }
    return value;
}

int main() {
    int n;
    printf("Enter the number of terms to generate: ");
    scanf("%d", &n);

    FILE *fptr = fopen("output.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    // Print and write sequence values to output.txt
    for (int i = 1; i <= n; i++) {
        int val = altSeq(i);
        printf("%d: %d\n", i, val);         
        fprintf(fptr, "%d: %d\n", i, val);    
    }

    fclose(fptr); 

    printf("Output saved to output.txt successfully.\n");

    return 0;
}
