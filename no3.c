#include <stdio.h>

int main(){
	int baris, kolom, n, m;
	scanf("%d", &n);
	int nilai = (n+(n-1));
	
	for(baris=1; baris<=n; baris++){
		for(kolom=1; kolom<baris; kolom++){
			printf("%d", kolom);
			m = kolom;
		}
		
		if(baris != 1){
			for(kolom=1; kolom<=nilai; kolom++){
				printf(" ");
			}			
		}
		
		for(kolom=1; kolom<baris; kolom++){
			printf("%d", m);
			m--;
		}
		
		nilai = nilai-2;
		printf("\n");
	}
	
	for(baris=0; baris<=n; baris++){
		if(baris == n) {
			for(kolom=1; kolom<=baris; kolom++){
				printf("%d", kolom);
			}	
			for(kolom=n-1; kolom>0; kolom--){
				printf("%d", kolom);
			}			
		printf("\n");
		}
	}
	
	nilai = 1;
	for(baris=1; baris<n; baris++){
		for(kolom=1; kolom<=n-baris; kolom++){
			printf("%d", kolom);
			m = kolom;
		}
		
		for(kolom=1; kolom<=nilai; kolom++){
			printf(" ");
		}			
		
		for(kolom=1; kolom<=n-baris; kolom++){
			printf("%d", m);
			m--;
		}
		
		nilai = nilai+2;
		printf("\n");
	}
	
	return 0;
}