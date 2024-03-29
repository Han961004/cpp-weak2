#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime> // 시드값이 같으면 계속 같은 값 나오므로 컴퓨터가 정해주는 시드를 하기 위해 include

void gameflow(std::string answer){
    std::string guess;
    
    while(1){   
        
        std::cout << "Enter a guess : ";
        std::cin >> guess;
    
        int strike = 0;
        int ball = 0;
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){            
                if(i == j && answer[i] == guess[j]) strike++;
                else if(answer[i] == guess[j]) ball++;
            }
        }
        std::cout << "Strikes : " << strike << ", Balls : " << ball << std::endl;

        if(answer == guess) break;
    }
    std::cout << "YOU WIN" << std::endl;
}