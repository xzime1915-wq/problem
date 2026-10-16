#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int x;
    int y;
    int odd=0;
    for(int i= 1; i<=n; i++){
        scanf("%d %d", &x, &y);
        if(x>y){
            for(int j = x-1; j>y; j--){
                if(j%2==1){
                    odd+=j;
                }
            }
        }
        else if(x<y){
            for(int k = x+1; k<y; k++){
                if(k%2==1){
                    odd+=k;

                }
            }
        }
        
        printf("%d\n", odd);
        odd=0;
    }
    return 0;
}