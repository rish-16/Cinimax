#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void display(char * pos[3][3], int length) {
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			printf ("%s\t", pos[i][j]);
		}
		printf ("\n");
	}
}

int main() {
	char * ai = "X";
	char * human = "O";
	
	char * board[3][3] = {{".", ".", "."}, {".", ".", "."}, {".", ".", "."}};
	int board_size = sizeof (board) / sizeof (board[0]);
	
	display(board, board_size);
}