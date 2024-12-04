//
//  board.h
//  sharkGame
//


#ifndef board_h
#define board_h

#include <stdio.h>
#include <stdlib.h>

// ----- EX. 3 : board ------------
#define N_BOARD                 20 //20ĭ ¥�� ���� 

//0 - OK, 1 - destroyed
#define BOARDSTATUS_NOK          1 //die
#define BOARDSTATUS_OK           0 //alive

int board_initBoard(void); //���� �ʱ�ȭ 
int board_getBoardStatus(int pos);  //Ư�� ĭ�� �ļ� ���� ��� 
int board_getShartPosition(void); //�����ġ ��� 
int board_stepShark(void); //��� ���� ��� 
int board_getBoardCoin(int pos); //coin ���� ��� 
void board_printBoardStatus(void); //��ü������ ���� ���
// ----- EX. 3 : board ------------
#endif /* board_h */
