#include <assert.h>

int signeProduit ( int a , int b) {
	if (a == 0 || b ==0) {
		return 0;
	}
	if (((a<0) && (b>0)) || ((a>0)&&(b<0))) {
		return -1;
	}
	return 1;
}

int main(){
	assert(signeProduit(0,1)==0);
	assert(signeProduit(5,0)==0);
	assert(signeProduit(-5,6)==-1);
	assert(signeProduit(3,-8)==-1);
	assert(signeProduit(7,2)==1);
	assert(signeProduit(-3,-5)==1);
	return 0;
}
