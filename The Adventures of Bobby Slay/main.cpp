//The following program is a text-based game that will 
//feature a kid as he explores the mythical world
//of Puzzulia

// Ian Lasky CSC 5 -48838   
// Alexander Butarita   
// Last Modified Date: 12/15/2019



#include <cstdlib>
#include <iostream>
#include <cmath>
#include <string>
#include <ctime>
#include <iomanip>

const int MAXCHAR = 30;

typedef char StringType30[MAXCHAR + 1];

//Function prototypes

void enterA();
bool traveler();
bool cave();
void guessingGame();
void closingCredits();
char ending(StringType30, bool, bool);

using namespace std;

struct guess 
{ 
    float guessnum;
    float number;
    float tries;
};

struct trav
{
    bool key1;
    char theSamaritan;
};

struct pathWay
{
    bool key2;
    char pathChoice;
};

struct entering
{
    char enter;
};

struct menuAndSystem
{
    char start;
    char restart;
};


int main()
{
    menuAndSystem option;
    
    do
    {
 //Title Generated at: http://patorjk.com/software/taag/#p=display&f=Graffiti&t=Type%20Something%20
    
    cout <<  

    "\n\n,--,--'.          ,                     .           \n" 
    "`- |   |-. ,-.    )   ,-. ,-. ,-. ,-. ,-|           \n" 
    " , |   | | |-'   /    |-' | | |-' | | | |           \n"
    " `-'   ' ' `-'   `--' `-' `-| `-' ' ' `-^           \n"
    "                           ,|                       \n"
    "                           `'                       \n"
    "        ,-,---.     .   .          .---. .          \n"
    ",-. ,'   '|___| ,-. |-. |-. . .    |___  |  ,-. . . \n"
    "| | |-   ,|   | | | | | | | | |        | |  ,-| | | \n"
    "`-' |   `-^---' `-' ^-' ^-' `-|    `---' `' `-^ `-| \n"
    "    '                        /|                  /| \n"
    "                            `-'                 `-' \n\n";
 
    //Menu system
    cout << "Input any key to start.\t\t('x' quits the program)\t\t\t\t('y'?)" << endl << endl;
    cin >> option.start;
    
    if (option.start != 'x' && option.start != 'y')
     cout << "\nAnd thus, the story begins..." << endl;
     else if (option.start == 'y')
        cout <<
        "__   __          _                                     \n" //Secret screen with no purpose whatsoever
        "| | / /         ( )                                    \n"                
        " | V /___  _   _|/ _ __ ___    __ _                    \n"
        "  | // _ || | | | | '__/ _ |  / _` |                   \n"
        "  | | (_) | |_| | | | |  __/ | (_| |                   \n"
        "  |_/|___/ |__,_| |_|  |___|  |__,_|                   \n"
        "                                                       \n"
        "                                                       \n"
        "                      _                                \n"
        "                     | |                               \n"
        " ___ _ __   ___  __ _| | ___   _    ___  _ __   ___    \n"
        "/ __| '_ | / _ |/ _` | |/ / | | |  / _ || '_  |/ _ |   \n"
        "|__ | | | |  __/ (_| |   <| |_| | | (_) | | | |  __/   \n"
        "|___/_| |_||___||__,_|_||_\\__, |  |___||_| |_||___|( )\n"
        "                            __/ |                   |/ \n"
        "                           |___/                       \n"
        "                      _ _                      ___     \n"
        "                     ( ) |                    |__ |    \n"
        "  __ _ _ __ ___ _ __ |/| |_   _   _  ___  _   _  ) |   \n"
        " / _` | '__/ _ | '_ |  | __| | | | |/ _ || | | |/ /    \n"
        "| (_| | | |  __/ | | | | |_  | |_| | (_) | |_| |_|     \n"
        " |__,_|_|  |___|_| |_| |__|  |__,| |___/ |__,_/(_)     \n"
        "                               __/ |                   \n"
        "                              |___/                    \n";
    else return(0);
    
 
    {
     
        //Defining local variables
        trav action1;
        pathWay action2;
        action1.key1 = false;
        action2.key2 = false;
        StringType30 name;
    
        enterA();
    
        //Introduction to world
    
        cout << "In the mythical world of Puzzulia, survival of the fittest was not based\n"
            "on the physical or athletic skills of an individual, but on their ability to\n"
            "efficiently solve puzzles.\n";
        enterA();
        cout << "However, among those puzzle solving individuals were the great puzzle solving\n"
            "individuals.\n";
        enterA();
        cout << "One such individual is Bobby Slay, puzzler of puzzlers.";
        enterA();
        cout << "Bobby used his puzzle-solving abilities to slaughter and slay anyone who dared\n"
            "to cross his path.\n";
        enterA();
        cout << "However, there was one thing that Bobby sought and had acquired...\n";
        enterA();
        cout << "THE LEGENDARY STONE OF |ATHANASIA|, the key to immortality.\n";
        enterA();
        cout << "However, once Bobby had acquired this stone, he disappeared.\n";
        enterA();
        cout << "Many had embarked on journeys in search of Bobby and his immortality stone.\n";
        enterA();
        cout << "Among these adventurers, there was also a young boy in search of, not the stone,\n"
            "but Bobby Slay. Bobby slay was his greatest hero, every young puzzlers role-model\n";
        enterA();
        cout << "This young boy's name was...\n";
        enterA();
        cout << "'MOM! WHAT WAS THE NAME OF THAT ONE KID WHO WENT ON A JOURNEY TO FIND BOBBY SLAY?'\n";
        cout << "\nPlease enter your first name:\n\n";
    
        //Establishing the users name
    
        cin >> name;
        
        cout << "\nAh, ya mean little ole rascal, " << name << "?\n";
        enterA();
        cout << "Yeah, " << name << "! Thats the name!\n";
        enterA();
        cout << "And so " << name << " begins his/her little adventure...\n"; 
        enterA();
        
        
        cout << "As you're leaving your hometown, you come across an injured traveler. \n";
        enterA();
    
        action1.key1 = traveler();
    
        enterA();
        cout << "And so, you continue on your journey.\n";
        enterA();
        cout << "All of a sudden, while traveling through the woods, a man jumps out of a tree and\n\n"
            "approaches you while laughing.\n";
        enterA();
        cout << "HAHAHA, you thought could casually stroll forest without running into me?!\n"
            "The 'Lord of Numbers'?!\n";
        enterA();
        cout << "I present to you one of my most difficult puzzles...\n";
        enterA();
        cout << "'The Guessing Game'!\n\n";
    
        guessingGame();
    
        enterA();
        cout << "You continue your journey and you come across a large and mystical mountain.\n";
        enterA();
        cout << "The only way to get past this mountain is if you enter a cave, so you do.\n";
        enterA();
        cout << "The cave is illuminated by naturally occurring minerals that provide a calm, blue, light.\n";
        enterA();
        cout << "However, as you are traversing this awe-inspiring geological structure, you come across"
                "\na situation in which you have to decide what path to take.\n";
        enterA();
       
        action2.key2 = cave();
        
        enterA();
        cout << "As your little journey comes to a conclusion, you come across a small pond.\n";
       
        ending(name, action1.key1, action2.key2);
        
        closingCredits();
   
        enterA();
    
        cout << "Would you like to retry the game?('y' = yes, any other key to quit)\n\n";
        cin >> option.restart;
    
    }
    }
    while (option.restart == 'y' || option.restart == 'Y');
    
    return 0;
}


