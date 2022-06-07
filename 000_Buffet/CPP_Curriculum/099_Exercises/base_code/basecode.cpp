// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	//framed box
	
	int x = 3;
	int y = 11;
	while(true){
		if(x == y)
			break;
		cout << x << " " << y << " " << y-x << endl;
		x++;
		y--;
	}
	
	cout << endl << endl;
	
	for(int a = 0; a < 12; a+=2){
		cout << a << " " << a+3 << endl;
	}
	
}
