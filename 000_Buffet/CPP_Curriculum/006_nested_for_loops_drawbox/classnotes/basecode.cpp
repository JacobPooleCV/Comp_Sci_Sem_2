// base code file
#include "./hfiles/poole.h"
#include <thread>

///////////////////////////////////////////////////////////////////////

main(){
	srand(time(NULL));
	
	char sym;
	cout << "input a snowflake: ";
	cin >> sym;
	for(int i = 0; i < 5; i++){	
		gotoxy(10,7+i);
		cout << sym << endl;
		sleep(1);
		gotoxy(10,7+i);
		cout << ' ' << endl;
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	// write code here
	//cout<<"yeah we are starting c++"<<endl;
	
	//	*****
	//	*****
	//	*****
	
	// for(int i = 0; i < 4; i++){
	// 	gotoxy(7-i,5+i);
	// 	cout << "$" << endl;
	// }
	
	
	
	// for(int i = 1; i < 4; i++){
	// 	for(int j = 1; j < 6; j++){
	// 		if(j%2==0){
	// 			cout << "*";
	// 		}
	// 		else{
	// 			cout << "$";
	// 		}
	// 	}
	// 	cout << endl;
	// }
	
	// gotoxy(20,20);
	
	
	// int z = 7;
	// for(int j = 0; j < 35; j+=5){
	// 	cout << j-z;
	// 	z--;
	// }
	
}
