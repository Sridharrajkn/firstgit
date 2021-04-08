/**
 * @file division_logic.c
 * @author Sridhar Raj KN (sridharrajp7@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "fun.h"
/**
 * @brief contains the logic for division of two numbers and returns an integer number
 * 
 * @param[in] number1 
 * @param[in] number2 
 * @return int 
 */
int div(int number1,int number2)
{
	 if(number1 == 0 || number2 == 0)
	 	 return 0;
	 else
	  	 return number1/number2;
}