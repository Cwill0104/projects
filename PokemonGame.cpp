#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main () {
    string userName;
    int pokemonChoice;
    string pokemonName;
    int numAreas;
    int numWildPokemon;
    int numCaughtPokemon;
    int keepGoing;
    bool continueInArea;
    int catchOrRun;


    cout << "Welcome to the world of Pokemon!" << endl;
    cout << "What is your name? " << endl;
    cin >> userName;
    cout << "Hello " << userName << "!" << endl;
    cout << endl;

    cout << "Choose your starter Pokemon! " << endl;
    cout << "\t1. Balbasaur" << endl;
    cout << "\t2. Charmander" << endl;
    cout << "\t3. Squirtle" << endl;
    cin >> pokemonChoice;

    while (pokemonChoice!= 1 && pokemonChoice != 2 && pokemonChoice != 3){ //Reprompts the user to chose a Pokemon if they input an invalid number
        cout << "Invalid input, please choose from the following options." << endl;
        cout << "Choose your starter Pokemon! " << endl;
        cout << "\t1. Balbasaur" << endl;
        cout << "\t2. Charmander" << endl;
        cout << "\t3. Squirtle" << endl;
        cin >> pokemonChoice;
    }
  

    switch (pokemonChoice) //tells the user which Pokemon they chose 
    {
    case 1:
        cout << endl;
        cout << "You chose Balbasaur!" << endl;
        cout << "You are now ready to start your adventure!" << endl;
        pokemonName = "Balbasaur";
        break;
    case 2:
        cout << endl;
        cout << "You chose Charmander!" << endl;
        cout << "You are now ready to start your adventure!" << endl;
        pokemonName = "Charmander";
        break;
    case 3:
        cout << endl;
        cout << "You chose Squirtle!" << endl;
        cout << "You are now ready to start your adventure!" << endl;
        pokemonName = "Squirtle";
        break;
    
    default:
        break;
    }


    
