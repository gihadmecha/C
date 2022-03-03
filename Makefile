exeFile = sizeOf
sourceFile = sizeOf.c

all:
	gcc -o $(exeFile) $(sourceFile) 
	./$(exeFile)
	rm $(exeFile)

# run:
# 	./main	

 #clean:
 #rm main
