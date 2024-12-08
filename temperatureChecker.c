// Coding Exercise by Karen Kim Tan (KKGT)

#include <stdio.h>
#define MAX 100

void populateArray(float*, int);
void displayArray(float*, int);
float computeAverageTemp(float*, int);
int findHighestTemp(float*, int);
int findLowestTemp(float*, int);

int main() {

    int numberOfDays;
    printf("Enter the number of days to analyze(up to 365 days): ");
    scanf("%d", &numberOfDays);

    if (numberOfDays > 0 && numberOfDays < 365) {

        float array[MAX];
        float* pArray = array;

        populateArray(pArray, numberOfDays);

        displayArray(pArray, numberOfDays);

        printf("\nAverage Temperature: %.2f", computeAverageTemp(pArray, numberOfDays));

        int highestIndex = findHighestTemp(pArray, numberOfDays);
        printf("\nHighest Temperature: %.2f (Day %d)", *(pArray+highestIndex), highestIndex+1);

        int lowestIndex = findLowestTemp(pArray, numberOfDays);
        printf("\nLowest Temperature: %.2f (Day %d)", *(pArray+lowestIndex), lowestIndex+1);

    } else {
        printf("Invalid Input!");
    }
    
    return 0;
}

void populateArray(float* pArray, int numberOfDays) {
    printf("Enter the temperatures for %d days:\n", numberOfDays);
    for(int i = 0; i < numberOfDays; i++) {
        printf("Day %d: ", i+1);
        scanf("%f", pArray+i);
    }
}

void displayArray(float* pArray, int numberOfDays) {

    printf("\nDaily Temperatures:\n");
    for(int i = 0; i < numberOfDays; i++) {
        printf("Day %d: %.2f\n", i+1, *(pArray+i));
    }
}

float computeAverageTemp(float* pArray, int numberOfDays) {
    float sum = 0;
    for(int i = 0; i < numberOfDays; i++) {
        sum += *(pArray+i);
    }

    return sum/numberOfDays;
}

int findHighestTemp(float* pArray, int numberOfDays) {
    float highest = *pArray;

    for(int i = 0; i < numberOfDays; i++) {
        if (*(pArray+i) > highest) {
            highest = *(pArray+i);
        }
    }
    int i = 0;
    for(; i < numberOfDays; i++) {
        if (*(pArray+i) == highest) {
            break;
        }
    }

    return i;
}

int findLowestTemp(float* pArray, int numberOfDays) {
    float lowest = *pArray;

    for(int i = 0; i < numberOfDays; i++) {
        if (*(pArray+i) < lowest) {
            lowest = *(pArray+i);
        }
    }
    int i = 0;
    for(; i < numberOfDays; i++) {
        if (*(pArray+i) == lowest) {
            break;
        }
    }

    return i;
}