#include <iostream>
#include <stdlib.h>

#define LEN_X 10u
#define LEFT 'a'
#define RIGHT 'd'

int main()
{
    bool repeat = true;


    while(repeat)
    {
        unsigned int player = 0;
        unsigned int start = 0;
        unsigned int goal = LEN_X - 1;

        char move;
        bool finished = false;


        while(!finished)
        {
            for(unsigned int i = 0; i < LEN_X; i++)
            {
                if(i != player && i != start && i != goal)
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
            std::cin >> move;
            system("clear");

            if (LEFT == move)
            {
                if(player > start)
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
                if(player < goal)
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

            if (player == goal)
            {
                finished = true;

                std::cout << " VICTORY !" << std::endl;
            }


        }
        std::cout << "Play again ? (0= No, 1= Yes)" << std::endl;
        std::cin >> repeat;

        system("clear");
    }
    return 0;
}
