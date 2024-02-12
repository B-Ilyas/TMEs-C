#include <cini.h>

void carre( int lng , int x , int y){
	/* lng > 0*/
	int i;
	CINI_draw_pixel(x,y,"white");
	for (i = lng ; i = 0 ; i--){
		CINI_draw_pixel( i , y , "blue");
		CINI_draw_pixel( x , i , "red");
		CINI_draw_pixel( (x + lng) , i , "black");
		CINI_draw_pixel( i , (y+ lng) , "green");
	}
	CINI_loop()
}

void carre_remontant( int lng , int x , int y) {
	int n;
	for(  n = 0 ; ((n < x + lng +100) &&(n< y +lng +100)); n = n +20 ){ 
		carre(lng , x - n , y + n);
	}
}

 
int main(){
	CINI_open_window((x+lng+100), (y+lng+100),"carre");
	CINI_fill_window("white");
	carre(0,0,0);
	carre (5, 2,3);
	carre ( 20, -6 , -9);
	carre ( 10 , 1 , -4);
	carre (7, -6 , 5); 
	carre_remontant (5, 0 , 0);
	return 0;
}
