#include "list.h"
int main(int argc, char* argv[]){
    struct Node* list = buildOneTwoThree();
    int elem = getNth(list, 1);
}
