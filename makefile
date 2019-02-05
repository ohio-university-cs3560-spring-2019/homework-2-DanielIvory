# CS3560 HW1
# Daniel Ivory
# di316014@ohio.edu
# 1/27/19

prog1: ./src/prog1.o ./lib/libsearchReplace.a
	g++ -o ./bin/prog1 prog1.o ./lib/libsearchReplace.a

./src/prog1.o: ./src/prog1.cc ./lib/libsearchReplace.a
	g++ -c -Wall ./src/prog1.cc
	
./lib/libsearchReplace.a: ./lib/searchReplace.o
	ar rcs ./lib/libsearchReplace.a ./lib/searchReplace.o
	
searchReplace.o: ./lib/searchReplace.cc ./include/searchReplace.h
	g++ -c -Wall ./lib/searchReplace.cc
