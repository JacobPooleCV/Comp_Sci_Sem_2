// base code file
#include "./hfiles/poole.h"

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	// gotoxy(3,5);
	// cout << '@';
	// gotoxy(3+1,5);
	// cout << 'R';
	// gotoxy(3+2,5);
	// cout << 'M';
	// gotoxy(3+3,5);
	// cout << 'A';
	// gotoxy(3+4,5);
	// cout << 'N';
	
	// gotoxy(3,5+1);
	// cout << 'n';
	// gotoxy(3,5+2);
	// cout << 'D';
	// gotoxy(3,5+3);
	// cout << 'r';
	// gotoxy(3,5+4);
	// cout << 'E';
	// gotoxy(3,5+5);
	// cout << 'w';
	
	// for(int i = 0; i < 6; i++){
	// 	gotoxy(3+i,5+i);
	// 	cout << 'N';
	// }
	
	
	
	
	// int swift = 35;
	// for(int taylor = 1; taylor != swift; taylor = taylor + 3)
	
	// int zoe = 7;
	// for(int joe = 0; joe < 35; joe = joe + 5){
	//   cout << joe - zoe;
	//   zoe = zoe - 1;
	// } 

	
	// gotoxy(3,5);
	// cout << "c";
	// gotoxy(4,5);
	// cout << "h";
	// gotoxy(6,4);
	// cout << "i";
	// gotoxy(5,6);
	// cout << "c";
	// gotoxy(5,5);
	// cout << "k";
	// gotoxy(5,4);
	// cout << "e";
	// gotoxy(6,4);
	// cout << "n";
	
	char potato;
	while(true){
		cin >> potato;
		if(potato == 'a'){
			cout << 'a';
		}
		else{
			cout << 'b';
		}
		if(potato == 'j'){
			cout << 'j';
		}
		else if(potato == 't'){
			cout << 't';
		}
		else{
			cout << 'r';
		}
		
		if(potato == 'q'){
			break;
		}
	}
	
	
	
}
