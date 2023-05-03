CC=gcc
CFLAGS=-I.

main:
	$(CC) -o main MAIN.c function/highBp.c function/highGPA.c function/insert.c function/lastName.c function/lowGPA.c function/number.c function/prtSc.c function/prtTxt.c function/sortHL.c function/sortLH.c -I.