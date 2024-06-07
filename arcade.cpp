#include <stdio.h>
// Standard Input and Output functions

#include <ctype.h>
// Functions for character classification

#include <stdlib.h>
// General utilities library

#include <time.h>
// Time functions


//FUNCTION FOR TIC-TAC-TOE

int ttt();               
// Function prototype for the Tic-Tac-Toe game
void resetboard();       
// Function prototype to reset the Tic-Tac-Toe board
void printboard();       
// Function prototype to print the Tic-Tac-Toe board
int checkfspaces();       
// Function prototype to check the number of free spaces on the Tic-Tac-Toe board
void playermove();        
// Function prototype for player's move in Tic-Tac-Toe
void compmove();          
// Function prototype for computer's move in Tic-Tac-Toe
char checkwinner();      
// Function prototype to check the winner in Tic-Tac-Toe
void printwinner(char winner);  
// Function prototype to print the winner in Tic-Tac-Toe


//FUNCTION FOR KBC/

void kbc();              
// Function prototype for the Kaun Banega Crorepati game
int ques();               
// Function prototype for the question generation in KBC


//FUNCTION FOR THE MAGIC NUMBER/

void tmn();              
// Function prototype for The Magic Number game
int table();              
int table2();
int table3();
int table4();
int table5();
// Function prototype for the tables


char board[3][3];         
// 2D array to represent the Tic-Tac-Toe board

const char PLAYER = 'O';  
const char COMPUTER = 'X';
// Constants representing the players symbols on the board


int p2;                  
// Variable for storing the player's choice in KBC
int cha2, ans2;           
// Variables for storing the player's choice and correct answer in KBC
int i = 0, j = 0, o = 0, t = 0, w = 0, u, p, in1, in2, in3;  
// Counter and control variables for KBC
int b, r, f, g, z;       
// Variables for storing player's choices in The Magic Number


// Arrays representing the numbers in each table for the 'THE MAGIC NUMBER' game
char none[16][4] = {"1","3","5","27","29","31","7","9","11","13","21","23","25","15","17","19"};
char ntwo[16][4] = {"2","3","6","7","10","15","18","19","22","23","26","27","11","14","30","31"};
char nfour[16][4] = {"23","28","29","4","5","6","14","15","20","21","7","12","13","22","30","31"};
char neight[16][4] = {"8","9","10","11","12","13","14","15","24","25","26","27","28","29","30","31"};
char nsixt[16][4] = {"16","17","18","19","20","21","22","23","24","25","26","27","28","29","30","31"};


// Array containing questions for the KBC game
char str[35][200] = 
{
    "Which is the biggest port of India?",
    "The language of Lakshadweep is?",
    "Who won the men's Wimbledon tennis tournament 2019?",
    "India 1st took part in the Olympic Games?",
    "In which places is the Kumbha Mela held?",
    "Bahubali festival is related to?",
    "September 27 is celebrated as?",
    "Which of the following is observed as Sports Day?",
    "Pongal is a popular festival of which state?",
    "Which one is essentially a solo dance?",
    "The Komark Temple is dedicated to?",
    "The Capital of the country Japan is?",
    "After Lionel Messi and Cristiano Ronaldo, who won the maximum number of Ballon'Dor?",
    "Which video game won the Player's Choice Awards in Game Awards 2022?",
    "Arnav went to meet his friend 5km away, if he went at a speed of 120km/hr, what color is your Bugatti?",
    "Which Grammy winner song was exposed as a lip sync in 1989?",
    "In which city of India did metro first establish?",
    "What is the largest state of India?",
    "How many union territories are in India (2023)?",
    "What is the United States independence day?",
    "Which planet is known as the Red Planet?", 
    "In which year did Christopher Columbus reach the Americas?",
    "What is the capital city of Japan?",
    "Who wrote the play 'Romeo and Juliet'?",
    "What is the chemical symbol for gold?",
    "Which famous scientist developed the theory of general relativity?",
    "In which year did the Titanic sink?",
    "What is the largest mammal in the world?",
    "Who painted the Mona Lisa?",
    "Which famous physicist is known for his contributions to quantum mechanics and the uncertainty principle?",
    "What is the currency of Australia?",
    "Who is the author of the Harry Potter book series?",
    "In what year did the first manned moon landing occur?",
    "What is the largest ocean on Earth?",
    "Which element has the chemical symbol Fe?"
};

