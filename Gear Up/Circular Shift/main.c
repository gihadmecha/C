unsigned int rcshift(unsigned int, unsigned int);
unsigned int lcshift(unsigned int, unsigned int);

void main(void){
	unsigned int n = 0xAABBCCDD;
	unsigned int num = 4;

	printf("Before: %x\n", n);
	n = rcshift(n, num);
	printf("After right: %x\n", n);
	n = lcshift(n, num * 2);
	printf("After left: %x\n", n);
   getchar();
	return;
}

unsigned int rcshift(unsigned int number, unsigned int shifts){
	unsigned int mask = ~0;
	unsigned int temp = 0;

	return (number>>shifts)|(number<<(32-shifts));
}

unsigned int lcshift(unsigned int number, unsigned int shifts){
	unsigned int mask = ~0;
	unsigned int temp = 0;



	return (number<<shifts)|(number>>(32-shifts));
}
