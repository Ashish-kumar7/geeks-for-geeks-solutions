unsigned int swapBits(unsigned int x){
	unsigned int even_bits = x & 0xAAAAAAAA;  
    unsigned int odd_bits = x & 0x55555555;  
    even_bits >>= 1; // Right shift even bits  
    odd_bits <<= 1; // Left shift odd bits  
    return (even_bits | odd_bits);
}