#include <cini.h>
#include <stdio.h>

void triangles(int l , int L){
	CINI_open_window(l, L,"triangles");
	CINI_draw_line(0, L , l , L ,"red");
	CINI_draw_line(0, L, l/2 ,0 ,"blue");
	CINI_draw_line(l/2, 0 , l , L ,"green");
	CINI_draw_line(0, L , l , L ,"red");
	CINI_draw_line(0, L, l/2 ,0 ,"blue");
	CINI_draw_line(l/2, 0 , l , L ,"green");
}

int main(){
	triangles(10,10);
	return 0;
}
