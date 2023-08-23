#include <stdio.h>
#include <time.h>

int buscaBinaria(int arr[], int key, int leftIndex, int rightIndex) {
  int midIndex = leftIndex + (rightIndex - leftIndex) / 2;
  if(leftIndex > rightIndex) return -1;
  if(key == arr[midIndex]) return midIndex;
  if(key < arr[midIndex]) {
    return buscaBinaria(arr, key, leftIndex, midIndex - 1);
  } else {
    return buscaBinaria(arr, key, midIndex + 1, rightIndex);
  }
}

int main() {
  clock_t start, end;
  start = clock();
  int sorted[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                  11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                  21, 22, 23, 24, 25, 26, 27, 28, 29, 30,
                  31, 32, 33, 34, 35, 36, 37, 38, 39, 40,
                  41, 42, 43, 44, 45, 46, 47, 48, 49, 50,
                  51, 52, 53, 54, 55, 56, 57, 58, 59, 60,
                  61, 62, 63, 64, 65, 66, 67, 68, 69, 70,
                  71, 72, 73, 74, 75, 76, 77, 78, 79, 80,
                  81, 82, 83, 84, 85, 86, 87, 88, 89, 90,
                  91, 92, 93, 94, 95, 96, 97, 98, 99};

  int key;
  printf("Key Value\n");
  scanf("%d", &key);

  printf("found in sorted[%d]", buscaBinaria(sorted, key, 0, 99));

  end = clock();
  printf("\n\nTempo: %5.2f seg.\n", ((double)(end - start)) / CLOCKS_PER_SEC);
  return 0;
}
