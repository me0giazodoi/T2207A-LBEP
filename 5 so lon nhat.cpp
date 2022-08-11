#include <stdio.h>
int main (){
	int so_goc, so_don_vi, so_lon_nhat = 0;
	printf ("Nhap n=");
	scanf ("%d", &so_goc);
	while (so_goc > 0){
		so_don_vi = so_goc % 10;
    	so_goc = so_goc / 10;
    	if (so_lon_nhat < so_don_vi) {
        	so_lon_nhat = so_don_vi;
      }
    }
	printf ("so lon nhat la %d",so_lon_nhat);
}
