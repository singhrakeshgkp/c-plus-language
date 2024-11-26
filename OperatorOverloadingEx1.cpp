#include <iostream>

class Position{
    public:
    int x = 20;
    int y = 40;
    Position operator + (Position pos){ // overloaded + operator
        Position newPos;
        newPos.x = x + pos.x;
        newPos.y = y + pos.y;
        return newPos;
    }

    bool operator == (Position pos){ // == overator overloading
        if(x == pos.x && y== pos.y){
            return true;
        }
        return false;
    }
};

int main(){
    Position pos1, pos2;
    Position pos3 = pos1 + pos2;
    std::cout << pos3.x << " , " << pos3.y << std::endl;
    if(pos1 == pos2){
        std::cout << "equals pos1 and pos2" << std::endl;
    }

    if(pos1 == pos3){
        std::cout<< "equals pos1 and pos3" << std::endl;
    }
    return 0;
}