// ConsoleApplication5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

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
    if (b == 0)
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
    int n;
    std::cout << "Enter an integer number:\n";
    std::cout << "n = ";
    std::cin >> n;
    ex1(n);

    /////////////

    ////////// exercise 2    
    int a = 0, b = 0;
    std::cout << "Enter an integer number:\n";
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "Enter an integer number:\n";
    std::cout << "b = ";
    std::cin >> b;

    std::cout << ex2(a, b);

    //////////////


    ////// exercise 3
    const int w = 6;
    int arr[w][w];


    for (size_t i = 0; i < w; i++)
    {
        for (size_t j = 1; j < w; j++)
        {
            arr[i][j] = rand() % 2;
        }
    }

    for (size_t i = 0; i < w; i++)
    {
        for (size_t j = 0; j < w; j++)
        {
            if (arr[i][j] == 0)
            {
                if (i == 0 && j == 0)
                {
                    arr[i][j] = 0;
                }
                else if (i == 0)
                {
                    if (arr[i][j - 1] == 0 && j != 1)
                    {
                        arr[i][j] = 0;
                    }
                    else {
                        arr[i][j] = 1;
                    }
                }
                else if (j == 0)
                {
                    if (arr[i - 1][j] == 0 && i != 1)
                    {
                        arr[i][j] = 0;
                    }
                    else {
                        arr[i][j] = 1;
                    }
                }
                else {
                    arr[i][j] = arr[i][j - 1] + arr[i - 1][j];

                }
            }
            else
            {
                arr[i][j] = 0;
            }

        }
    }


    for (size_t i = 0; i < w; i++)
    {
        for (size_t j = 0; j < w; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    ////////

    system("pause");
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
