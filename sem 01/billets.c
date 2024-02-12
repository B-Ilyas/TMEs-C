#include <stdio.h>

#define Tadulte 22.7
#define Tenfant 10.75
#define Tfamille 57.80

float prixEntree ( int nba , int nbe){
	float res = nba*Tadulte + nbe*Tenfant ;
	if ((res >= Tfamille) && (nbe <= 3) && (nba<=2){
		return Tfamille ;
	} else {
		return res;
	}
	return res		
}

int main(){
	printf("%.2f \n" , prixEntree(2,3));
	printf("%.2f \n" , prixEntree(2,2)); 
	printf("%.2f \n" , prixEntree(2,1)); 
	printf("%.2f \n" , prixEntree(1,3));
	printf("%.2f \n" , prixEntree(6,3));
	printf("%.2f \n" , prixEntree(1,3)); 
	return 0;
}