//Function enterA
//Used for continuing text

void enterA()
{
    entering response;
    cout << "\nEnter 'a' to continue\n\n";
    cin >> response.enter;
    cout << "\n";
    while(response.enter != 'a')
    {
        cout << "\n";
        cin >> response.enter;
    }
    
}

//Function traveler
//First in-game situation
//No input validation, program just continues if user enters invalid data

bool traveler()
{
    trav action1;
    do
    {
    action1.key1 = false;
    char retry;
    cout << "\nDo you:\n"
            "A: Offer the traveler a trip to a nearby motel.\n"
            "B: Leave the traveler and assume that someone else might help.\n"
            "C: Attempt to steal some of his belongings.\n\n";
    cin >> action1.theSamaritan;
    
    if (action1.theSamaritan == 'a' || action1.theSamaritan == 'A')
    {    
        cout << "\nThe traveler is very appreciative of your kind act and hands you\n"
                "what seems to be the piece of a key. This might help you along your journey.\n";
        action1.key1 = true;
                    //I want this key to allow players to unlock
                    //a secret in the second part of this game
    }
        else if (action1.theSamaritan == 'b' || action1.theSamaritan == 'B')
        {
            cout << "\nYou watch as the traveler struggles to crawl. However, his struggles\n"
                    "do not concern you.\n";
        }
        else if (action1.theSamaritan == 'c' || action1.theSamaritan == 'C')
        {    
            cout << "\nAs you try to grab his fine leathery jacket, he reaches for has dagger\n"
                    "and you suddenly find yourself slowly bleeding into the void\n\n"
                    "GAME OVER\n\n";
        do
        {
            cout << "Would you like to retry this situation? (y/n)\n";
            cin >> retry;
        } while (retry != 'y' && retry != 'Y' && retry != 'n' && retry != 'N');
        
        if(retry == 'y' || retry == 'Y')
        {
            action1.key1 = traveler();
        }
            else
            {
            exit(0);
            }
        }
        else 
            cout << "Invalid input. Retry the situation: \n\n";
    
    } while (action1.theSamaritan != 'a' && action1.theSamaritan != 'A' && action1.theSamaritan != 'b' &&
            action1.theSamaritan != 'B' && action1.theSamaritan != 'c' && action1.theSamaritan != 'C');
    return action1.key1;
}



