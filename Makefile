exeFile = swap_example
sourceFile = swap_example.c

all:
	gcc -o $(exeFile) $(sourceFile) 
	./$(exeFile)
	rm $(exeFile)

# run:
# 	./main	

 #clean:
 #rm main
