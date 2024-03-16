#include <iostream>
#include <string>

std::string input_num();

void gameflow(std::string input_num) {

    while(1){
        std::string guess;    
        std::cout << "Enter a guess : ";
        std::cin >> guess;
    
        int strike = 0;
        int ball = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){            
                if(i == j && input_num[i] == guess[j]) strike++;
                else if(input_num[i] == guess[j]) ball++;
            }
        }
        std::cout << "Strikes : " << strike << ", Balls : " << ball << std::endl;

        if(input_num == guess) break;
    }
    std::cout << "YOU WIN" << std::endl;
}