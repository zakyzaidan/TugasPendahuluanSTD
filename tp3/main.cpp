#include "member.h"
#include "member.cpp"
#include <iostream>

using namespace std;

int main()
{
    member M;
    inputData(M);
    showData(M);

    cout << "Dengan Rata-Rata Poin: " << ratarata(M) << endl;
    return 0;
}
