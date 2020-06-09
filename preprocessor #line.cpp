#include <stdio.h>
int main(){
	printf("Hello world\n");
	printf("Line: %d\n",__LINE__);

	#line 23
	printf("Line : %d\n",__LINE__);	
	printf("Terima Kasih !\n");	
}
