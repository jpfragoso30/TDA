SOURCES:= ${wildcard ./src/*.c ./test/*.c} 

All: .PHONY unity.o

.PHONY:
	@echo "Compiling..."
	@echo ${SOURCES}

test:| unity.o List.o test_ListInit.o
	gcc -o test unity.o List.o test_ListInit.o
	mv test targets
	
test_ListInit.o: ./tests/test_ListInit.c
	gcc -c ./tests/test_ListInit.c

List.o: ./src/List.c
	gcc -c ./src/List.c

unity.o: ./src/unity.c
	gcc -c ./src/unity.c

Clear: unity.o List.o test_ListInit.o
	rm unity.o List.o test_ListInit.o