#include <iostream>
using namespace std;



float readNumber()
{
    float num;
    cout << "\nEnter a Number? ";
    cin >> num;
    cout << "\n";
    return num;
}

int myRound(float num)
{
    int integerPart = int(num);
    float fractionPart = num - integerPart;

    if (abs(fractionPart) >= .5)
    {
        if (num > 0)
            return ++integerPart;
        else
            return --integerPart;
    }
    else
    {
        return integerPart;
    }
}

void printResult(string msg, float res)
{
    cout << msg << res << endl;
}



int main()
{
    float num = readNumber();

    printResult("My round result is: ", myRound(num));
    printResult("C++ round result is : ", round(num));



    return main();
}