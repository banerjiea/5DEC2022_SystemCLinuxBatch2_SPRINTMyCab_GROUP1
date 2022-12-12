/***********************************************************
** FILENAME : common.c
**
** DESCRIPTION: Perform the function for Main Menu Customer Menu Driver Menu 
**
** Revision History :
** DATE                NAME            REFERENCE          REASON
** ----------------------------------------------------------------------
** 10 DEC 2022         GROUP 1       	 New        Initial Creation
**
**
** 
**Total number of functions-5
***********************************************************/
#include <common.h>

/******************************************************************************
*
*       Function Name   : mainMenu Function 1
*
*       Description     : Display the Main Menu
*
*       Returns         : Success 
*
*******************************************************************************/

int mainMenu()
{
	int ch;
	printf("\n\t*******************************************************\n");
	printf("\n\t        Welcome to MyCab -- Cab Booking System           \n");
	printf("\n\t*******************************************************\n");
	printf("\n\t==================Login Screen========================\n");
	printf("\n\tEnter,");
	printf("\n\t1. User");
	printf("\n\t2. Cab Driver");
	printf("\n\t3. Quit");
	printf("\n\tChoice: ");
	scanf("%d",&ch);
	return ch;
}


/******************************************************************************
*
*       Function Name   : custMainMenu Function 2
*
*       Description     : Display the Customer Main Menu
*
*       Returns         : Success 
*
*******************************************************************************/

int custMainMenu()
{
	int ch;
	printf("\n\t==================User Login Screen========================\n");
	printf("\n\tEnter,");
	printf("\n\t1. Register new user");
	printf("\n\t2. Login as user");
	printf("\n\t3. Quit");
	printf("\n\tChoice: ");
	scanf("%d",&ch);
	return ch;	
}

/******************************************************************************
*
*       Function Name   : driverMenu Function 3
*
*       Description     : Display the Driver Menu
*
*       Returns         : Success 
*
*******************************************************************************/


int driverMenu()
{
	int ch;
	printf("\n\t==================CabDriver Login Screen========================\n");
	printf("\n\tEnter,");
	printf("\n\t1. Register new cab driver");
	printf("\n\t2. Login as cab driver");
	printf("\n\t3. Quit");
	printf("\n\tChoice: ");
	scanf("%d",&ch);
	return ch;
}

/******************************************************************************
*
*       Function Name   : removeLeading Function 4
*
*       Description     : Removing the space
*
*       Returns         : Success 
*
*******************************************************************************/

void removeLeading(char *str, char *str1)
{
    int idx = 0, j, k = 0;
 
    /* Iterate String until last */
    /* leading space character*/
    while (str[idx] == ' ' || str[idx] == '\t' || str[idx] == '\n')
    {
        idx++;
    }
 
    /* Run a for loop from index until the original */
    /* string ends and copy the content of str to str1*/
    for (j = idx; str[j] != '\0'; j++)
    {
        str1[k] = str[j];
        k++;
    }
 
    /* Insert a string terminating character */
    /* at the end of new string */
    str1[k] = '\0';
 
}

/******************************************************************************
*
*       Function Name   : removeTrailing Function 5
*
*       Description     : Removing the space
*
*       Returns         : Success 
*
*******************************************************************************/

void removeTrailing(char *str)
{
	if((str[strlen(str)-1] == ' ' || str[strlen(str)-1] == '\t' || str[strlen(str)-1] == '\n'))
    {
    	str[strlen(str)-1] = '\0';
    }

}

