#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAPSIZE 12 // odd maps are better

enum xy_coordinate {x, y};

void recursiveMap(int map[MAPSIZE][MAPSIZE], int startPoint[2], int endPoint[2]) {
	
	if (endPoint[x] - startPoint[x] < 4 || endPoint[y] - startPoint[y] < 4) {
		return;
	} else {
		int breakPoint[2];
		breakPoint[x] = startPoint[x] + 2 + rand() % (endPoint[x] - startPoint[x] - 3);
		while (breakPoint[x] % 2 == MAPSIZE % 2) {
			breakPoint[x] = startPoint[x] + 2 + rand() % (endPoint[x] - startPoint[x] - 3);	
		}
		breakPoint[y] = startPoint[y] + 2 + rand() % (endPoint[y] - startPoint[y] - 3);
		while (breakPoint[y] % 2 == MAPSIZE % 2) {
			breakPoint[y] = startPoint[y] + 2 + rand() % (endPoint[y] - startPoint[y] - 3);	
		}
		
		int i;
		for (i = startPoint[x] + 1; i<endPoint[x]; i++) {
			map[i][breakPoint[y]] = 1;
		} // breakLine y
		for (i = startPoint[y] + 1; i<endPoint[y]; i++) {
			map[breakPoint[x]][i] = 1;
		} // breakLine x
		
		for (i = 0; i < 2; i++) {
			int hole; 
			hole = startPoint[x] + 1 + rand() % (endPoint[x] - startPoint[x] - 1); // hole on y line
			while (hole == breakPoint[x]) {
				hole = startPoint[x] + 1 + rand() % (endPoint[x] - startPoint[x] - 1);
			}
			map[hole][breakPoint[y]] = 0;
		
			hole = startPoint[y] + 1 + rand() % (endPoint[y] - startPoint[y] - 1); // hole on x line
			while (hole == breakPoint[y]) {
				hole = startPoint[y] + 1 + rand() % (endPoint[y] - startPoint[y] - 1); 
			}
			map[breakPoint[x]][hole] = 0;	
		}
		
		
		int startMid[2] = {breakPoint[x], startPoint[y]};
		int endMid[2] = {breakPoint[x], endPoint[y]};
		int startStart[2] = {startPoint[x], breakPoint[y]};
		int endEnd[2] = {endPoint[x], breakPoint[y]};
		
		recursiveMap(map, startPoint, breakPoint);
		recursiveMap(map, startMid, endEnd);
		recursiveMap(map, startStart, endMid);
		recursiveMap(map, breakPoint, endPoint);
	}
}

void showMap(int map[MAPSIZE][MAPSIZE], int position[2], int direc) {
	
	int c, d;
	for (c = 1; c <= 32767/4; c++) {
		for (d = 1; d <= 32767/4; d++) {
		}
	}
	
	
	system("CLEAR");
	int i;
	for (i=0; i<MAPSIZE; i++) {
		int j;
		for (j=0; j<MAPSIZE; j++) {
			if (j == position[x] && i == position[y]) {
				
				switch (direc) {
					case 0:
						printf("%c ", 'X');
						break;
						
					case 1:
						printf("%c ", 'X');
						break;
					
					case 2:
						printf("%c ", 'X');
						break;
					
					case 3:
						printf("%c ", 'X');
						break;
				}
				
				
				
			} else if (map[j][i] == 1) {
				printf("%c ", '#');
			} else {
				printf("%c ", '.');
			}
		}
		printf("\n");
	}
}

void initializeMap(int map[MAPSIZE][MAPSIZE], int startPoint[2], int endPoint[2]) {
	int i;
	for (i=0; i<MAPSIZE; i++) {
		int j;
		for (j=0; j<MAPSIZE; j++) {
			if (i == 0 || i == MAPSIZE-1) {
				map[j][i] = 1;
			} else if (j == 0 || j == MAPSIZE-1) {
				map[j][i] = 1;
			} else {
				map[j][i] = 0;
			}
		}
	}
	
	recursiveMap(map, startPoint, endPoint);
	
}

