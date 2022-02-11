exeFile = xor
sourceFile = xor.c

all:
	gcc -o $(exeFile) $(sourceFile) 
	./$(exeFile)
	rm $(exeFile)

# run:
# 	./main	

 #clean:
 #rm main
