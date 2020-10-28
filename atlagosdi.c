
#include <stdio.h>

int main(){
	int szam, osszeg = 0, hossz = 0;

	while(1){
		scanf("%d", &szam);
		if(szam == 0){
			break;
		}

		osszeg += szam;
		hossz++;
	}

	printf("Az atlag: %.2f\n", (float)(osszeg) / hossz);

	return 0;
}