void setStartEnd(int map[MAPSIZE][MAPSIZE], int start[2], int end[2]) {
	
	start[x] = 0;
	start[y] = 1 + rand() % (MAPSIZE-2);
	while (map[1][start[y]] == 1) {
		start[y] = 1 + rand() % (MAPSIZE-2);	
	}
	map[start[x]][start[y]] = 0;
	
	end[x] = MAPSIZE-1;
	end[y] = 1 + rand() % (MAPSIZE-2); 
	
	while (map[MAPSIZE-2][end[y]] == 1) {
		end[y] = 1 + rand() % (MAPSIZE-2); 
	}
	map[end[x]][end[y]] = 0;
}

void mazeTransverse(int map[MAPSIZE][MAPSIZE], int pos[2], int direction, int end[2], int start[2]) {
	
	if (pos[x] == end[x] && pos[y] == end[y]) {
		printf("Exit found.\n");
		return;
	}
	
	switch (direction) {
		case 0: // right
			if (map[pos[x]][pos[y]+1] == 0) { // if down is open
				pos[y]++; // go down
				direction = 1; // change direction to down
			} else if (map[pos[x]+1][pos[y]] == 0) { // if right is open
				pos[x]++; // go right
			} else if (map[pos[x]][pos[y]-1] == 0) { // if up is open
				pos[y]--; // go up
				direction = 3; // change direction to up
			} else if (map[pos[x]-1][pos[y]] == 0) { // if left is open
				pos[x]--; // go left
				direction = 2; // change direction to left
			}
			break;
			
		case 1: // down
			if (map[pos[x]-1][pos[y]] == 0) { // if left is open
				pos[x]--; // go left
				direction = 2; // change direction to left
			} else if (map[pos[x]][pos[y]+1] == 0) { // if down is open
				pos[y]++; // go down
			} else if (map[pos[x]+1][pos[y]] == 0) { // if right is open
				pos[x]++; // go right
				direction = 0; // change direction to right
			} else if (map[pos[x]][pos[y]-1] == 0) { // if up is open
				pos[y]--; // go up
				direction = 3; // change direction to up
			}
			break;
		
		case 2: // left
			if (map[pos[x]][pos[y]-1] == 0) { // if up is open
				pos[y]--; // go up
				direction = 3; // change direction to up
			} else if (map[pos[x]-1][pos[y]] == 0) { // if left is open
				pos[x]--; // go left
			} else if (map[pos[x]][pos[y]+1] == 0) { // if down is open
				pos[y]++; // go down
				direction = 1; // change direction to down
			} else if (map[pos[x]+1][pos[y]] == 0) { // if right is open
				pos[x]++; // go right
				direction = 0; // change direction to right
			}
			break;
			
		case 3: // up
			if (map[pos[x]+1][pos[y]] == 0) { // if right is open
				pos[x]++; // go right
				direction = 0; // change direction to right
			} else if (map[pos[x]][pos[y]-1] == 0) { // if up is open
				pos[y]--; // go up
			} else 	if (map[pos[x]-1][pos[y]] == 0) { // if left is open
				pos[x]--; // go left
				direction = 2; // change direction to left
			} else if (map[pos[x]][pos[y]+1] == 0) { // if down is open
				pos[y]++; // go down
				direction = 1; // change direction to down
			}
			break;
	}
	
	showMap(map, pos, direction);
	
	if (pos[x] == start[x] && pos[y] == start[y]) {
			printf("Exit not found.\n");
			return;
	}
	
	mazeTransverse(map, pos, direction, end, start);
}

void mazeGenerator (int map[MAPSIZE][MAPSIZE], int startingPos[2], int endingPos[2]) {
	
	int start[2] = {0,0};
	int end[2] = {MAPSIZE-1, MAPSIZE-1};
	
	initializeMap(map, start, end);
	setStartEnd(map, startingPos, endingPos);

}

int main() {
	
	srand(time(NULL));
	
	int bitMap[MAPSIZE][MAPSIZE] = {0};
	int startPos[2];
	int endPos[2];
	int stepDirection = 0;
	/*
		0 right = (x) + 1; --> 1,0
		1 down = (y) + 1; --> 0, 1
		2 left = (x) - 1; --> -1,0
		3 up = (y) - 1; --> 0,-1	
	*/
	
	mazeGenerator(bitMap, startPos, endPos);
	
	int position[2] = {startPos[x], startPos[y]};
	
	showMap(bitMap, position, stepDirection);
	
	mazeTransverse(bitMap, position, stepDirection, endPos, startPos);
	
	return 0;
}
