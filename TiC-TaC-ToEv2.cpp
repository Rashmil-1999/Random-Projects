// Hello Guys this is me first attempt in making a working game TiC-TaC-ToE
#include<iostream>
#include<string>
using namespace std;
//declaration of various funtions
void print_board(string board[3][3]);// to pass the matrix we need to specify the size of the matrix but in case of linear array it was irrelevent!
void play_game(string board[3][3]);// main function which calls all the other functions
void p1(string board[3][3]);//player X
void p2(string board[3][3]);//player Y
int check_board(string board[3][3]);//this function checks the board
int main()
{
    char input_from_user;
    while (1)//it was done to create an infinite loop
    {
        cout<<"Do you wish to Play TiC-TaC-ToE?\n(Y/N)\n";
        cin>>input_from_user;
        if (input_from_user == 'Y' || input_from_user == 'y')
        {
            string board[3][3] = {{"1,1","1,2","1,3"},{"2,1","2,2","2,3"},{"3,1","3,2","3,3"}};//the declaration is done here so that the matrix board gets reinitialised by these values after a game
            play_game(board);
        }
        else{break;}
    }
    return 0;
}
void print_board(string board[3][3])
{
    cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;
    cout<<" "<<board[0][0]<<" "<<"|"<<" "<<board[0][1]<<" "<<"|"<<" "<<board[0][2]<<endl;
    cout<<"_____"<<"|"<<"_____"<<"|"<<"_____"<<endl;
    cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;
    cout<<" "<<board[1][0]<<" "<<"|"<<" "<<board[1][1]<<" "<<"|"<<" "<<board[1][2]<<endl;
    cout<<"_____"<<"|"<<"_____"<<"|"<<"_____"<<endl;
    cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;
    cout<<" "<<board[2][0]<<" "<<"|"<<" "<<board[2][1]<<" "<<"|"<<" "<<board[2][2]<<endl;
    cout<<"     "<<"|"<<"     "<<"|"<<"     "<<endl;

}
void play_game(string board[3][3])
{
   int counter=1;
   int val;
   print_board(board);

    while (counter<=9)
    {
        p1(board);//calling the player X to make a move
        print_board(board);
        val=check_board(board);//check board needs to be performed after every move so that as soon as a player wins the game ends right there
        if (val == 1)
        {
            cout<<"X WINS !! Congratulations!!\n";
            break;
        }
        counter+=1;//keeping the count of the moves
        if (counter<9)//we dont want this player to play after the 9th move because there willl be no space on the grind and will raise an error
        {
        p2(board);
        print_board(board);
        val=check_board(board);
        if (val == 1)
            {
                cout<<"O WINS !! Congratulations!!\n";
                break;
            }
        }
        else
        {
            cout<<"The Game ENDS IN A DRAW!\n";
        }

        counter+=1;
    }
}
void p1(string board[3][3])
{
    cout<<"Its Your Turn To Play :X \n enter Row,Col\n";
    int r,c;
    cin>>r>>c;

    if ((r>=1 && r<=3) && (c>=1 && c<=3))//keeps track of the entered value so that it doesnt exceed the range of board
    {
            if (board[r-1][c-1] == "X" || board[r-1][c-1] == "O")//doesnt allow the player to go to the place where X or O is present
            {
                    cout<<"Sorry You Can't go there play again:\n";
                    p1(board);
            }
            else
            {
                    board[r-1][c-1]=" X ";
            }
    }
    else
    {
       cout<<"The entered number is out of the Range of Board please try again.\n";
            p1(board);
    }
}
void p2(string board[3][3])
{
    cout<<"Its Your Turn To Play :O \n enter Row,Col\n";
    int r,c;
    cin>>r>>c;

    if ((r>=1 && r<=3) && (c>=1 && c<=3))
    {
            if (board[r-1][c-1] == " X " || board[r-1][c-1] == " O ")
            {
                    cout<<"Sorry You Can't go there play again:\n";
                    p2(board);
            }
            else
            {
                    board[r-1][c-1]=" O ";
            }
    }
    else
    {
       cout<<"The entered number is out of the Range of Board please try again.\n";
            p2(board);
    }
}
int check_board(string board[3][3])
{
    int c=0,d=0;
   string diaL=board[0][0],diaR=board[0][2];//diaL is for left diagonal and diaR is for right diagonal
    for(int i=0;i<3;i++)// to iterate through rows
    {
        if((board[i][0] == board[i][1]) && (board[i][1] == board[i][2] ))// checks in one whole row if the elements of the row are same then returns true
        {
            return 1;
        }
        if((board[0][i] == board[1][i]) && (board[2][i] == board[1][i] ))// checks in one whole column if the elements of the column are same then returns true
        {
            return 1;
        }
        if (board[i][i] == diaL )//increases the val of c by one if the value is equal
        {
            c+=1;
        }
        if(board[i][2-i] == diaR)//increases the val of d by one if the value is equal
        {
            d+=1;
        }
    }
    if (c==3)// if the value matches 3 times then it is a win case hence return true
    {
        return 1;
    }
    if(d==3)// if the value matches 3 times then it is a win case hence return true
    {
        return 1;
    }
    return 0;// default case return false
}