// Array containing the prize money corresponding to each question
char st[15][100] = 
{
    {"1,000 RS"},{"5,000 RS"},
	{"20,000 RS"},{"60,000 RS"},
	{"1,20,000 RS"},{"3,60,000 RS"},
	{"6,40,000 RS"},{"12,50,000 RS"},
	{"25,00,000 RS"},{"50,00,000 RS"},
	{"1,00,00,000 RS"},{"2,00,00,000 RS"},
    {"5,00,00,000 RS"},{"10,00,00,000 RS"},
    {"15,00,00,000 RS"}
}; 


// Array representing the serial numbers for questions in 'KAUN BANEGA CROREPATI'
char su[15][100] =
{
    {"1."},{"2."},
    {"3."},{"4."},
    {"5."},{"6."},
    {"7."},{"8."},
    {"9."},{"10."},
    {"11."},{"12."},
    {"13."},{"14."},
    {"15."}
};


// Main function to start the game
void main()
{
    int game;

// Displaying the welcome message and game menu
printf("\n\n\t\t\t\t\t"
       "------------------ WELCOME ----------------*-\n");
printf("\t\t\t\t\t"
       "---------------------------------- TO -----------------------------------\n");
printf("\t\t\t\t\t"
       "------------------ GAME STOP ----------------*-\n\n");
printf("\t\t\t\t\t"
       "-------->    1. KBC                -----------------------------------|\n");
printf("\t\t\t\t\t"
       "-------->    2. TIC-TAC-TOE        -----------------------------------|\n");
printf("\t\t\t\t\t"
       "-------->    3. THE MAGIC NUMBER   -----------------------------------|\n");
printf("\t\t\t\t\t---> ENTER CHOICE TO PLAY :-  ");




    // Get user's choice for the game
    scanf("%d", &game);

    // Clear the console screen
    system("cls");

    // Switch case to determine which game to play based on user's choice
    switch (game)
    {
        case 1:
        {
            kbc(); // Call the function to play 'Kaun Banega Crorepati'
            break;
        }

        case 2:
        {
            ttt(); // Call the function to play 'Tic-Tac-Toe'
            break;
        }

        case 3:
        {
            tmn(); // Call the function to play 'The Magic Number'
            break;
        }

        default:
        {
            printf("\n---<<<>>>INVALID COMMAND!!!!!<<<<>>>>----");
        }
    }
}


// Function to play 'Kaun Banega Crorepati'
void kbc()
{
    printf("\n\t\t\t\t\t"
           "------------------ WELCOME ----------------*-\n\n");
    printf("\t\t\t\t\t"
           "--------------------------------------- TO ------------------------------------\n\n");
    printf("\t\t\t\t\t"
           "---------------* KAUN BANEGA CROREPATI -------------\n\n\n");

    printf("\t\t\t\t\t"
           "  1.-->TO PLAY<---        2.---->EXIT<----\n\n");
    printf("\t\t\t\t\t"
           "---->>>CHOICE    :-    ");
    scanf("%d", &p2);

    if (p2 == 1)
    {
        system("cls");
        printf("\n\t\t\t\t\t"
               "------------------ WELCOME ----------------*-\n\n");
        printf("\t\t\t\t\t"
               "--------------------------------------- TO ------------------------------------\n\n");
        printf("\t\t\t\t\t"
               "---------------* KAUN BANEGA CROREPATI -------------\n\n\n");
        ques();
    }
    
    else
    {
        printf("\n\n\t\t\t\t\t\t\t-------->GOOD BYE<--------\n");
        exit(0);
    }
}


