exeFile = main
sourceFile = main.c 
exeFileRm = main.exe


all:
	gcc -o $(exeFile) coding.h coding.c myBasics.h myBasics.c myArray.h myArray.c $(sourceFile)
	./$(exeFile) 
	del $(exeFileRm)

# gcc -o main myBasics.c myArray.c myString.c struct.c stack.c queue.c main.c 
# ./main
# rm main

#run:
#	./$(exeFile)	

#clean:
#    rm $(exeFile)
