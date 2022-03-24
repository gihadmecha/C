exeFile = main
sourceFile = main.c
sourceFile2 = struct.c

all:
	gcc -o $(exeFile) $(sourceFile) $(sourceFile2)
	./$(exeFile)
	rm $(exeFile)

# run:
# 	./main	

 #clean:
 #rm main