// Function to handle questions in 'Kaun Banega Crorepati'
int ques()
{
    int o2, i2 = 0, a2[34];


    // Loop to generate and display questions without repetition
    do
    {
        // Generate a random index for the question
        Genrate:
            srand(time(0));
            o2 = rand() % 35;
            a2[i2] = o2;

            // Check if the generated index has already been used
            for (int j2 = 0; j2 < i2; j2++)
            {
                if (o2 == a2[j2])
                {
                    goto Genrate; // If repeated, generate a new index
                } 
            }

        // Display the question
        printf("\n--->%s %s\n", su[i2], str[o2]);

    
    //OPTIONS FOR THE QUESTIONS
	
    if(o2==0)
		{

		    printf("\n       1. KOLKATA      2. COCHIN");

			printf("\n       3. MUMBAI       4. CHENNAI");

			ans2=3;
		}

    else if(o2==1)
		{
            printf("\n       1. TELEGU      2. HINDI");

			printf("\n       3. TAMIL       4. MALYALAM");

			ans2=4;
		}

    else if(o2==2)
		{
            printf("\n       1. A.MURRAY      2. A.MADAL");

			printf("\n       3. N.DJOKOVIC    4. R.FEDERER");

			ans2=3;
		}

    else if(o2==3)
		{
            printf("\n       1. 1920        2. 1974");

			printf("\n       3. 1972        4. 1948");

			ans2=1;
		}

    else if(o2==4)
		{
		    printf("\n       1. UJJAIN;PATNA           2. PRAYAG;UJJAIN");

            printf("\n       3. UJJAIN;BADRINATH       4. HARIWAR;PRAYAG");

			 ans2=2;
		}

    else if(o2==5)
		{
		    printf("\n       1. JAINISM        2. ISLAM");

			printf("\n       3. HINDUISM       4. BUDDHISM");

			ans2=1;
		}

    else if(o2==6)
		{
		    printf("\n       1. TEACHER'S DAY      2. BLACK DAY");

			printf("\n       3. LITERACY DAY       4. TOURISM DAY");

			ans2=4;
		}

    else if(o2==7)
		{
		    printf("\n       1. 26th JULY         2. 2nd OCTOBER");

			printf("\n       3. 29th AUGUST       4. 22nd APRIL");

            ans2=3;
		}

    else if(o2==8)
		{
            printf("\n       1. KARNATAKA        2. KERALA");

			printf("\n       3. TAMIL NADU       4. ANDHRA PRADESH");

			ans2=3;
		}

    else if(o2==9)
		{
		    printf("\n       1. KUCHIPUDI      2. KATHAK");

			printf("\n       3. MANIPURI       4. MOHINIATTAM");

			ans2=4;
		}

    else if(o2==10)
		{
		    printf("\n       1. SUN GOD      2. KRISHNA");

			printf("\n       3. SHIVA        4. VISHNU");

			ans2=1;
        }

    else if(o2==11)
		{

		    printf("\n       1. HOKKAIDO      2. KAMUROCHO");

			printf("\n       3. HONG KONG       4. TOKYO");

			ans2=4;
		}

    else if(o2==12)
		{
            printf("\n       1. DAVID BECKHAM      2. ZINEDINE ZIDANE");

			printf("\n       3. MICHEL PLATINI      4. DIEGO MARADONA");

			ans2=3;
		}

    else if(o2==13)
		{
            printf("\n       1. GOD OF WAR: RAGNAROK      2. ELDEN RING");

			printf("\n       3. STRAY      4.GENSHIN IMPACT ");

			ans2=4;
		}

    else if(o2==14)
		{
            printf("\n       1.RED       2. NO BUGATTI");

			printf("\n       3.BLACK       4.BLUE ");

			ans2=2;
		}


    else if(o2==15)
		{
            printf("\n       1.GIRL YOU KNOW ITS TRUE       2. ANOTHER DAY IN PARADISE");

			printf("\n       3.CAN'T TOUCH THIS      4.TEARS IN HEAVEN ");

			ans2=1;
		}

    else if(o2==16)
		{
            printf("\n       1.DELHI       2. KOLKATA");

			printf("\n       3.NOIDA      4.MUMBAI ");

			ans2=2;
		}

    else if(o2==17)
		{
            printf("\n       1.UTTAR PRADESH       2.RAJASTHAN");

			printf("\n       3.MAHARASHTRA      4.MADHYA PRADESH ");

			ans2=2;
		}

    else if(o2==18)
		{
            printf("\n       1.SIX       2.SEVEN");

			printf("\n       3.EIGHT      4.NINE ");

			ans2=3;
		}

    
    else if(o2==19)
		{
            printf("\n       1. 4 TH JULY       2. 4 TH JUNE");

			printf("\n       3. 17 TH MAY      4. 17 TH JULY ");

			ans2=1;
		}

    else if(o2==20)    
		{
            printf("\n       1. VENUS       2. MARS");

			printf("\n       3. JUPITER      4. SATURN ");

			ans2=2;
		}
	
    else if(o2==21)
		{
            printf("\n       1. 1492       2.  1520 ");

			printf("\n       3. 1607       4. 1776 ");

			ans2=1;
		}
    
    else if(o2==22)
		{
            printf("\n       1. Beijing       2. Tokyo ");

			printf("\n       3. Seoul      4. Bangkok ");

			ans2=2;
		}
    
    else if(o2==23)
		{
            printf("\n       1. Charles Dickens       2. William Shakespeare");

			printf("\n       3. Jane Austen      4. Mark Twain ");

			ans2=2;
		}
    
    else if(o2==24)
		{
            printf("\n       1. Au       2. Ag");

			printf("\n       3. Fe      4. Cu ");

			ans2=1;
		}
    
    else if(o2==25)
		{
            printf("\n       1. Issac Newton       2. Albert Einstein");

			printf("\n       3. Galileo Galilei      4. Stephen Hawking ");

			ans2=2;
		}
    
    else if(o2==26)
		{
            printf("\n       1. 1905       2. 1912");

			printf("\n       3. 1920      4. 1931 ");

			ans2=2;
		}
    
    else if(o2==27)
		{
            printf("\n       1. Elephant        2. Blue Whale");

			printf("\n       3. Giraffe      4. Gorilla ");

			ans2=2;
		}
    
    else if(o2==28)
		{
            printf("\n       1. Pablo Picasso       2. Leonardo da Vinci");

			printf("\n       3. Vincent van Gogh      4. Claude Monet ");

			ans2=2;
		}
    
    else if(o2==29)
		{
            printf("\n       1. Issac Newton        2. Albert Einstein ");

			printf("\n       3. Neils Bohr      4. Werner Heinsenberg ");

			ans2=4;
		}
    
    else if(o2==30)
		{
            printf("\n       1. Dollar       2. Euro");

			printf("\n       3. Yen      4. Pound ");

			ans2=1;
		}
    
    else if(o2==31)
		{
            printf("\n       1. J.R.R Tolkein       2. J.K. Rowling");

			printf("\n       3. George R.R. Martin      4. Suzanne Collins ");

			ans2=2;
		}
    
    else if(o2==32)
		{
            printf("\n       1. 1961       2. 1969");

			printf("\n       3. 1975      4. 1983 ");

			ans2=2;
		}
    
    else if(o2==33)
		{
            printf("\n       1. Atlantic Ocean       2. Indian Ocean");

			printf("\n       3. Southern Ocean      4. Pacific Ocean ");

			ans2=4;
		}
    
    else if(o2==34)
		{
            printf("\n       1. Iron       2. Gold");

			printf("\n       3. Silver      4. Copper ");

			ans2=1;
		}
        
        // Prompt user for input choice
        printf("\n\n--->ENTER CHOICE: ");
        // Read the user's choice
        scanf("%d", &cha2);


		// Check if the user's choice matches the correct answer
        if (cha2 == ans2) 
        {
            // Check if it is the 15th question
            if (i2 == 15) 
            {
                // Display the winning message for 15 crores
                printf("\n---------------------------->>>15 CRORE %s<<<------------------------------\n\n", st[i2]);
                printf("================================================================================\n");
                // Prompt user to play more games
                printf("\n\n-->WANT TO PLAY MORE GAMES  \n");
                printf("---->1.YES     2.NO   :-   ");
                scanf("%d", &in1);
        
                // Check user's choice to continue or exit
                if (in1 == 1) 
                {
                    // Clear screen and go back to the main menu
                    system("cls");
                    main();
                } 
                
                else 
                {
                    // Exit the program
                    exit(0);
                }
            } 
            
            else 
            {
                // Display the correct answer message and the amount won
                printf("\n\n------------------------------>>>SAHI JAWAB<<<----------------------------------");
                printf("\n---------------------------->>>YOU WON %s<<<------------------------------\n\n", st[i2]);
                printf("================================================================================\n");
            }
        }

        
        // Check if the user's choice is incorrect
        else 
        {
            // Check if it is the first question
            if (i2 == 0) 
            {
                // Display the message for an incorrect answer and final amount as 0 Rs
                printf("\n\n-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-\n\n");
                printf("\n\n---------------------------->>>GALAT JAWAB<<<----------------------------------");
                printf("\n\n-----------------<<<<<<<>>>>>>FINAL AMOUNT 0 Rs<<<<<>>>>>>---------------------");
            } 
            
            else 
            {
                // Display the message for an incorrect answer and the final amount won
                printf("\n\n-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-\n\n");
                printf("\n\n---------------------------->>>GALAT JAWAB<<<--------------------------------");
                printf("\n\n--------------<<<<<<<>>>>>>FINAL AMOUNT %s<<<<<>>>>>>------------------", st[i2 - 1]);
            }
        
            // Prompt user to play more games
            printf("\n\n-->WANT TO PLAY MORE GAMES  \n");
            printf("---->1.YES     2.NO   :-   ");
            scanf("%d", &in1);

            // Check user's choice to continue or exit
            
            if (in1 == 1) 
            {
                // Clear screen and go back to the main menu
                system("cls");
                main();
            } 
            
            else 
            {
                printf("BYE BYE !!");
                exit(0);
                // Exit the program
            }
        }

// Increment the question counter
i2++;
} while (i2 < 16);


}



