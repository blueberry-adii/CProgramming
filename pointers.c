#include <stdio.h>
#include <math.h>

void calculateStatistics(int *arr, int n, double *sum, double *mean, double *variance, double *std_dev) {
    int i;
    *sum = 0.0;
    for (i = 0; i < n; i++) {
        *sum += arr[i];
    }
    *mean = *sum / n;

    *variance = 0.0;
    for (i = 0; i < n; i++) {
        *variance += pow(arr[i] - *mean, 2);
    }
    *variance /= n;
    *std_dev = sqrt(*variance);
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    double sum, mean, variance, std_dev;
    calculateStatistics(arr, n, &sum, &mean, &variance, &std_dev);

    printf("Sum: %.2f\n", sum);
    printf("Mean: %.2f\n", mean);
    printf("Variance: %.2f\n", variance);
    printf("Standard Deviation: %.2f\n", std_dev);

    return 0;
}