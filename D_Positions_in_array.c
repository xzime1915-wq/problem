#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    long long int A[n];
    for(int i = 1; i<n; i++){
        scanf("%lld ", &A[i]);
    }
    for(int i = 0; i<n; i++){
        if(A[i]<=10){
            printf("A[%d] = %lld\n", i, A[i]);
        }
    }
    return 0;
}
