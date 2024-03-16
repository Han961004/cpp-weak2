#include <iostream>
#include <string>

std::string input_num();
void gameflow(std::string input_num);

int main(){
    
    std::string answer = input_num();
    gameflow(answer);
    
    return 0;
}