//Each while loop represents and Area
    for (int i = 0; i < 3 ; i++  ){
        numWildPokemon = 0;
        numCaughtPokemon = 0;
        while (i == 0 ){ //AREA 1
            cout << "You are now in Area 1" << endl;
            cout << "You took a step" << endl;
            for (int j = 2; j <= 6; j = j + 1) //simulates the player's character walking 
                cout << "You took " << j << " steps" << endl;
                         

            cout << "A wild Pokemon appeard!" << endl << "\t1. Try to catch it" << endl << "\t2. Run away" << endl;
            numWildPokemon++;
            cin >> catchOrRun;
            while (catchOrRun != 1 && catchOrRun != 2){//The user inputs an invalid answer
                cout << "Invalid choice  select again." << endl;
                cout << "A wild Pokemon appeard!" << endl << "\t1. Try to catch it" << endl << "\t2. Run away" << endl;
                cin >> catchOrRun;
            }
            while (catchOrRun == 1 || catchOrRun ==2 ){
                if (catchOrRun == 1) {//the user decided to catch the Pokemon
                    int value = (rand() %2) + 1; // 50% chance the user will catch the pokemon
                    if (value == 1){//the user did not catch the Pokemon
                        cout << "Oh no! The wild Pokemon got away." << endl;
                        cout << "You have encountered " << numWildPokemon << " wild Pokemon in this area so far" << endl;
                        catchOrRun = 0;
                    }
                    else if (value == 2) {//the user caught the Pokemon
                        cout << "You caught the wild Pokemon!" << endl;
                        cout << "You have encountered " << numWildPokemon << " wild Pokemon in this area so far" << endl;
                        numCaughtPokemon = numCaughtPokemon + 1;
                        catchOrRun = 0;
                    }
                }
                else if (catchOrRun == 2) {//the user decided to run and not catch the Pokemon
                    cout << "You ran away from the wild Pokemon." << endl;
                    cout << "You have encountered " << numWildPokemon << " wild Pokemon in this area so far" << endl;
                    catchOrRun = 0;
                }
                

                cout << "Would you like to continue exploring this area?" << endl <<  "\t1. Yes" << endl << "\t2. No" << endl;
                cin >> keepGoing;
                  while (keepGoing < 1 || keepGoing > 2){//user inputs invalid answer
                    cout << "Invalid choice  select again." << endl;
                    cout << "Would you like to continue exploring this area?" << endl <<  "\t1. Yes" << endl << "\t2. No" << endl;
                    cin >> keepGoing;
                }
                do{//Where the user decides to either keep going or move to next Area
                    if (keepGoing == 1){//staying in the Area
                        cout << "You took a step" << endl;
                        for (int j = 2; j <= 6; j = j + 1) //simulates the player's character walking 
                            cout << "You took " << j << " steps" << endl;
                        cout << "A wild Pokemon appeard!" << endl << "\t1. Try to catch it" << endl << "\t2. Run away" << endl;    
                        numWildPokemon++;
                        if (numWildPokemon > 5) {//Moves to next area after seeing 5 wild Pokemon
                            cout << endl;
                            cout << "You've already encountered 5 wild Pokemon here. Let's move to the next area!" ;
                            break;
                        }
                        cin >> catchOrRun;
                        keepGoing = 0;
                    }
                    else if (keepGoing == 2){//leaving the Area
                        cout << endl;
                        cout << "You have chosen to leave this area." ;
                        break;
                    }
                    break;   
                }
                while (keepGoing == 1 || keepGoing == 2);
                
            }
        i = i + 1;//Goes to next Area
                          
        }

//________________________________________________________________________________________________
       numWildPokemon = 0;
        while (i == 1 ){ //AREA 2
            cout << endl;
            cout << "You are now in Area 2" << endl;
            cout << "You took a step" << endl;
            for (int j = 2; j <= 6; j = j + 1) //simulates the player's character walking 
                cout << "You took " << j << " steps" << endl;
                         
            cout << "A wild Pokemon appeard!" << endl << "\t1. Try to catch it" << endl << "\t2. Run away" << endl;
            numWildPokemon++;

            cin >> catchOrRun;
            while (catchOrRun != 1 && catchOrRun != 2){//user inputs invalid answer
                cout << "Invalid choice  select again." << endl;
                cout << "A wild Pokemon appeard!" << endl << "\t1. Try to catch it" << endl << "\t2. Run away" << endl;
                cin >> catchOrRun;
            }
            while (catchOrRun == 1 || catchOrRun ==2 ){
                if (catchOrRun == 1) {//the user decided to catch the Pokemon
                    int value = (rand() %2) + 1; // 50% chance the user will catch the pokemon
                    if (value == 1){//the user did not catch the Pokemon
                        cout << "Oh no! The wild Pokemon got away." << endl;
                        cout << "You have encountered " << numWildPokemon << " wild Pokemon in this area so far" << endl;
                        catchOrRun = 0;
                    }
                    else if (value == 2) {//the user caught the Pokemon
                        cout << "You caught the wild Pokemon!" << endl;
                        cout << "You have encountered " << numWildPokemon << " wild Pokemon in this area so far" << endl;
                        numCaughtPokemon = numCaughtPokemon + 1;
                        catchOrRun = 0;
                    }
                }
                else if (catchOrRun == 2) {//the user decided to run and not catch the Pokemon
                    cout << "You ran away from the wild Pokemon." << endl;
                    cout << "You have encountered " << numWildPokemon << " wild Pokemon in this area so far" << endl;
                    catchOrRun = 0;
                }
                


                cout << "Would you like to continue exploring this area?" << endl <<  "\t1. Yes" << endl << "\t2. No" << endl;
                cin >> keepGoing;
                while (keepGoing < 1 || keepGoing > 2){//Runs if the user inputs something other than 1 or 2 for answer
                    cout << "Invalid choice  select again." << endl;
                    cout << "Would you like to continue exploring this area?" << endl <<  "\t1. Yes" << endl << "\t2. No" << endl;
                    cin >> keepGoing;
                }
                do{ 
                    if (keepGoing == 1){//staying in the Area
                        cout << "You took a step" << endl;
                        for (int j = 2; j <= 6; j = j + 1) //simulates the player's character walking 
                            cout << "You took " << j << " steps" << endl;
                        cout << "A wild Pokemon appeard!" << endl << "\t1. Try to catch it" << endl << "\t2. Run away" << endl;    
                        numWildPokemon++;
                        if (numWildPokemon > 5) {
                            cout << endl;
                            cout << "You've already encountered 5 wild Pokemon here. Let's move to the next area!" ;
                            break;
                        }
                        cin >> catchOrRun;
                        keepGoing = 0;
                    }
                    else if (keepGoing == 2){//leaving the Area
                        cout << endl;
                        cout << "You have chosen to leave this area." ;
                        break;
                    }
                    break;   
                }
                while (keepGoing == 1 || keepGoing == 2);
                
            }
        i = i +1;
                          
        }


//_____________________________________________________________________________________________________
        numWildPokemon = 0;
        while (i == 2 ){ //AREA 3
            cout << endl;
            cout << "You are now in Area 3" << endl;
            cout << "You took a step" << endl;
            for (int j = 2; j <= 6; j = j + 1) //simulates the player's character walking 
                cout << "You took " << j << " steps" << endl;
                         
            cout << "A wild Pokemon appeard!" << endl << "\t1. Try to catch it" << endl << "\t2. Run away" << endl;
            numWildPokemon++;

            cin >> catchOrRun;
            while (catchOrRun != 1 && catchOrRun != 2){
                cout << "Invalid choice  select again." << endl;
                cout << "A wild Pokemon appeard!" << endl << "\t1. Try to catch it" << endl << "\t2. Run away" << endl;
                cin >> catchOrRun;
            }
            while (catchOrRun == 1 || catchOrRun ==2 ){
                if (catchOrRun == 1) {//the user decided to catch the Pokemon
                    int value = (rand() %2) + 1; // 50% chance the user will catch the pokemon
                    if (value == 1){//the user did not catch the Pokemon
                        cout << "Oh no! The wild Pokemon got away." << endl;
                        cout << "You have encountered " << numWildPokemon << " wild Pokemon in this area so far" << endl;
                        catchOrRun = 0;
                    }
                    else if (value == 2) {//the user caught the Pokemon
                        cout << "You caught the wild Pokemon!" << endl;
                        cout << "You have encountered " << numWildPokemon << " wild Pokemon in this area so far" << endl;
                         numCaughtPokemon = numCaughtPokemon + 1;
                        catchOrRun = 0;
                    }
                }
                else if (catchOrRun == 2) {//the user decided to run and not catch the Pokemon
                    cout << "You ran away from the wild Pokemon." << endl;
                    cout << "You have encountered " << numWildPokemon << " wild Pokemon in this area so far" << endl;
                    catchOrRun = 0;
                }
                


                cout << "Would you like to continue exploring this area?" << endl <<  "\t1. Yes" << endl << "\t2. No" << endl;
                cin >> keepGoing;
                while (keepGoing < 1 || keepGoing > 2){//Runs if the user inputs something other than 1 or 2 for answer
                    cout << "Invalid choice  select again." << endl;
                    cout << "Would you like to continue exploring this area?" << endl <<  "\t1. Yes" << endl << "\t2. No" << endl;
                    cin >> keepGoing;
                }
                do{ 
                    if (keepGoing == 1){//staying in the Area
                        cout << "You took a step" << endl;
                        for (int j = 2; j <= 6; j = j + 1) //simulates the player's character walking 
                            cout << "You took " << j << " steps" << endl;
                        cout << "A wild Pokemon appeard!" << endl << "\t1. Try to catch it" << endl << "\t2. Run away" << endl;    
                        numWildPokemon++;
                        if (numWildPokemon > 5) {
                            cout << endl;
                            cout << "You've already encountered 5 wild Pokemon here. Thats enough." << endl;
                            cout << "Congratulations " << userName << ", you and " << pokemonName << " have completed your adventure!" << endl;
                            cout << "You caught " << numCaughtPokemon << " wild Pokemon";
                            break;
                        }
                        cin >> catchOrRun;
                        keepGoing = 0;
                    }
                    else if (keepGoing == 2){//leaving the Area
                        cout << endl;
                        cout << "You have chosen to leave this area." << endl;
                        cout << "Congratulations " << userName << ", you and " << pokemonName << " have completed your adventure!" << endl;
                        cout << "You caught " << numCaughtPokemon << " wild Pokemon!";
                        break;
                    }
                    break;   
                }
                while (keepGoing == 1 || keepGoing == 2);
                
            }
        i = i +1;
                          
        }




















    }
    


    return 0;
} 
