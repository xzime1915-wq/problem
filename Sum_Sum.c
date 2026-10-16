#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        
    }
    
    int sum_of_pos=0;
    int sum_of_neg=0;
    for(int i=0; i<n; i++){
        if(a[i]>0){
            sum_of_pos= sum_of_pos+a[i];
        }
        else if (a[i]<0){
            sum_of_neg= sum_of_neg+a[i];
        }
        
    }
    printf("%d %d", sum_of_pos, sum_of_neg);

    
    return 0;
}