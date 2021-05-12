#include <iostream>

constexpr unsigned int LEN_X = 10;
constexpr unsigned int START = 0;
constexpr unsigned int GOAL = LEN_X -1;

constexpr char LEFT = 'a';
constexpr char RIGHT = 'd';

void print_game_state(unsigned int player)
{
    for(unsigned int i = 0; i < LEN_X; i++)
            {
                if(i != player && i != START && i != GOAL)
                {
                    std::cout << '.';
                }
                else if(i == player)
                {
                    std::cout << 'P';
                }
                else
                {
                    std::cout << '|';
                }
            }
}

unsigned int execute_move(unsigned int player, char move)
{
if (LEFT == move)
    {
        if(player > START)
        {
            player--;

            std::cout << " You Moved to the Left ! " << std::endl;
        }
        else
        {
            std::cout << " You bounced yo !" << std::endl;
        }
    }
    else if(RIGHT == move)
    {
        if(player < GOAL)
        {
            player++;

            std::cout << " You Moved to the Right ! " << std::endl;
        }
        else
        {
            std::cout << " You bounced yo !" << std::endl;

        }
    }
    else{
        std::cout << "Was ?" << std::endl;
    }

    return player;
}

bool is_finished(unsigned int player)
{
    bool finished = false;
    if (player == GOAL)
    {
        finished = true;

        std::cout << " VICTORY !" << std::endl;
    }

    return finished;
}

void game()
{
    bool repeat = true;

    while(repeat)
    {
        unsigned int player = 0;
        char move;
        bool finished = false;


        while(!finished)
        {
            print_game_state(player);
            std::cin >> move;
            system("clear");
            player = execute_move(player, move);
            finished = is_finished(player);
        }
    }
}
