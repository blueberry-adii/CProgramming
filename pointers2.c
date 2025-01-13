#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float sum = 0, mean, variance = 0, std_deviation;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    mean = sum / n;

    for (i = 0; i < n; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    variance /= n;

    std_deviation = sqrt(variance);

    printf("Mean: %.2f\n", mean);
    printf("Variance: %.2f\n", variance);
    printf("Standard Deviation: %.2f\n", std_deviation);

    return 0;
}
