#include <stdio.h>
#include <stdlib.h>

void merge(int a[], int l, int u);
void mergesort(int a[], int l, int mid, int u);
void display_array(int a[], int size);

int main() {
    int size;
    printf("Enter the Number of Elements: ");
    scanf("%d", &size);
    int a[size];
    for (int i = 0; i < size; i++) {
        printf("Enter data: ");
        scanf("%d", &a[i]);
    }
    printf("Before sorting: ");
    display_array(a, size);
    printf("\n");
    merge(a, 0, size - 1);
    printf("After sorting: ");
    display_array(a, size);
    return 0;
}

void merge(int a[], int l, int u) {
    int mid;
    if (l < u) {
        mid = l + (u - l) / 2;
        merge(a, l, mid);
        merge(a, mid + 1, u);
        mergesort(a, l, mid, u);
    }
}

void mergesort(int a[], int l, int mid, int u) {
    int n1 = mid - l + 1;
    int n2 = u - mid;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = a[mid + 1 + j];

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            a[k] = L[i];
            i++;
        } else {
            a[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        a[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        a[k] = R[j];
        j++;
        k++;
    }
}

void display_array(int a[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");
}
