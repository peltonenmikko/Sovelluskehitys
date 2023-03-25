/***************************************************************************
 *   Copyright (C) 2023 by Mikko Peltonen   *
 *   e2101877@edu.vamk.fi   *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/

/*********************************************************************

 1.  NAME
     String manipulator.c

 2.  DESCRIPTION
     Asks a string from user and edits it depending 
     on the command given by user.

 3.  VERSIONS
       Original:
         23.3.2023 / Mikko

       Version history:

**********************************************************************/

/*-------------------------------------------------------------------*
*    HEADER FILES                                                    *
*--------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <time.h>

/*-------------------------------------------------------------------*
*    GLOBAL VARIABLES AND CONSTANTS                                  *
*--------------------------------------------------------------------*/
/* Control flags */

/* Global constants */

/* Global variables */

/* Global structures */


/*-------------------------------------------------------------------*
*    FUNCTION PROTOTYPES                                             *
*--------------------------------------------------------------------*/
void menu(void);
char ask_command(void);
int count_vowels(char str[]);
int to_upper(char str[]);
int to_lower(char str[]);
int read_string(char str[]);
int current(char str[]);
void read_file(char str[]);
void write_file(char str[]);
/*********************************************************************
*    MAIN PROGRAM                                                      *
**********************************************************************/

int main(void)
{
    printf("(~_|_ _. _  _   |\\/| _  _ . _    | _ _|_. _  _ \n_) | | || |(_|  |  |(_|| |||_)|_||(_| | |(_)| |\n            _|             |                   ");

    char str[30] = "new string";
    char cmd;
    menu();

    while(cmd!=120 || cmd!=88)
    {
    //Ask command from user
        printf("\nGive command:");
        cmd = ask_command();

    //Vowels
        if(cmd=='a' || cmd=='A')
        {
            count_vowels(str);
        }
    //Consonants
        if(cmd=='b' || cmd=='B')
        {
            count_consonants(str);
        }
    //Upper case
        if(cmd=='c' || cmd=='C')
        {
            str == to_upper(str);
        }
    //Lower case
        if(cmd=='d' || cmd=='D')
        {
            str == to_lower(str);
        }
    //Current string
        if(cmd=='e' || cmd=='E')
        {
            current(str);
        }
    //Enter another string
        if(cmd=='f' || cmd=='F')
        {
            str == read_string(str);
        }
    //Read from file
        if(cmd=='g' || cmd=='G')
        {
            read_file(str);
        }
    //Write to file
        if(cmd=='h' || cmd=='H')
        {
            write_file(str);
        }
    //Menu
        if(cmd=='m' || cmd=='M')
        {
            menu();
        }

        if(cmd=='x' || cmd=='X')
        {
            return 0;
        }
    }
} /* end of main */

/*********************************************************************
*    FUNCTIONS                                                       *
**********************************************************************/

/*********************************************************************
 NAME: count_vowels
 DESCRIPTION: Counts the amount of vowels in the string given by user
              and prints it in the console.
	Input: string
	Output: 0
  Used global variables: none
 REMARKS when using this function:
*********************************************************************/

int count_vowels(char str[])
{
    int b = 0;
    int c = 0;
    for(b=0; str[b]!='\0'; b++)
    {
        if (str[b] == 'a' || str[b] == 'A' || str[b] == 'e' || str[b] == 'E' ||
         str[b] == 'i' || str[b] == 'I' || str[b] =='o' || str[b]=='O' ||
          str[b] == 'u' || str[b] == 'U')
        {
            c++;
        }
    }
    printf("String has %d vowels", c);
    return 0;
}

/*********************************************************************
*    FUNCTIONS                                                       *
**********************************************************************/

/*********************************************************************
 NAME: count_consonants
 DESCRIPTION: Counts the amount of consonants in the string given by user
              and prints it in the console.
	Input: string
	Output: 0
  Used global variables: none
 REMARKS when using this function:
*********************************************************************/

int count_consonants(char str[])
{
    int b = 0;
    int c = 0;
    for(b=0; str[b]!='\0'; b++)
    {
        if (str[b] == 'b' || str[b] == 'B' || str[b] == 'c' || str[b] == 'C' ||
         str[b] == 'd' || str[b] == 'D' || str[b] =='f' || str[b]=='F' ||
          str[b] == 'g' || str[b] == 'G' || str[b] =='h' || str[b]=='H' ||
           str[b] == 'j' || str[b] == 'J' || str[b] =='k' || str[b]=='K' ||
            str[b] == 'l' || str[b] == 'L' || str[b] =='m' || str[b]=='M' ||
             str[b] == 'n' || str[b] == 'N' || str[b] =='p' || str[b]=='P' ||
              str[b] == 'r' || str[b] == 'R' || str[b] =='s' || str[b]=='S' ||
               str[b] == 't' || str[b] == 'T' || str[b] =='v' || str[b]=='V' ||
                str[b] == 'w' || str[b] == 'W' || str[b] =='y' || str[b]=='Y' ||
                 str[b] == 'z' || str[b] == 'Z')
        {
            c++;
        }
    }
    printf("String has %d consonants", c);
    return 0;
}

