/*
 * Name        : lab_3.cpp
 * Author      : Eduardo Zamora
 * Description : Using branching statements, looping statements and string and
 *               character functions complete the functions
 */

#include "lab_3.h"

/*
 * Tell the story of Goldilocks. For example, if item is "bed" and number is 1,
 * the story will say "This bed is too soft". "item" parameter will be passed
 * in as all lowercase characters
 * Cases:
 * -item: "porridge", number: 1, return "This porridge is too hot"
 * -item: "porridge", number: 2, return "This porridge is too cold"
 * -item: "porridge", number: 3, return "This porridge is just right"
 * -item: "chair", number: 1, return "This chair is too big"
 * -item: "chair", number: 2, return "This chair is too small"
 * -item: "chair", number: 3, return "This chair is just right"
 * -item: "bed", number: 1, return "This bed is too hard"
 * -item: "bed", number: 2, return "This bed is too soft"
 * -item: "bed", number: 3, return "This bed is just right"
 * @param string item - Represents the item in the story ("porridge", "chair",
 *                      and "bed" are the only legal values -- will default to
 *                      "bed" on invalid argument)
 * @param int number - which item (1, 2, and 3 are the only legal values -- will
 *                     default to 3 on invalid argument)
 * @return string - The output string specified in the documentation above
 */
string Goldilocks(string item, int number) {
    string sentence;
    if (item == "porridge"){
        if (number == 1){
            sentence = "This porridge is too hot! D:<";
            return sentence;
        }
        else if (number == 2){
            sentence = "This porridge is too cold! (insert picture of Mr. Freeze)";
            return sentence;
        }
        else if (number == 3 || number != 3){
            sentence = "This porridge is just right. :D";
            return sentence;
        }
    }
    
    else if (item == "chair"){
        if (number == 1){
            sentence = "This chair is too big!";
            return sentence;
        }
        else if (number == 2){
            sentence = "This chair is too small!";
            return sentence;
        }
        else if (number == 3 || number != 3){
            sentence = "This chair is just right.";
            return sentence;
        }
    }
    
    else if (item == "bed" || item != "bed"){
        if (number == 1){
            sentence = "This bed is too hard!";
            return sentence;
        }
        else if (number == 2){
            sentence = "This bed is too soft!";
            return sentence;
        }
        else if (number == 3 || number != 3){
            sentence = "This bed is just right.";
            return sentence;
        }
    }
}

/*
int main(){
    string item;
    int number;
    cin >> item;
    cin >> number;
    string lol = Goldilocks(item, number);
    cout << lol << endl;
    return 0;
}
*/

/*
 * Compute the outcome of a round of a rock-scissor-paper game. Lowercase or
 * uppercase values for player_one and player_two arguments are acceptable.
 * Possible inputs: 'R' rock, 'S' scissor, 'P' paper
 * Conditions
 * -rocks beats scissors
 * -scissors beats paper
 * -paper beats rock
 * @param char player_one - Represents player one's "play" ('R', 'S', or 'P')
 * @param char player_two - Represents player two's "play" ('R', 'S', or 'P')
 * @return int - 1 if player one wins, 2 if player two wins, 3 on a draw,
 *               0 if invalud inputs
 */
int RockScissorPaper(char player_one, char player_two) {
  // YOU MUST USE A SWITCH IN THIS FUNCTION
    switch (player_one){
        case 'R':
            switch (player_two){
                case 'R':
                    return 3;
                case 'P':
                    return 2;
                case 'S':
                    return 1;
                default:
                    return 0;
            }
            
        case 'P':
            switch (player_two){
                case 'R':
                    return 1;
                case 'P':
                    return 3;
                case 'S':
                    return 2;
                default:
                    return 0;
            }
        
        case 'S':
            switch (player_two){
                case 'R':
                    return 2;
                case 'P':
                    return 1;
                case 'S':
                    return 3;
                default:
                    return 0;
            }
        
        default:
            return 0;
    }
}

int main(){
    char p1;
    char p2;
    cin >> p1;
    cin >> p2;
    int lol = RockScissorPaper(p1, p2);
    cout << lol << endl;
}

/*
 * Return the input string with all characters converted to lowercase.
 * @param string input - The string that will be converted to all lowercase
 * @return string - a string containing the converted input string
 */
string ToLower(string input) {
  
}

/*
 * Return the input string with all characters converted to uppercase.
 * @param string input - The string that will be converted to all uppercase
 * @return string - a string containing the converted input string
 */
string ToUpper(string input) {
  // CODE HERE
}