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
        if (board_status[i] == BOARDSTATUS_NOK)  
            printf("X"); //x= �ļպ���
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

    //coin allocation ->���� �ۼ��� = �ǽ�3 
	for (i=0;i<N_BOARD;i++)
	{
		while(board_coin[i]==0)
		{
			i=rand()%N_BOARD;
			
			if(board_coin[i]==0){
				//i��° coin �Ҵ� 
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
