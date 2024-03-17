#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime> // 시드값이 같으면 계속 같은 값 나오므로 컴퓨터가 정해주는 시드를 하기 위해 include



int randnum(){
    int randnum;
    bool num_OK = false;

    // 랜덤 숫자가 중복되지 않을 때까지 계속 반복   
    do{
        srand(time(NULL));      // 랜덤하게 만들기 위한 시드값
        randnum = rand() % 900 + 100; // 세 자리의 임의의 숫자 생성

        // 숫자의 각 자릿수가 모두 다른지 확인
        int a = randnum / 100;
        int b = (randnum / 10) % 10;
        int c = randnum % 10;
        if (a != b && a != c && b != c) {
            num_OK = true;
        }
    }while(!num_OK);

    return randnum;
}