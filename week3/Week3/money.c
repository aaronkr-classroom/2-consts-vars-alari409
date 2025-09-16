// money.c file

#include <stdio.h>	
int main(void)
{
	int won;
	won = 10000000;

	printf("제 은행에 %d\\ 있습니다.\n", won);

	//include comma
	const char* easy_won = "10,100,100"; //???
	printf("제 은행에 %s\\ 있습니다\n", easy_won);

	printf("+500,000\\ 수금\n");
	easy_won = "10,500,000"; // ???
	printf("수금해서 지금 %s 있습니다\n", easy_won);


	// bitcoin

	float bc = 10.123456789;
	printf("Bitcoin 지갑: %.5fBC\n",bc); //???

	bc = bc + 0.34567;
	printf("현재 Bitcoin 지갑: %fBC\n", bc);


	return 0;
}