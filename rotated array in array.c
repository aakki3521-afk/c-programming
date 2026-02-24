int main() {
    int n, k;

    
    printf("Enter N (size of array): ");
    scanf("%d", &n);

    int shift_array;


    printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &shift_array[i]);
    }

    // Input K
    printf("Enter K (number of rotations): ");
    scanf("%d", &k);

    // Perform rotation
    rotate_left(shift_array, n, k);

    // Output Rotated array
    printf("Rotated array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", shift_array[i]);
    }
    printf("\n");

    return 0;
}