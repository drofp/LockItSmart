#include <iostream>
#include "lib/msgpasser/include/msgpasser.h"

int main(int argc, char **argv) {
    lockitsmart::msgpasser::MessagePasser m;
    std::cout << "woo smart lock " << m.test() << std::endl;
    return 0;
}