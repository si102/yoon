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
        if (board_status[i] == BOARDSTATUS_NOK )
		{
        	printf("X"); //x= 파손보드
		} 
            
        else if (i==shark_position)
		{
        	printf("X"); //상어가 있는 칸
		}
        	 
        else
		{
        	printf("O");
		}
            
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
    int coin_count=0;
    int coin_amount=0;
	for (i=0;i<N_BOARD;i++) //i는 0~20까지 
	{
		int pos;
		while(board_coin[i]==0 && coin_count<N_COINPOS) //코인이  
		{
			pos=rand()%N_BOARD;
			
			if(board_coin[pos]==0) //빈칸에만 코인 배정 
			{ 
				coin_amount=(rand()%MAX_COIN)+1;
				board_coin[pos]=coin_amount;
				coin_count+=coin_amount;
			}
		}
	}
    
    return N_COINPOS;
}
// ----- EX. 3 : board ------------


// ----- EX. 5 : shark ------------
int board_stepShark(void)
{
	int sharkmove=rand()%MAX_SHARKSTEP+1; //랜덤 1~6 
	int start_pos=shark_position; 
	
	shark_position+=sharkmove; //이동 
	int i;

	if(shark_position>=N_BOARD)
	{
		shark_position=N_BOARD-1;
	}
	
	for(i=start_pos;i<=shark_position;i++) //상어가 지나가면 파손 
	{
		if(i>=0 && i<N_BOARD)
		{
			board_status[i]=BOARDSTATUS_NOK;
		}
	}
	
	printf("shark move : %d\n, new position: %d\n",sharkmove, shark_position);
	
	return sharkmove;
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
    if(coin>0)
	{
		board_coin[pos] = 0;
	}
    return coin;
}
// ----- EX. 3 : board ------------