// Tic-Tac-Toe game function
int ttt() 
{
    char winner = ' ';

    // Reset the game board
    resetboard();

    // Continue the game until there is a winner or no more free spaces
    while (winner == ' ' && checkfspaces() != 0) 
    {
        // Clear screen and display the current state of the board
        system("cls");
        printboard();

        // Player's move
        playermove();
        winner = checkwinner();

        // Check for a winner or if the board is full
        if (winner != ' ' || checkfspaces() == 0) 
        {
            break;
        }

        // Computer's move
        compmove();
        winner = checkwinner();

        // Check for a winner or if the board is full
        if (winner != ' ' || checkfspaces() == 0) 
        {
            break;
        }
    }

    // Display the final state of the board
    printboard();

    // Display the winner or a tie message
    printwinner(winner);

    // Return 0 to indicate successful execution
    return 0;
}

// Function to reset the Tic-Tac-Toe board
void resetboard() 
{
    // Loop through each row and column to reset the board
    for (int i1 = 0; i1 < 3; i1++) 
    {
        for (int j1 = 0; j1 < 3; j1++) 
        {
            // Set each cell to an empty space
            board[i1][j1] = ' ';
        }
    }
}


// Function to print the Tic-Tac-Toe board
void printboard() 
{
    // Print the board layout with cells and separators
    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}

