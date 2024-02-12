#include <stdio.h>
#include <math.h>
#include <assert.h>

int discriminant(int a , int b , int c){
	return b*b - 4*a*c ;
}

void afficheRacines(int a, int b, int c) {
	if (discriminant(a,b,c) < 0){
		printf("Pas de racine reelle\n");
	}
	if (discriminant(a,b,c) == 0){
		printf("La racine double est %.2f \n" , (-b+sqrt(discriminant(a,b,c)))/(2*a));
	}
	if (discriminant(a,b,c) > 0){
		printf("Les deux racines sont %.2f et %.2f  \n" ,(-b+sqrt(discriminant(a,b,c)))/(2*a) , (-b-sqrt(discriminant(a,b,c)))/(2*a));
	}
}

int main(){
	afficheRacines(4,4,1); //Teste l'affichage d'une fct
	afficheRacines(4,6,1);
	afficheRacines(-7,-5,-1);
	return 0;
}
