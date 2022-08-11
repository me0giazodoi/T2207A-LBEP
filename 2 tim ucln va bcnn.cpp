#include <stdio.h>

int main()
{
    int a;
    int b;
    int so_nho;
    int so_lon;
    int ucln;
    int bcnn;
    
    printf("Nhap a=");
	scanf("%d",&a);
	
	printf("Nhap b=");
	scanf("%d",&b);
    
    if (a<b) {
        so_nho = a;
        so_lon = b;
    } else {
        so_nho = a;
        so_lon = b;
    }
    
    if (so_lon%so_nho == 0) {
            ucln = so_nho;
        } else {
            for (int i=2; i < so_nho; i++) {
                if (so_lon%i ==0 && so_nho%i == 0) {
                    ucln = i;
                }
            }
        }
        printf("UCLN la %d ", ucln);
        
    if (so_lon%so_nho == 0) {
    		bcnn = so_lon;
		}else{
			for (int i=so_lon*so_nho; i>=so_lon; i--) {
				if (i%so_lon ==0 && i%so_nho ==0) {
					bcnn = i;
				}
			}
		}
		printf("BCNN la %d ", bcnn);
}