void guessingGame() //Warning, this game is extremely easy, don't mind
{
    cin.clear();
    cin.ignore();
    guess game;
    game.tries = 0;
    game.number = 0;
    game.guessnum = 0;
    char retry;
    
    srand(time(0));
    game.number = rand() % 5 + 1;
    
        cout << "\nTry to guess a number 1-5!\n\n"
                "You get 3 tries!\n\n"
                "Enter a number:\n\n";
    do
    {
        cin >> game.guessnum;
        game.tries++;
    
        do {
         if (game.guessnum > game.number && game.guessnum <= 5)
            {
                cout << "\nHAHA, that number is too large!\n\n";
    
            }

            else if (game.guessnum < game.number && game.guessnum >= 1)
            {
                cout << "\nHAHA, that number is too small!\n\n";           
            }

            else if (game.guessnum == game.number)
            {
                cout << "\nGOSH DARN IT! You got me in " << game.tries << " guesses!\n\n"
                                "You win this time...\n";
            }
            else if (cin.fail())
            {
                cout << "I said NUMBER, not Egyptian hieroglyph!\n\n";
                cin.clear();
                cin.ignore();
                game.tries = 0;
            }
            else if (game.guessnum != 1 || game.guessnum != 2 || game.guessnum  != 3 ||
                    game.guessnum != 4 || game.guessnum != 5 || game.guessnum > 5 || game.guessnum < 1)
            {
                cin.clear();
                cin.ignore();
                cout << "I said a number 1-5, not -2430 to 63990. Go on, guess a number.\n" << "1-5, if I haven't made it clear enough.\n\n";
                game.tries = 0;
                
            } 
        } while(cin.fail());


    } while (game.guessnum != game.number && game.tries <= 2); 
    
    if (game.guessnum != game.number && game.tries == 3)
        {
        {
            cout << "\nBetter luck next time. Loser!\n\n"
                    "GAME OVER\n\n";
        do
        {
            cout << "Would you like to retry this situation? (y/n)\n";
            cin >> retry;
        } while (retry != 'y' && retry != 'Y' && retry != 'n' && retry != 'N');
        }
        if (retry == 'y' || retry == 'Y')
            {
                guessingGame();
            }
                else
                {
                    exit(0);
                }
        }           
}


bool cave()
{
    pathWay action2;
    do
    {
    action2.key2 = false;
    char retry;
        cout << "\nDo you:\n"
                "A: Take the path that is dimly lit and has eerie animal sounds emanating from the end of it.\n"
                "B: Take the path that is also dimly lit but has footprints from previous cave explorers.\n"
                "C: Take the path that has a strong light at the end of it.\n\n";
    cin >> action2.pathChoice;
    if (action2.pathChoice == 'a' || action2.pathChoice == 'A')
    {    
        cout << "\nYou take the path that is radiating with the predatory sounds of wild animals.\n"
                "Unfortunately, since this isn't a movie, you are met with the grim realization\n"
                "that you have just entered the shelter of an angry mother bear defensively surrounding"
                "\nher cubs.\n";
                enterA();
                cout << "You do get another chance to see the light of day.\n\n";
                enterA();
                cout << "GAME OVER\n\n";
        do
        {
            cout << "Would you like to retry this situation? (y/n)\n";
            cin >> retry;
        } while (retry != 'y' && retry != 'Y' && retry != 'n' && retry != 'N');
        
        if(retry == 'y' || retry == 'Y')
        {
            action2.key2 = cave();
        }
            else
            {
                exit(0);
            }
    }
    else if (action2.pathChoice == 'b' || action2.pathChoice == 'B')
    {    
        cout << "\nYou take the a dark path that is riddled with the footprints of previous cave explorers,\n"
                "As you traverse the cave, you come across a rotten treasure chest. You open it.\n"
                "Coincidentally, the chest contained the second piece of your key!\n"
                "You leave the cave unharmed. Your journey continues.\n";
        action2.key2 = true;
                    //I want this key to allow players to unlock
                    //a secret in the second part of this game
    }
    else if (action2.pathChoice == 'c' || action2.pathChoice == 'C')
    {
        cout << "\nYou take the path that has a strong light at the end of it.\n"
                "Fortunately, you leave the cave unharmed. Your journey continues.\n";
    }
    else 
        cout << "Invalid input. Retry the situation: \n\n";
    
    } while (action2.pathChoice != 'a' && action2.pathChoice != 'A' && action2.pathChoice != 'b' &&
            action2.pathChoice != 'B' && action2.pathChoice != 'c' && action2.pathChoice != 'C');
    return action2.key2;
}

