#include <assert.h>
#include <stdio.h>
#include <math.h>

int discriminant(int a , int b , int c){
return b*b - 4*a*c ;
}

int afficheRacines( int a , int b , int c){
	if (discriminant(a,b,c) < 0){
		printf("Le polynome n'a pas de racine \n");
		}
	if (discriminant(a,b,c) == 0){
		printf("Le polynome possède une racine double %f \n" , -b/(2*a));
		}
	if (discriminant(a,b,c) > 0){
		printf("Le polynome possède 2 racines : %f et %f \n" , ((-b)-(sqrt(discriminant(a,b,c))))/(2*a)), ((-b)+(sqrt(discriminant(a,b,c))))/(2*a));
		}
	return 0;
		}

int main(){
assert (discriminant(4,4,1) == 0);
assert (discriminant(4,6,1)==20);
assert (discriminant(-7,-5,-1) == -3);
assert (afficheRacines(4,4,1) == 0);
assert (afficheRacines(4,6,1) == 0);
assert (afficheRacines(-7,-5,-1) == 0);
return 0;
}


