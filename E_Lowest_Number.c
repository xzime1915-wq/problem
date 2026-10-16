#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    long long int min = INT_MAX;
    int i;

    scanf("%d", &n); 
    long long int A[n];
    for(i = 1; i<n; i++){
        scanf("%lld ", &A[i]);
    }
    int position;
    for(i = 1; i<n; i++){
        if(A[i]< min ){
            min=A[i];
            position= i;

        }
    }
    printf("%lld %d", min, position);
    
    
    return 0;
}
