//
//  board.h
//  sharkGame
//


#ifndef board_h
#define board_h

#include <stdio.h>
#include <stdlib.h>

// ----- EX. 3 : board ------------
#define N_BOARD                 20 //20칸 짜리 게임 

//0 - OK, 1 - destroyed
#define BOARDSTATUS_NOK          1 //die
#define BOARDSTATUS_OK           0 //alive

int board_initBoard(void); //보드 초기화 
int board_getBoardStatus(int pos);  //특정 칸의 파손 여부 출력 
int board_getShartPosition(void); //상어위치 출력 
int board_stepShark(void); //상어 전진 명령 
int board_getBoardCoin(int pos); //coin 습득 명령 
void board_printBoardStatus(void); //전체보드의 상태 출력
// ----- EX. 3 : board ------------
#endif /* board_h */