char ending(StringType30 name, bool key1, bool key2)
{
    trav action1;
    pathWay action2;
    
    
    if (key1 == false && key2 == false)
    {
        cout << "You look in the pond, and seeing your reflection, you realize something.\n";
        enterA();
        cout << "It isn't a about the destination, but the journey!\n";
        enterA();
        cout << "And so, " << name << " experiences a boring and cliche ending in which he becomes spiritually content with himself.\n";
        enterA();
        cout << "Little does " << name << " know, there was more to this journey than one would assume...\n";
        enterA();
        cout << "THE END\n";
    }
        else if (key1 == true && key2 == false)
        {
            cout << "You look in the pond and notice something peculiar: a trapdoor";
            enterA();
            cout << "However, it requires a key. You look in your pockets and realize that that you\n"
                    "have the key that the injured traveler gave you.\n";
            enterA();
            cout << "Unfortunately, you only have part of the key. Not that it mattered anyways.\n";
            enterA();
            cout << "You go for a swim and then continue your journey\n";
            enterA();
            cout << "After decades of journeying, " << name << " grow old and is left with nothing but memories\n"
                    "and tales to tell.\n";
            enterA();
            cout << name << " wonders: 'what if there was more to it?' Indeed, he was correct.\n";
            enterA();
            cout << "THE END\n\n";
            enterA();
            cout << "Not gunna lie. That was a pretty anti-climatic ending. Don't ya think? Turns out there are\n"
                    "some fan made endings as well. Ima give em a read.\n\n";
            
        }
        else if (key1 == false && key2 == true)
        {
            cout << "You look in the pond and notice something peculiar: a trapdoor";
            enterA();
            cout << "However, it requires a key. You look in your pockets and realize that that you\n"
                    "have the key that you found while traversing the mystical cave.\n";
            enterA();
            cout << "Unfortunately, you only have part of the key. Not that it mattered anyways.\n";
            enterA();
            cout << "You go for a swim and then continue your journey\n";
            enterA();
            cout << "After decades of journeying, " << name << " grow old and is left with nothing but memories\n"
                    "and tales to tell.\n";
            enterA();
            cout << name << " wonders: 'what if there was more to it?' Indeed, he was correct.\n";
            enterA();
            cout << "THE END\n\n";
            enterA();
            cout << "Not gunna lie. That was a pretty anti-climatic ending. Don't ya think? Turns out there are\n"
                    "some fan made endings as well. Ima give em a read.\n\n";
            
        }
        else if (key1 == true && key2 == true)
        {
            cout << "You look in the pond and notice something peculiar: a trapdoor.\n";
            enterA();
            cout << "However, it requires a key. You look in your pockets and realize that that you\n"
                    "have the part of the key that you found while traversing the mystical cave and the other part\n"
                    "that the injured traveler gave you.\n";
            enterA();
            cout << "You combine the two parts, insert the key, and behold: THE LEGENDARY STONE OF |ATHANASIA|.\n";
            enterA();
            cout << "Whats this? A letter?\n";
            enterA();
            cout << "'Dear adventurer,\n\n"
                    "If you found this letter, it means that you were successful in attaining THE LEGENDARY STONE OF |ATHANASIA|.\n"
                    "As it turns out, immortality isn't as impressive as one would think, so I decided to leave this stone to someone\n"
                    "who might appreciate it more. Enjoy you travels.'\n";
            enterA();
            cout << "-Bobby Slay\n";
            enterA();
            cout << "Following this experience, " << name << " journeyed and enjoyed his life until he, too, grew tired of being immortal.\n"
                    "Thus, the cycle of leaving THE LEGENDARY STONE OF |ATHANASIA| to be found and experienced by brave adventurers\n"
                    "was a Puzzulian tradition that lasted until the end of time.\n";
            enterA();
            cout << "THE END\n\n";
                      
        }
           
}

void closingCredits()
{
    cout << "No online influences used for project 2."
            "\n\nHave a great winter.\n\n";  
}
