/**
 * @file division.c
 * @author Sridhar Raj KN (sridharrajp7@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <stdio.h>
#include "fun.h"
int main()
{
	int num1 = 10, num2 = 5; ///< divisor and dividend
 	int result = div(num1,num2);
	printf("%d",result);
	return 0;
}