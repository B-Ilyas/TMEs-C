#include <assert.h>
#include <cini.h>

int position( int a , int b , int x , int y ){
	if (y > a*x + b ) {
		return -1; 
	} if (y < a*x + b ) {
		return 1; 
	}
	return 0;
}

void affiche(int a , int b , int h , int l){
	CINI_open_window(h , l , "position");
	if (position(a,b,h,l) == 1){
		CINI_draw_pixel( a , b , " red");
	}if (position(a,b,h,l) == 0){
		CINI_draw_pixel( a , b , " black");
	} if (position(a,b,h,l) == -1){
		CINI_draw_pixel( a , b , " blue");
	}
	CINI_loop() 
}

int main(){
	
	return 0;
}
