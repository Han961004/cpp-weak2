#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime> // 시드값이 같으면 계속 같은 값 나오므로 컴퓨터가 정해주는 시드를 하기 위해 include


int randnum();
void gameflow(std::string answer);

int main(){

    
    int randnum1 = randnum();
    

    //std::cout << "Answer is " << randnum1 << std::endl;

    std::string answer = std::to_string(randnum1);
    return 0;
}