exeFile = main
sourceFile = main.c 
exeFileRm = main.exe


all:
	gcc -o $(exeFile) complex.c coding.h coding.c myArray.h myArray.c myBasics.h myBasics.c myString.h myString.c $(sourceFile)
	./$(exeFile) 
	del $(exeFileRm)

# gcc -o main myBasics.c myArray.c myString.c struct.c stack.c queue.c main.c 
# ./main
# rm main

#run:
#	./$(exeFile)	

#clean:
#    rm $(exeFile)