// Function to check the number of free spaces on the Tic-Tac-Toe board
int checkfspaces() 
{
    int fspace = 9;

    // Iterate through the rows and columns of the board
    for (int i1 = 0; i1 < 3; i1++) 
    {
        for (int j1 = 0; j1 < 3; j1++) 
        {
            // If a cell is not empty, decrement the free space count
            if (board[i1][j1] != ' ')
            {
                fspace--;
            }
        }
    }

    return fspace;
}


// Function for the player to make a move in Tic-Tac-Toe
void playermove() 
{
    int x1, y1;

    do 
    {
        printf("-->ENTER ROW [1-3] : ");
        scanf("%d", &x1);
        x1--;

        printf("-->ENTER COLUMN [1-3] : ");
        scanf("%d", &y1);
        y1--;

        // Check if the chosen cell is already occupied
        if (board[x1][y1] != ' ') 
        {
            printf("--->INVALID MOVE!!<---\n");
        } 
        
        else 
        {
            // Place the player's symbol in the chosen cell
            board[x1][y1] = PLAYER;
            break;
        }
    } while (board[x1][y1] != ' ');
}



// Function for the computer to make a move in Tic-Tac-Toe

void compmove() 
{
    srand(time(0));
    int x1, y1;

    if (checkfspaces() > 0) 
    {
        do 
        {
            // Generate random coordinates for the computer's move
            x1 = rand() % 3;
            y1 = rand() % 3;
        } while (board[x1][y1] != ' ');

        // Place the computer's symbol in the randomly chosen cell
        board[x1][y1] = COMPUTER;
    } 
    
    else 
    {
        // If no more free spaces, print the winner
        printwinner(' ');
    }
}


