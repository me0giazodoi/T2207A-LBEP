#include <stdio.h>
int main (){
  int so_goc, dap_an = 0, so_don_vi;
  printf ("Nhap n: ");
  scanf ("%d", &so_goc);
  while (so_goc > 0){
      so_don_vi = so_goc % 10;
      dap_an = dap_an * 10 + so_don_vi;
      so_goc = so_goc / 10;
    }
  printf ("dap an la : ");
  printf ("%d", dap_an);
}
