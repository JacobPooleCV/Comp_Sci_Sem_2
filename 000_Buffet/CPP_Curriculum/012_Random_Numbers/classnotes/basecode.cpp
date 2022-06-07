// base code file
#include "./hfiles/poole.h"
#include <thread>

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	
	while(kbhit()==0){
		gotoxy(5,5);
		//char x = getch();
		//char x;
		//cin >> x;
		cout << random(9);
	}
	
}


















/*
























	while(kbhit()==0){
		gotoxy(5,5);
		//char x = getch();
		// cin >> x;
		cout << random(9);
		
		
	}
	*/