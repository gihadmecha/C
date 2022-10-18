exeFile = stackTest
sourceFile = stackTest.c 



all:
	gcc -o $(exeFile) linkedList.c $(sourceFile)
	./$(exeFile) 
	rm $(exeFile)

# gcc -o main myBasics.c myArray.c myString.c struct.c stack.c queue.c main.c 
# ./main
# rm main

#run:
#	./$(exeFile)	

#clean:
#    rm $(exeFile)
