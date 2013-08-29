  /**  
    * This program is free software: you can redistribute it and/or modify
    * it under the terms of the GNU General Public License as published by
    * the Free Software Foundation, either version 3 of the License, or
    * (at your option) any later version.
    * 
    * This program is distributed in the hope that it will be useful,
    * but WITHOUT ANY WARRANTY; without even the implied warranty of
    * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    * GNU General Public License for more details.
    * 
    * Copyright 2013 Maven Scientists http://mavenscientists.com
    */

 /**
   * @author	Maven Scientists (http://mavenscientists.com) 
   * @email	info@mavenscientists.com
   * NestedIf - This C program shows nested if construct
   */

#include <stdio.h>

int main()
{
	int number;
	
	printf("Enter Number : ");
	scanf("%d", &number);
	
	if( number<= 100)
	{
		printf("Less  than or equal to 100");
		
		if( number <= 50)
		{
			printf("\nLess than 50");
			if( number<= 25)
			{
				printf("\nLess  than 25");
			}
			else
			{
				printf("\nGreater than 25 and less than 50");
			}
		}
		else
		{
			printf("\nGreater than 50 and less than 100");		
		}
	}
	else
	{
		printf("\nGreater than 100");
	}
	

	return 0;
}

