#include <stdio.h>

int main(){
	int baris, kolom, n;
	scanf("%d", &n);
	int nilai = (n+(n-1));
	
	for(baris=1; baris<=n; baris++){
		if(baris != 1){
			for(kolom=0; kolom<baris-1; kolom++){
				printf(" ");
			}			
		}
		
		for(kolom=1; kolom<=nilai; kolom++){
			if(kolom%2==1){
				printf("*");
			}else{
				printf(" ");
			}
		}
		
		nilai = nilai-2;
		printf("\n");
	}
	
	for(baris=1; baris<=n-1; baris++){
		for(kolom=n-2; kolom>=baris; kolom--){
			printf(" ");
		}
		
		if(baris == 1){
			nilai = 3;
		}
		
		for(kolom=1; kolom<=nilai; kolom++){
			if(kolom%2==1){
				printf("*");
			}else{
				printf(" ");
			}
		}
		nilai = nilai+2;
		printf("\n");
	}
	
	
	
	return 0;
}