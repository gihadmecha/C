exeFile = swapExample
sourceFile = swapExample.c 



all:
	gcc -o main myBasics.c myArray.c myString.c struct.c main.c 
	./main
	rm main
#	gcc -o $(exeFile)  $(sourceFile) 
#	./$(exeFile) 
#	rm $(exeFile)

#run:
#	./$(exeFile)	

#clean:
#    rm $(exeFile)
