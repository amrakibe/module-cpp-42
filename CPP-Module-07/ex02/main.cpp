/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 21:40:17 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/07 00:21:51 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"
#include <iostream>

// #define MAX_VAL 750

int main()
{
    const  Array<int> b(10);
    // std::cout << b[1];

    Array<int> a(100);
    for (size_t i = 0; i < 100; i++)
    {
        a[i] = 2;
    }

    for (size_t i = 0; i < 100; i++)
    {
       std::cout << a[i]<< std::endl;
    }
 
    try
    {
       a[11] = 1;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    // int *a = new int(100);
    // for (size_t i = 0; i < 100; i++)
    // {
    //     a[i] = 1;
    // }
    // for (size_t i = 0; i < 100; i++)
    // {
    //     std::cout << a[i]<< std::endl;
    // }
}
// }
    // char *arr1;
    // char    *arr2 = new char;
    // arr1 = arr2;
    // // int *a = new int ;

    // std::cout << static_cast<const void *>(arr2)  << std::endl;
    // std::cout << static_cast<const void *>(arr1)  << std::endl;
    // delete arr1;
    // delete arr2;

    // int a = 0;
    // int b;
    // b = a;
    
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }


// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }