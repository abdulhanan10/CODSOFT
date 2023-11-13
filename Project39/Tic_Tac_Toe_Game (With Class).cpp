//TASK: 03
//Tic Tac Toe Game

#include<iostream>   //include necessary header files
#include<iomanip>
using namespace std;

char board[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };   //array for the game board
int choice = 0, row = 0, col = 0;   //variable declarations
char turn = 'X';   //variable to track the current player's turn
bool draw = false;   //variable to track if the game is a draw

class TicTacToe {   //define a TicTacToe class
private:
    int array[3][3];   //2D array to track the state of the game
public:
    TicTacToe()   //constructor to initialize the array
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                this->array[i][j] = 0;
            }
        }
    }

    void display_board()   //function to display the game board
    {
        cout << endl;
        cout << endl;
        cout << "| --- Player no: 1 (X), Player no: 2 (O) --- |" << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << "     |     |      " << endl;
        cout << "  " << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "  " << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  " << endl;
        cout << "_____|_____|_____" << endl;
        cout << "     |     |     " << endl;
        cout << "  " << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  " << endl;
        cout << "     |     |     " << endl;
        cout << endl;
        cout << endl;
    }

    void player_turn()   //function to handle a player's turn
    {
        if (turn == 'X')
        {
            cout << "//--Player no: 1 (X)  turn: ";
        }
        else if (turn == 'O')
        {
            cout << "//--Player no: 2 (O)  turn: ";
        }
        cin >> choice;

        switch (choice)
        {
        case 1:
            row = 0; col = 0;
            break;
        case 2:
            row = 0; col = 1;
            break;
        case 3:
            row = 0; col = 2;
            break;
        case 4:
            row = 1; col = 0;
            break;
        case 5:
            row = 1; col = 1;
            break;
        case 6:
            row = 1; col = 2;
            break;
        case 7:
            row = 2; col = 0;
            break;
        case 8:
            row = 2; col = 1;
            break;
        case 9:
            row = 2; col = 2;
            break;
        default:
            cout << "Invalid Move";
        }

        if (turn == 'X' && board[row][col] != 'X' && board[row][col] != 'O')
        {
            board[row][col] = 'X';
            turn = 'O';
        }
        else if (turn == 'O' && board[row][col] != 'X' && board[row][col] != 'O')
        {
            board[row][col] = 'O';
            turn = 'X';
        }
        else
        {
            cout << "//---Box already filled, Please choose another one---//" << endl;
            cout << endl;
            player_turn();
        }
        display_board();
    }

    bool gameover()   //function to check if the game is over
    {
        for (int i = 0; i < 3; i++)
        {
            if (board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i]
                && board[0][i] == board[2][i])
            {
                return false;
            }
        }

        if (board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1]
            && board[0][2] == board[2][0])
        {
            return false;
        }

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] != 'X' && board[i][j] != 'O')
                {
                    return true;
                }
            }
        }

        draw = true;
        return false;
    }
};

int main()
{
    TicTacToe variable1;

    cout << setw(70) << "| --- T I C K -- T A C -- T O E -- G A M E --- |" << endl;
    cout << endl;
    cout << endl;
    cout << "| --- FOR 2 PLAYERS --- |" << endl;
    cout << endl;
    cout << endl;

    while (variable1.gameover())
    {
        variable1.display_board();
        variable1.player_turn();
        variable1.gameover();
    }

    if (turn == 'X' && draw == false)
    {
        cout << "| --- Congratulations! Player with 'O' has won the game --- |" << endl;
    }
    else if (turn == 'O' && draw == false)
    {
        cout << "| --- Congratulations! Player with 'X' has won the game --- |" << endl;
    }
    else
    {
        cout << "| --- GAME DRAW! --- |" << endl;
    }

    return 0;
}


