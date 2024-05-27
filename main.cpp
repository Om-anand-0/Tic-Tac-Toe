#include<iostream>
#include<ctime>

void drawBox(char *spaces);
void playermove(char *spaces,char player);
void computermove(char *spaces,char computer);
bool winner(char *spaces,char player,char computer);
bool tie(char *spaces);
int main()
{
    char spaces[9] ={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;
    drawBox(spaces);
    while (running)
    {
        playermove(spaces,player);
        drawBox(spaces);
        if (winner(spaces,player,computer))
        {
            running = false;
            break;
        }
        else if (tie(spaces))
        {
            running = false;
        }
        
        

        computermove(spaces,computer);
        drawBox(spaces);
        if (winner(spaces,player,computer))
        {
            running = false;
            break;
        }
        else if (tie(spaces))
        {
            running = false;
        }
        
    }
    
 return 0;
}
void drawBox(char *spaces){
    std::cout<<'\n';
    std::cout<<"     |     |    "<< '\n';
    std::cout<<"  "<<spaces[0]<<"  |  "<<spaces[1]<<"  |  "<<spaces[2]<<" "<< '\n';
    std::cout<<"_____|_____|____"<< '\n';
    std::cout<<"     |     |    "<< '\n';
    std::cout<<"  "<<spaces[3]<<"  |  "<<spaces[4]<<"  |  "<<spaces[5]<<" "<< '\n';
    std::cout<<"_____|_____|____"<< '\n';
    std::cout<<"     |     |    "<< '\n';
    std::cout<<"  "<<spaces[6]<<"  |  "<<spaces[7]<<"  |  "<<spaces[8]<<" "<< '\n';
    std::cout<<"     |     |    "<< '\n';
    std::cout<<'\n';
}
void playermove(char *spaces,char player){
    int number;
    do
    {
        std::cout<<"Enter a spot to fill X (1-9)"<<'\n';
        std::cin>>number;
        number--;
        if (spaces[number] == ' ')
        {
            spaces[number] = player;
            break;
        }
        
    } while (!number>0 || !number<8);
    
}
void computermove(char *spaces,char computer){
    int number;
    srand(time(0));
    while (true)
    {
        number = rand() % 9;
        if (spaces[number] == ' ')
        {
            spaces[number] = computer;
            break;
        }
        
    }
    
}
bool winner(char *spaces,char player,char computer){
    if ((spaces[0] != ' ') && (spaces[0] == spaces[1] && spaces[1] == spaces[2]))
    {
        spaces[0] == player ? std::cout<<"You win\n" : std::cout<<"A.I Wins\n";
    }
    else if ((spaces[3] != ' ') && (spaces[3] == spaces[4] && spaces[4] == spaces[5]))
    {
        spaces[3] == player ? std::cout<<"You win\n" : std::cout<<"A.I Wins\n";
    }
    else if ((spaces[6] != ' ') && (spaces[6] == spaces[7] && spaces[7] == spaces[8]))
    {
        spaces[6] == player ? std::cout<<"You win\n" : std::cout<<"A.I Wins\n";
    }
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[3] && spaces[3] == spaces[6]))
    {
        spaces[0] == player ? std::cout<<"You win\n" : std::cout<<"A.I Wins\n";
    }
    else if ((spaces[1] != ' ') && (spaces[1] == spaces[4] && spaces[4] == spaces[7]))
    {
        spaces[1] == player ? std::cout<<"You win\n" : std::cout<<"A.I Wins\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[5] && spaces[5] == spaces[8]))
    {
        spaces[2] == player ? std::cout<<"You win\n" : std::cout<<"A.I Wins\n";
    }
    else if ((spaces[0] != ' ') && (spaces[0] == spaces[4] && spaces[4] == spaces[8]))
    {
        spaces[0] == player ? std::cout<<"You win\n" : std::cout<<"A.I Wins\n";
    }
    else if ((spaces[2] != ' ') && (spaces[2] == spaces[4] && spaces[4] == spaces[6]))
    {
        spaces[2] == player ? std::cout<<"You win\n" : std::cout<<"A.I Wins\n";
    }

    return 0;
}
bool tie(char *spaces){
    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] = ' ')
        {
            return false;
        }
    }
    std::cout<<"Its A Tie \n";
}