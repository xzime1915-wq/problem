#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int first=n/10;
    int last=n % 10;


    if(last % first==0 || first % last ==0   ){
        printf("YES");
    }
    else if(first==0 || last==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}