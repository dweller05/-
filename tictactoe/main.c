#include <stdio.h>
#include <stdbool.h>

char board[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
bool x = false;
int pos,input,ginput;

int main(){
	printf("Rules\nPlayer1 plays first.\nPlayer1 gets to choose which character to use.\n");
	while (x == false){
		printf("Player1 insert: ");
		scanf("%d %c", &pos, &input);
		checkKey();
		
		//if(input != 'o' && input != 'x'){
			//printf("invalid input!")
		//}
		
		printResult();
		
		printf("Player2 insert: ");
		scanf("%d %c", &pos, &input);
		checkKey();
		
		printResult();
		//scanf("%s", &ginput);
		//if (ginput=="gg"){
		//	break;
		//}
		//check if game over.
		//int i,j;
		//for(i=0;i<3;i++){
		//	for(j=0;j<3;j++){
		//		if (board[i][j] != ' '){
		//			if((board[i][j]==board[i+1][i+1] && board[i][j]==board[i+2][j+2] && board[i+1][j+1]==board[i+2][j+2]) ||
		//			   (board[i][j+2]==board[i+1][j+1] && board[i][j+2]==board[i+2][j] && board[i+1][j+1]==board[i+2][j]))
		//			{
		//				break;
		//				
		//			}else if((board[i][j]==board[i][j+1] && board[i][j]==board[i][j+2] && board[i][j+1]==board[i][j+2]) ||
		//			         (board[i+1][j]==board[i+1][j+1] && board[i+1][j]==board[i+1][j+2] && board[i+1][j+1]==board[i+1][j+2]) ||
		//					 (board[i+2][j]==board[i+2][j] && board[i+2][j]==board[i+2][j+2] && board[i+2][j+1]==board[i+2][j+2]))
		//			{
		//				break;
		//						 	
		//			}else if((board[i][j]==board[i+1][j] && board[i][j]==board[i+2][j] && board[i+1][j]==board[i+2][j]) ||
		//			         (board[i][j+1]==board[i+1][j+1] && board[i][j+1]==board[j+2][j+1] && board[i+1][j+1]==board[i+2][j+1]) ||
		//					 (board[i][j+2]==board[i+1][j+2] && board[i][j+2]==board[j+2][j+2] && board[i+1][j+2]==board[i+2][j+2]))
		//			{
		//				break;
		//			}
		//		}	
		//	}
		//}	
	}
	printf("Game over");
	
}

int checkKey(){
	if(pos==1 && board[0][0]==' '){
		board[0][0] = input;
		
	}else if(pos==2 && board[0][1]==' '){
		board[0][1] = input;
		
	}else if(pos==3 && board[0][2]==' '){
		board[0][2] = input;
		
	}else if(pos==4 && board[1][0]==' '){
		board[1][0] = input;
		
	}else if(pos==5 && board[1][1]==' '){
		board[1][1] = input;
		
	}else if(pos==6 && board[1][2]==' '){
		board[1][2] = input;
		
	}else if(pos==7 && board[2][0]==' '){
		board[2][0] = input;
		
	}else if(pos==8 && board[2][1]==' '){
		board[2][1] = input;
		
	}else if(pos==9 && board[2][2]==' '){
		board[2][2] = input;
	}
}

int printResult(){
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%c ", board[i][j]);
		}	
		printf("\n");
	}
}


