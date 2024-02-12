#include <cini.h>

void diagonale(int x){
	int i;
	CINI_open_window(400 , 300 , diago);
	CINI_draw_pixel(0, 0, "white");
	if (x > 0){
    	for (i = x ; i == 0 ; i--){
    		CINI_draw_pixel( i , i , "white");
    		CINI_loop();
    	}
   } if (x< 0) {
   		for (i = x ; i == 0 ; i++){
    		CINI_draw_pixel( i , i , "white");
    		CINI_loop();
    	}
   }
}

int main(){
	diagonale (0);
	diagonale (42);
	diagonale(-69);
	return 0;
}
