#include <stdio.h>
int main(){
	for(int i=1;i<=5;i++){
		while(i%2==0){
			printf("****\n");
			i++;
		}
		printf("*****\n");
	}
}
