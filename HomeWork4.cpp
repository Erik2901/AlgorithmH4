#include <iostream>

void ex1(int n)
{
	
    if (n < 0) {
        std::cout << "-";
        ex1(-n);
    }
    else if (n < 2) {
        std::cout << n;
        return;
    }
    else {
        ex1(n / 2);
        int res = n % 2;
        std::cout << res;
    }
}

int ex2(int a, int b) {
    if (b==0)
    {
        return 1;
    }
    int n = (b % 2) ? a : 1;
    int m = ex2(a, b / 2);
    return n * m * m;
}

int main()
{
    ///////// exercise 1
    /*int n;
    std::cout << "Enter an integer number:\n";
    std::cout << "n = ";
    std::cin >> n;
    ex1(n);*/
    /////////////

    ////////// exercise 2    
    int a = 0, b = 0;
    std::cout << "Enter an integer number:\n";
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "Enter an integer number:\n";
    std::cout << "b = ";
    std::cin >> b;
    int q = 0, s = 0;
    // std::cout << ex2(a, b); // exercise 2.1
    if (b%2==0) /// exercise 2.2
    {
        q = a * a;
        s = b / 2;
    }
    else {
        q = a * ex2(a, b);
        s = b - 1;
    }
    std::cout << ex2(q, s); ///
    //////////////

    return 0;
}

