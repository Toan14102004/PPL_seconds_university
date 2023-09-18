//#include <stdio.h>
//
//void printSubset(int subset[], int subsetSize) {
//    for (int i = 0; i < subsetSize; i++) {
//        printf("%d ", subset[i]);
//    }
//    printf("\n");
//}
//
//void generateSubsets(int X[], int n, int k, int subset[], int subsetSize, int index) {
//    if (subsetSize == k) {
//        printSubset(subset, k);
//        return;
//    }
//
//    if (index >= n) {
//        return;
//    }
//
//    subset[subsetSize] = X[index];
//
//    generateSubsets(X, n, k, subset, subsetSize + 1, index + 1);
//
//    generateSubsets(X, n, k, subset, subsetSize, index + 1);
//}
//
//int main() {
//    int n, k;
//    printf("Enter the value of n: ");
//    scanf("%d", &n);
//    printf("Enter the value of k: ");
//    scanf("%d", &k);
//
//    int X[n];
//    for (int i = 0; i < n; i++) {
//        X[i] = i + 1;
//    }
//
//    int subset[k];
//    generateSubsets(X, n, k, subset, 0, 0);
//
//    return 0;
//}
//
