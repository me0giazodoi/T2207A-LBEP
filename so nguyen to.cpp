#include <stdio.h>
int main (){
	int n;
	printf ("Nhap n: ");
	scanf ("%d", &n);
	if (n==1){
    printf ("%d khong phai la nguyen to ");
    return 0;
    }
	int m = 0;
	for (int i = 2; i <= n; i++) {
		if (i!=n) {
    		if (n % i == 0) {
	        m++;
	    	}
      	}
	}
	if (m == 0) { 
    	printf ("La nguyen to ");
    }else {
    	printf ("ko phai la nguyen to ");
    }
	return n;
}
