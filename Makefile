exeFile = main
sourceFile = main.c 



all:
	gcc -o $(exeFile) myMaths.c myArray.c myString.c $(sourceFile) 
	./$(exeFile) 
	rm $(exeFile)

#run:
#	./$(exeFile)	

#clean:
#    rm $(exeFile)
