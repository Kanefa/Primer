void example4_25()
{
	// 'q' has the bit pattern                                                       0111 0001
	// The char operand is promoted                    0000 0000 0000 0000 0000 0000 0111 0001
	// ~'q' has the bit pattern                        1111 1111 1111 1111 1111 1111 1000 1110
	// The shift will move the bits 6 bits to the left 1111 1111 1111 1111 1110 0011 1000 0000
	
	const char q = 'q';
	const unsigned int val = ~'q' << 6;
}

void example4_26()
{
	// If we used unsigned int as the type of quiz1 we may not have enough bits to represent
	// the 30 students, because unsigned ints are only guaranteed to be 16 bits. If our machine
	// had 16 bit unsigned ints and we tried to indicate the 27th student passed by shifting 
	// 1UL 27 bits over and then ORing with quiz1 the result would not be what we desired. 
	// Since quiz1 only has 16 bits anything more will be ignored.
	//                     0000 0000 0000 0000
	// 0000 0100 0000 0000 0000 0000 0000 0000
	// |---- ignored ----|
	// result =            0000 0000 0000 0000

	unsigned short quiz1 = 0; // Using short to simulate the use of a 16 bit int (shorts are
	                         // 16 bit on my systemand (ints are 32 bit).
	quiz1 |= 1UL << 27;
}

void example4_27()
{
	unsigned long ul1 = 3; // In binary as 32 bits: 0000 0000 0000 0000 0000 0000 0000 0011
	unsigned long ul2 = 7; // In binary as 32 bits: 0000 0000 0000 0000 0000 0000 0000 0111 

	// a. 3 or 0000 0000 0000 0000 0000 0000 0000 0011 
	unsigned int val1 = ul1 & ul2;
	
	// b. 7 or 0000 0000 0000 0000 0000 0000 0000 0111
	unsigned int val2 = ul1 | ul2;
	
	// c. 1 or true
	unsigned int val3 = ul1 && ul2;
	
	// d. 1 or true
	unsigned int val4 = ul1 || ul2;
}

int main()
{
	example4_25();
	example4_26();
	example4_27();

	return 0;
}
