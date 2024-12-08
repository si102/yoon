//
//  board.c :�� ĭ�� ����(�ļտ���, ���� ��), ����� ���� 
//  sharkGame
//

#include "board.h" //����� ���� ������� 

// ----- EX. 3 : board ------------		:�⺻ �� 
#define N_COINPOS       12
#define MAX_COIN        4
// ----- EX. 3 : board ------------
// ----- EX. 5 : shark ------------		:�ѹ��� �ִ��̵� ��, ���� ��ġ 
#define MAX_SHARKSTEP   6
#define SHARK_INITPOS   -4
// ----- EX. 5 : shark ------------
// ----- EX. 3 : board ------------		:1�� �迭 ���� ���� 20ĭ 
static int board_coin[N_BOARD];  
static int board_status[N_BOARD]; //0 - OK, 1 - destroyed 	:�迭 ���� ���� 
// ----- EX. 3 : board ------------		:��� ��ġ ���� ���� 


static int shark_position;		

// ----- EX. 3 : board ------------ 	:������� print 
void board_printBoardStatus(void)
{
    int i;
    
    printf("----------------------- BOARD STATUS -----------------------\n");
    for (i=0;i<N_BOARD;i++)
    {
        printf("|");
        if (board_status[i] == BOARDSTATUS_NOK )
		{
        	printf("X"); //x= �ļպ���
		} 
            
        else if (i==shark_position)
		{
        	printf("X"); //�� �ִ� ĭ
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

    //coin allocation ->���� �ۼ��� = �ǽ�3 
    int coin_count=0;
    int coin_amount=0;
	for (i=0;i<N_BOARD;i++) //i�� 0~20���� 
	{
		int pos;
		while(board_coin[i]==0 && coin_count<N_COINPOS) //������  
		{
			pos=rand()%N_BOARD;
			
			if(board_coin[pos]==0) //��ĭ���� ���� ���� 
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
	int sharkmove=rand()%MAX_SHARKSTEP+1; //���� 1~6 
	int start_pos=shark_position; 
	
	shark_position+=sharkmove; //�̵� 
	int i;

	if(shark_position>=N_BOARD)
	{
		shark_position=N_BOARD-1;
	}
	
	for(i=start_pos;i<=shark_position;i++) //�� �������� �ļ� 
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
