SOURCES:= ${wildcard ./src/*.c ./test/*.c} 

All: .PHONY unity.o

.PHONY:
	@echo "Compiling..."
	@echo ${SOURCES}

test:| unity.o ComplexNumber.o test_ComplexNumberInit.o
	gcc -o test unity.o ComplexNumber.o test_ComplexNumberInit.o
	
test_ComplexNumberInit.o: ./tests/test_ComplexNumberInit.c
	gcc -c ./tests/test_ComplexNumberInit.c

ComplexNumber.o: ./src/ComplexNumber.c
	gcc -c ./src/ComplexNumber.c

unity.o: ./src/unity.c
	gcc -c ./src/unity.c

Clear: unity.o ComplexNumber.o test_ComplexNumberInit.o
	rm unity.o ComplexNumber.o test_ComplexNumberInit.o