// Function to check the winner in Tic-Tac-Toe
char checkwinner() 
{
    // Check rows for a winner
    for (int i1 = 0; i1 < 3; i1++) 
    {
        if (board[i1][0] == board[i1][1] && board[i1][0] == board[i1][2]) 
        {
            return board[i1][0];
        }
    }

    // Check columns for a winner
    for (int i1 = 0; i1 < 3; i1++) 
    {
        if (board[0][i1] == board[1][i1] && board[0][i1] == board[2][i1]) 
        {
            return board[0][i1];
        }
    }

    // Check diagonals for a winner
    if (board[0][0] == board[1][1] && board[0][0] == board[2][2]) 
    {
        return board[0][0];
    }

    if (board[0][2] == board[1][1] && board[0][2] == board[2][0]) 
    {
        return board[0][2];
    }

    return ' ';  
    // If no winner is found
}

// Function to print the winner and prompt the user for another game
void printwinner(char winner) 
{
    // Check the winner and display the appropriate message
    
    if (winner == PLAYER) 
    {
        printf("-->YOU WIN!!!!<--");
    } 
    
    else if (winner == COMPUTER) 
    {
        printf("-->YOU LOSE!!!<--");
    } 
    
    else 
    {
        printf("-->IT'S A TIE!!!<--");
    }

    // Prompt the user for whether they want to play more games
    
    printf("\n\n-->WANT TO PLAY MORE GAMES  \n");
    printf("---->1.YES     2.NO   :-   ");
    
    scanf("%d", &in2);

    // Check the user's response and take appropriate action
    if (in2 == 1) 
    {
        system("cls");
        main();  // If the user wants to play more games, go back to the main menu
    } 
    
    else 
    {
        printf("BYE BYE !!");
        exit(0);  // If the user chooses not to play more games, exit the program
    }
}




// Function to display the elegant instructions for the magic number game
void tmn() 
{
    printf("=================================== THE MAGIC NUMBER ===================================\n\n");
    printf("-----------------------------------------------------------------------------------------\n");
    printf("Welcome to The Magic Number game! Here are the simple rules:\n\n");
    printf("1. Think of a number between 1 and 31.\n");
    printf("2. Check if your number is present in the given tables.\n");
    printf("3. Enter your response (1 for YES, 2 for NO).\n");
    printf("\n-----------------------------------------------------------------------------------------\n\n");
    table();
}


// Function to display the first table and prompt the user for input
int table() 
{
    int i = 0;  // Initialize i within the scope of the function

    // Display a header indicating the purpose of the table
    printf("---> IS YOUR NUMBER PRESENT IN THIS TABLE <----\n\n");
    printf("                   <TABLE 1>                     \n\n");

    // Display the first table in a 4x4 format
    while (i < 16) 
    {
        for (int p = i; p < i + 4; p++) 
        {
            // Display each element of the table with a separator
            printf("     %s    |", none[p]);
        }

        i = i + 4;  
        // Update the loop control variable
        
        // Display a horizontal line as a separator between rows
        printf("\n   ----------------------------------------------\n");
    }

    // Prompt the user for input
    printf("\n--->> 1 / 2 :- ");
    scanf("%d", &b);

    // Update a variable based on the user's input
    if (b == 1) 
    {
        u = u + 1;  
        // Increment if the user's answer is 1
    } 
    
    else 
    {
        u = u + 0;  
        // Otherwise, keep the variable unchanged
    }

    system("cls");  
    // Clear the console screen

    // Call the next table function to continue the game
    table2();
}



// Function to display the second table and prompt the user for input
int table2() 
{
    int i = 0;  // Initialize i within the scope of the function

    // Display a header indicating the purpose of the table
    printf("---> IS YOUR NUMBER PRESENT IN THIS TABLE <----\n\n");
    printf("                   <TABLE 2>                     \n\n");

    // Display the second table in a 4x4 format
    while (i < 16) 
    {
        for (int p = i; p < i + 4; p++) 
        {
            // Display each element of the table with a separator
            printf("     %s    |", ntwo[p]);
        }

        i = i + 4;  
        // Update the loop control variable
        
        // Display a horizontal line as a separator between rows
        printf("\n   ----------------------------------------------\n");
    }

    // Prompt the user for input
    printf("\n--->> 1 / 2 :- ");
    scanf("%d", &r);

    // Update a variable based on the user's input
    if (r == 1) 
    {
        u = u + 2; 
         // Increment if the user's answer is 1
    } 
    
    else 
    {
        u = u + 0;  
        // Otherwise, keep the variable unchanged
    }

    system("cls");  
    // Clear the console screen

    // Call the next table function to continue the game
    table3();
}




