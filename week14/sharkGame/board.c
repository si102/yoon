//
//  board.c :각 칸의 상태(파손여부, 동전 등), 상어의 상태 
//  sharkGame
//

#include "board.h" //사용자 정의 헤더파일 

// ----- EX. 3 : board ------------		:기본 값 
#define N_COINPOS       12
#define MAX_COIN        4
// ----- EX. 3 : board ------------
// ----- EX. 5 : shark ------------		:한번에 최대이동 수, 현재 위치 
#define MAX_SHARKSTEP   6
#define SHARK_INITPOS   -4
// ----- EX. 5 : shark ------------
// ----- EX. 3 : board ------------		:1차 배열 보드 선언 20칸 
static int board_coin[N_BOARD];  
static int board_status[N_BOARD]; //0 - OK, 1 - destroyed 	:배열 현재 상태 
// ----- EX. 3 : board ------------		:상어 위치 변수 선언 


static int shark_position;		

// ----- EX. 3 : board ------------ 	:보드상태 print 
void board_printBoardStatus(void)
{
    int i;
    
    printf("----------------------- BOARD STATUS -----------------------\n");
    for (i=0;i<N_BOARD;i++)
    {
        printf("|");
        if (board_status[i] == BOARDSTATUS_NOK)  
            printf("X"); //x= 파손보드
        else
            printf("O");
    }
    printf("|\n");
    printf("------------------------------------------------------------\n");
}

int board_initBoard(void)
{
    int i;
    
    //variable initialization
    for (i=0;i<N_BOARD;i++)
    {
        board_status[i] = BOARDSTATUS_OK;  
        board_coin[i] = 0;
    }
    
// ----- EX. 5 : shark ------------
    shark_position = SHARK_INITPOS;
// ----- EX. 5 : shark ------------

    //coin allocation ->여기 작성함 = 실습3 
	for (i=0;i<N_BOARD;i++)
	{
		while(board_coin[i]==0)
		{
			i=rand()%N_BOARD;
			
			if(board_coin[i]==0){
				//i번째 coin 할당 
				board_coin[i]=(rand()%MAX_COIN)+1;
			} 
		}
	}
    
    return N_COINPOS;
}
// ----- EX. 3 : board ------------


// ----- EX. 5 : shark ------------
int board_stepShark(void)
{

}
// ----- EX. 5 : shark ------------


// ----- EX. 3 : board ------------
int board_getBoardStatus(int pos)
{
    return board_status[pos];
}

int board_getBoardCoin(int pos)
{
    int coin = board_coin[pos];
    board_coin[pos] = 0;
    return coin;
}
// ----- EX. 3 : board ------------
