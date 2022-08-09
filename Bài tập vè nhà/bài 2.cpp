#include <stdio.h>
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    int i=n;
    while (i<=n) {
        if(i%6 == 0) {
            printf ("Dap an la ");
            printf ("%d",i);break;
        }
        i--;
    }
}
