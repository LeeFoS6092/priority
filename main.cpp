#include "Massive.h"

int main () {

int n;

std::cout << "Введите число n: ";
std::cin >> n;

n = abs(n-1);

massive* mass = new massive(n);

mass->GetPriority();

return 0;
}