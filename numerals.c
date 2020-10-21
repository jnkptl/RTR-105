// git clone https://github.com/jnkptl/RTR-105
// cd RTR-105
// nano date_types.c
// Ctrl+X
// gcc data_types.c -o data_types.out
// ./data_types.out

// Elementary information unit for human? (written language) - symbols and numbers
// All standard symbols used by humans are described as characters the in ASCII table - symbol vs binary code

// Elementary information unit for computer? - bit
// Elementary information unit for computer (with address)? - byte, 1 byte = 8 bits (xxxx xxxx)

// How many different unique binary combinations are in 1 byte? - 2^8 = 256
// 1 bit: 0, 1 - 2 combinations
// 2 bits: 00, 01, 10, 11 - 4 combinations
// 3 bits: 000, 001, 010, 011, 100, 101, 110, 111 - 8 combinations
// n bits: (number of states in one bit)^(number of bits) - number of combinations

#include <stdio.h>

int main()
{
	char a; // declaration of variable with identification "a"
	// this means in RAM some place (amount of space depends on data type, for char - 1 byte)
	// is related to identifier
	//!NB this space has an address
	// memory is not vacuum!
	// a -> xxxx xxxx, but this place previously was used by some other object and where stays some binary code
	// this previous code is not known and could have been any binary code; 0110 1100 or 1100 0001 or
	printf("value of variable a after char a; - %d\n",a);
	printf("\n");
	// http://cplusplus.com/reference/cstdio/printf/?kw=printf
	a = 15;
	printf("value of variable a after a = 15; - %d\n",a);
	printf("\n");
	// 15 is written as decimal number -> will be translated  to binary code 15 9dec) -> 0000 1111 (bin)
	// state of memory related to "a" indentificator isn't more unkown
	a = 65; // a -> 0100 0001
	printf("value of variable a after a = 65; output as dec num   - %d\n",a);
	printf("value of variable a after a = 65; output as character - %c\n",a);
	printf("value of variable a after a = 65; output as hex num   - 0x%x\n",a);
	printf("value of variable a after a = 65; output as oct num   - %o\n",a);
	printf("\n");
	//printf("value of variable a after a = 65; output as bin num - %b\n",a);
	// we don't have a specifier for binary output

	// Let's try to use mnemonic identificators
	// char my_variable_for_some_special_task = 0;
	char b = 'M';
	printf("value of variable b after b = \'M\'; output as dec num   - %d\n",b);
	printf("value of variable b after b = \'M\'; output as character - %c\n",b);
	printf("value of variable b after b = \'M\'; output as hex num   - 0x%x\n",b);
	printf("value of variable b after b = \'M\'; output as oct num   - %o\n",b);
	printf("\n");

	printf("Output of two variables - a and b like character and dec number - %c and %d\n",a,b);
	printf("\n");

	char c = 0x3e;
	printf("value of variable c after c = 0x3e; output as dec num   - %d\n",c);
	printf("value of variable c after c = 0x3e; output as character - %c\n",c);
	printf("value of variable c after c = 0x3e; output as hex num   - 0x%x\n",c);
	printf("value of variable c after c = 0x3e; output as oct num   - %o\n",c);
	printf("\n");

	char d = 0112;
	printf("value of variable d after d = 0112; output as dec num   - %d\n",d);
	printf("value of variable d after d = 0112; output as character - %c\n",d);
	printf("value of variable d after d = 0112; output as hex num   - 0x%x\n",d);
	printf("value of variable d after d = 0112; output as oct num   - %o\n",d);
	printf("\n");

	printf("Size of char data type variable in bytes: %ld\n",sizeof(a));
	printf("\n");

	// 1 byte -> 8 bits -> 2^8 different binary combinations or 256 numbers
	// from 0 until 255
	// as we saw previously char could be use for small numbers
	// we remember that numbers also could have a sign

	a = 126;
	b = 127;
	c = 128; // (1)000 0000 => -000 0000 ->  (-)111 1111
	         //                               +        1
                 //                             (-)1000 0000 -> 128
	d = 129;

	printf("a=%d\nb=%d\nc=%d\nd=%d\n",a,b,c,d);
	// actually char data type assume following integer numbers: -128 ... 0 ... 127

	a = 144; // 256 (2^8) + 32 (2^5) + 8 (2^4) + 4 (2^2) -> |0000 0001|   0010 1100
	printf("value of variable a after a = 144; output as dec num - %d\n",a);

	// take care with size of date type - take into account number of bytes (bits) you have
	// take care with signs (-/+)

	unsigned char cc = 128; // 0000 0001 0000 0000
	printf("value of variable a after cc = 128; output as dec num   - %d\n",cc);

	return 0;
}
