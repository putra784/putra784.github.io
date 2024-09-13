#include <stdio.h>

void tukar(int *a, int *b){
    int temp = *a;
    *a= *b;
    *b = temp;
}
void bubbleSort(int arr[], int n){
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-i-1; j++){
            if (arr[j] > arr [j+1]) {
                tukar(&arr[j], &arr[j+1]);
            }
        }
    }
} 
int main() {
    int n, i;
    scanf("%d", &n);
    
    int nilai[n];
    for (i = 0; i < n; i++){
        scanf("%d", &nilai[i]);
    }
    bubbleSort(nilai, n);
    for (i = 0; i < n; i++){
        printf("%d\n", nilai[i]);
    }
    
    return 0;
}