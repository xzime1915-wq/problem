#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int pos;
    for(int i=0; i<=n; i++){
        scanf("%d", &a[i]);
        pos=i;
    }
    

    for(int i=n-1; i>=0; i--){
        if(a[i]%2==1){
            printf("%d", i);
        }
    }
    return 0;
}