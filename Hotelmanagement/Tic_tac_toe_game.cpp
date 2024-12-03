#include <iostream>
using namespace std;
char space[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int row, column;
bool tie=false;
string play1="";
string play2="";
char token = 'x';
void players()
{
    
    cout << "    |      |   \n";
    cout << " " << space[0][0] << "  |  " << space[0][1] << "   |  " << space[0][2] << endl;
    cout << "____|______|____\n";
    cout << "    |      |   \n";
    cout << " " << space[1][0] << "  |  " << space[1][1] << "   |  " << space[1][2] << endl;

    cout << "____|______|____\n";
    cout << "    |      |   \n";
    cout << " " << space[2][0] << "  |  " << space[2][1] << "   |  " << space[2][2] << endl;

    cout << "____|______|____\n";
}
void function2()
{

    int digit;
    if (token == 'x')
    {
        cout <<play1<< " Please enter: ";
        cin >> digit;
    }
    if (token == '0')
    {
        cout <<play2<< " Please enter: ";
        cin >> digit;
    }
    if (digit == 1)
    {
        row = 0;
        column = 0;
    }
    if (digit == 2)
    {
        row = 0;
        column = 1;
    }
    if (digit == 3)
    {
        row = 0;
        column = 2;
    }
    if (digit == 4)
    {
        row = 1;
        column = 0;
    }
    if (digit == 5)
    {
        row = 1;
        column = 1;
    }
    if (digit == 6)
    {
        row = 1;
        column = 2;
    }
    if (digit == 7)
    {
        row = 2;
        column = 0;
    }
    if (digit == 8)
    {
        row = 2;
        column = 1;
    }
    if (digit == 9)
    {
        row = 2;
        column = 2;
    }

    else if(digit<1 || digit > 9)
    {
        cout << "Invalid !!!\n";
    }
    if (token == 'x' && space[row][column] != 'x' & space[row][column] != '0')
    {
        space[row][column] = 'x';
        token = '0';
    }
    else if (token = '0' && space[row][column] != 'x' && space[row][column] != '0')
       { space[row][column] = '0';
            token = 'x';
       }
         else
        {
            cout << "There is no empty space! " << endl;
            function2();
        }
        players();
}
//Check who wins and validates the score it also checks if no body wins
bool functionthree()
{
    for (int i = 0; i < 3; i++)
    {
        if (space[i][0] == space[i][1] && space[i][0] == space[i][2] || space[0][i] == space[1][i] && space[0][i] == space[2]
                                                                                                                          [i])
        {

            return true;
        }
        if (space[0][0] == space[1][1] && space[1][1] == space[2][2] || space[0][2] == space[1][1] && space[1][1] == space[2][0])
        {
            return true;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (space[i][j] != 'x' && space[i][j] != '0')
            {
                return false;
            }
        }
    }
    tie=true;
    return false;
}
int main()
{
    cout<<"Enter the name of the first player: \n";
    getline(cin, play1);
    cout<<"Enter the name of the second player: \n";
    getline(cin, play2);
    cout<<play1<<" is player1 so he plays first\n";
        cout<<play2<<" is player1 so he plays second\n\n";
while(!functionthree())
{
players();
function2();
functionthree();

}
if(token == 'x' && tie == false)
{
    cout<<play2<<" wins \n";
}
else if (token == '0' && tie==false){
    cout<<play1<<" wins\n";
}
else {
    cout<<"It is a draw \n";
}
return 0;
}