#include<stdio.h>

// int add(int a, int b);
// int sub(int a, int b);

// int sum = 0, diff = 0;

// void main(){
//     int res1, res2;
//     res1 = add(12,20);
//     res2 = sub(20, 10);
//     printf("Addition: %d\n", res1);
//     printf("Subtraction: %d\n", res2);
// }

// int add(int a, int b){
//     int x;
//     x = a + b;
//     return x;
// }
// int sub(int a, int b){
//     int y;
//     y = a - b;
//     return y;
// }

// int square(int a){
//     int z;
//     z = a * a;
//     return z;
// }

// void main(){
//     int res;
//     int a[10], i, n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     printf("Enter the elements: ");
//     for(i=0; i<n; i++){
//         scanf("%d", &a[i]);
//     }
//     for(i=0; i<n; i++){
//         res = square(a[i]);
//         printf("Square of %d is %d\n", a[i], res);
//     }
// }

int main(){
    int a[20], n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    binarySearch(a,n);
}

void binarySearch(int a[], int n){
    int i, j, temp;
    for(i=0; i<n; i++){
        for(j=0; j<n-i-1; j++){
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    int key, low, high, mid;
    printf("Enter the element to be searched: ");
    scanf("%d", &key);
    low = 0;
    high = n-1;
    while(low <= high){
        mid = (low + high) / 2;
        if(a[mid] == key){
            printf("Element found at position %d\n", mid+1);
            break;
        }
        else if(a[mid] < key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if(low > high){
        printf("Element not found\n");
    }
}