#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); 
    long long int a[n];
    for(int i = 0; i<n; i++){
        scanf("%lld ", &a[i]);
    }
    int x;
    scanf("%d", &x);
    int count=0;
    for(int i = 0; i<n; i++){
        if(a[i]==x){
            count=count+1;
            printf("%d", i);
            break;
        }
    }
    if(count==0){
        printf("-1");
    }


    

    return 0;
}