/*********************************************************************
*    FUNCTIONS                                                       *
**********************************************************************/

/*********************************************************************
 NAME: ask_command
 DESCRIPTION: Asks the letter from user which will be used to define
              what command is to be used.
	Input: none
	Output: Command letter given by user
  Used global variables: none
 REMARKS when using this function:
*********************************************************************/

char ask_command(void)
{
    char c[6];
    fgets(c,6,stdin);
    return c[0];
}

/*********************************************************************
*    FUNCTIONS                                                       *
**********************************************************************/

/*********************************************************************
 NAME: to_upper
 DESCRIPTION: Converts all lower case letters in the string to upper case.
	Input: string
	Output: string with upper case letters.
  Used global variables: none
 REMARKS when using this function:
*********************************************************************/

int to_upper(char str[])
{
    int b;
    for(b=0; str[b]!='\0'; b++)
    {
        if(str[b] >= 'a' && str[b] <= 'z')
        {
            str[b] = str[b] - 32;
        }
    }
    return str;
}

/*********************************************************************
*    FUNCTIONS                                                       *
**********************************************************************/

/*********************************************************************
 NAME: to_lower
 DESCRIPTION: Converts all upper case letters in the string to lower case.
	Input: string
	Output: string with lower case letters.
  Used global variables: none
 REMARKS when using this function:
*********************************************************************/

int to_lower(char str[])
{
    int b;
    for(b=0; str[b]!='\0'; b++)
    {
        if(str[b] >= 'A' && str[b] <= 'Z')
        {
            str[b] = str[b] + 32;
        }
    }
    return str;
}

/*********************************************************************
*    FUNCTIONS                                                       *
**********************************************************************/

/*********************************************************************
 NAME: current
 DESCRIPTION: Prints the current string to console
	Input: string
	Output: none
  Used global variables: none
 REMARKS when using this function:
*********************************************************************/

int current(char str[])
{
    puts(str);
}

/*********************************************************************
*    FUNCTIONS                                                       *
**********************************************************************/

/*********************************************************************
 NAME: read_string
 DESCRIPTION: Asks the user to give new string that will replace the old one.
	Input: string
	Output: new string
  Used global variables: none
 REMARKS when using this function:
*********************************************************************/

int read_string(char str[])
{
    printf("Give string:");
    fgets(str,30,stdin);
    return str;
}

/*********************************************************************
*    FUNCTIONS                                                       *
**********************************************************************/

/*********************************************************************
 NAME: read_file
 DESCRIPTION: Prints the string saved to textfile.txt into the console.
	Input: string
	Output: none
  Used global variables: none
 REMARKS when using this function:
  Function will also check if the text file exist and will give a
  notification if it doesn't.
*********************************************************************/

void read_file(char str[])
{
    FILE *file_pointer;

    file_pointer = fopen("textfile.txt", "r");
    if(file_pointer==0)
        {
        printf("File does not exist\n");
        }
    else
        {
            fgets(str, 30, file_pointer);
            printf("%s",str);
            fclose(file_pointer);
        }
}

/*********************************************************************
*    FUNCTIONS                                                       *
**********************************************************************/

/*********************************************************************
 NAME: write_file
 DESCRIPTION: Writes the string into textfile.txt
	Input: string
	Output: none
  Used global variables: none
 REMARKS when using this function:
*********************************************************************/

void write_file(char str[])
{
    FILE *file_pointer;

    file_pointer = fopen("textfile.txt", "w");
    fprintf(file_pointer, "%s", str);
    fclose(file_pointer);
}

/*********************************************************************
*    FUNCTIONS                                                       *
**********************************************************************/

/*********************************************************************
 NAME: menu
 DESCRIPTION: Prints the menu which will show all available commands.
	Input: none
	Output: none
  Used global variables: none
 REMARKS when using this function:
*********************************************************************/

void menu(void)
{
    printf("\nA) Count the number of vowels in the string\nB) Count the number of consonants int the string\n"
    "C) Convet the string to uppercase\nD) Convert the string to lowercase\nE) Display the current string\n"
    "F) Enter another string\nG) Read string from file\nH) Write string to file\n\nM) Display this menu\nX) Exit the program\n");
}
