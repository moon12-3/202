#include <stdio.h>

int main(void) 
{
	// ���࿡ nums[0]�� �ּҰ� 0x100�̶��?
	int nums[5] = { 10, 20, 30, 40, 50 };
	int* ptr1 = nums + 2;	// ptr1 : 100+4*2
	int* ptr2 = &nums[0] + 2; // ptr2 : 100+4*2
	

	return 0;
}