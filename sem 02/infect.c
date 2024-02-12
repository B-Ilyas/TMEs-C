#include <stdio.h>
#include <assert.h>

int jours( int ncj , int pt , float i){
	float pi = (pt*i)/100;
	int j = 0;
	int inf;
	inf = 1 ; 
	while(inf <= pi){
        inf = inf + inf * ncj;
        j = j+1;
	}
	return j;
}

float pourcentage ( int ncj , int pt , int je){
	int j = 1;
	int inf = 1 ; 
	while(j <= je){
        inf = inf + inf * ncj;
        j = j+1;
	}
	float r = (inf*1.0/pt)*100;
	if (r > 100){
		return 100;
	}
	return r;
}

