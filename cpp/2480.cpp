#include <iostream>

int main(void){
    int dice[7] = {0};
    int input;
    bool isDone = false;

    for(int i = 0; i < 3; i ++){
        std::cin >> input;
        dice[input]++;
    }
    input = 0;
    int max = 0;
    for (int i = 1; i < 7; i++){
        if(dice[i] == 3){
            input = 10000 + i * 1000;
            std::cout << input << std::endl;
            return 0;
        }else if (dice[i] == 2){
            input = 1000 + i * 100;
            std::cout << input << std::endl;
            return 0;
        } else if (dice[i] == 1 && max < i)
            max = i;
    }
    
    std::cout << max * 100 << std::endl;
    return 0;
}