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

bool is_full(char * pos[3][3], int length) {
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < length; j++) {
			if (strncmp(pos[i][j], ".", 1) == 1) {
				return true;
			}
		}
	}
	return false;
}

int main() {
	char * ai = "X";
	char * human = "O";
	
	char * board[3][3] = {{".", ".", "."}, {".", ".", "."}, {".", ".", "."}};
	int board_size = sizeof (board) / sizeof (board[0]); // 3
	
	display(board, board_size);
	bool board_full = is_full(board, board_size);
	
	printf (board_full ? "true\n" : "false\n");
}