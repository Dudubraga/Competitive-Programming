#include <stdio.h>

int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    int Q = A / B, R = A % B;
    if(R < 0 && B > 0){ Q -= 1; R += B; }
    else if(R < 0 && B < 0){ Q += 1; R = A - B * Q; }
    printf("%d %d\n", Q, R);

    return 0;
}

