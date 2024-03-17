#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime> // 시드값이 같으면 계속 같은 값 나오므로 컴퓨터가 정해주는 시드를 하기 위해 include


int randnum(){
    srand(time(NULL));      // 랜덤하게 만들기 위한 시드값
    int a = rand() % 900 + 100; // 세 자리의 임의의 숫자 생성

    std::cout << "Answer is " << a << std::endl;

    return a;
}