// Function to display the third table and prompt the user for input
int table3() 
{
    int o = 0;  
    // Initialize o within the scope of the function

    // Display a header indicating the purpose of the table
    printf("---> IS YOUR NUMBER PRESENT IN THIS TABLE <----\n\n");
    printf("                   <TABLE 3>                     \n\n");

    // Display the third table in a 4x4 format
    while (o < 16) 
    {
        for (int p = o; p < o + 4; p++) 
        {
            // Display each element of the table with a separator
            printf("     %s    |", nfour[p]);
        }

        o = o + 4;  
        // Update the loop control variable
        
        // Display a horizontal line as a separator between rows
        printf("\n   ----------------------------------------------\n");
    }

    // Prompt the user for input
    printf("\n--->> 1 / 2 :- ");
    scanf("%d", &f);

    // Update a variable based on the user's input
    if (f == 1) 
    {
        u = u + 4;  
        // Increment if the user's answer is 1
    } 
    
    else 
    {
        u = u + 0;  
        // Otherwise, keep the variable unchanged
    }

    system("cls");  
    // Clear the console screen

    // Call the next table function to continue the game
    table4();
}


// Function to display the fourth table and prompt the user for input
int table4() 
{
    int t = 0;  
    // Initialize t within the scope of the function

    // Display a header indicating the purpose of the table
    printf("---> IS YOUR NUMBER PRESENT IN THIS TABLE <----\n\n");
    printf("                   <TABLE 4>                     \n\n");

    // Display the fourth table in a 4x4 format
    while (t < 16) 
    {
        for (int p = t; p < t + 4; p++) 
        {
            // Display each element of the table with a separator
            printf("     %s    |", neight[p]);
        }

        t = t + 4;  
        // Update the loop control variable
        
        // Display a horizontal line as a separator between rows
        printf("\n   ----------------------------------------------\n");
    }

    // Prompt the user for input
    printf("\n--->> 1 / 2 :- ");
    scanf("%d", &g);

    // Update a variable based on the user's input
    if (g == 1) 
    {
        u = u + 8;  
        // Increment if the user's answer is 1
    } 
    
    else 
    {
        u = u + 0; 
         // Otherwise, keep the variable unchanged
    }

    system("cls"); 
     // Clear the console screen

    // Call the next table function to continue the game
    table5();
}



// Function to display the fifth table and prompt the user for input
int table5() 
{
    int w = 0;  
    // Initialize w within the scope of the function

    // Display a header indicating the purpose of the table
    printf("---> IS YOUR NUMBER PRESENT IN THIS TABLE <----\n\n");
    printf("                   <TABLE 5>                     \n\n");

    // Display the fifth table in a 4x4 format
    while (w < 16) 
    {
        for (int p = w; p < w + 4; p++) 
        {
            // Display each element of the table with a separator
            printf("     %s    |", nsixt[p]);
        }

        w = w + 4;  
        // Update the loop control variable
        
        // Display a horizontal line as a separator between rows
        printf("\n   ----------------------------------------------\n");
    }

    // Prompt the user for input
    printf("\n--->> 1 / 2 :- ");
    scanf("%d", &z);

    // Update a variable based on the user's input
    if (z == 1) 
    {
        u = u + 16;  
        // Increment if the user's answer is 1
    } 
    
    else
    {
        u = u + 0;   
        // Otherwise, keep the variable unchanged
    }


    system("cls");  
    // Clear the console screen

    // Display the result of the magic number game
    printf("----------------------------..  THE   ..----------------------------------------\n\n");
    printf("----------------------------.. MAGIC  ..----------------------------------------\n\n");
    printf("----------------------------.. NUMBER ..----------------------------------------\n\n");
    printf("----------------------------..   IS   ..----------------------------------------\n\n");
    printf("----------------------------..   %d   ..----------------------------------------\n\n", u);

    u = 0;  
    // Reset the magic number variable for the next game

    // Prompt the user for whether they want to play more games
    printf("-->WANT TO PLAY MORE GAMES  \n");
    printf("---->1.YES     2.NO   :-   ");

    scanf("%d", &in3);

    // Check the user's response and take appropriate action
    if (in3 == 1) 
    {
        system("cls");
        main();  
        // If the user wants to play more games, go back to the main menu
    } 
    
    else 
    {
        printf("BYE BYE !!");
        exit(0);  
        // If the user chooses not to play more games, exit the program
    }
}