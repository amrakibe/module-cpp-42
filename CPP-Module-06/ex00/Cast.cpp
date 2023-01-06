/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:49:20 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/06 01:23:50 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>
#include <iomanip>
#include <limits>
#define max_int 2147483647
#define min_int -2147483648

void print_error()
{
    std::cout << "char: imposible" << std::endl;
    std::cout << "int:  imposible" << std::endl;
    std::cout << "float: imposible" << std::endl;
    std::cout << "double: imposible" << std::endl;
}

void cast_double(std::string value)
{
    double i = strtod(value.c_str(), NULL);
    if (i >= 32 &&  i < 127)
        std::cout << "char: " <<  static_cast<char>(strtod(value.c_str(), NULL)) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    if (i < min_int || i > max_int)
        std::cout << "int:  imposible"<< std::endl;
    else
        std::cout << "int: " << static_cast<int>(strtod(value.c_str(), NULL)) << std::endl;
    std::cout << "float: " << static_cast<float>(strtof(value.c_str(), NULL)) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(strtod(value.c_str(), NULL)) << std::endl;
}

void cast_int(std::string value)
{
   double i = strtod(value.c_str(), NULL);
    if (i >= 32 &&  i < 127)
        std::cout << "char: " <<  static_cast<char>(strtod(value.c_str(), NULL)) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    if (i < min_int || i > max_int)
        std::cout << "int:  imposible"<< std::endl;
    else
        std::cout << "int: " << static_cast<int>(strtod(value.c_str(), NULL)) << std::endl;
    std::cout << "float: " << static_cast<float>(strtof(value.c_str(), NULL)) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(strtof(value.c_str(), NULL)) << std::endl;
}

void cast_char(std::string value)
{
   
    int i = value[0];
    if (i >= 32 &&  i < 127)
        std::cout << "char: " <<  static_cast<char>(i) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(i) << std::endl;
    std::cout << "float: " <<  static_cast<float>(i) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << std::endl;
}

void cast_float(std::string value)
{
    double i = strtod(value.c_str(), NULL);
    if (i >= 32 &&  i < 127)
        std::cout << "char: " <<  static_cast<char>(strtod(value.c_str(), NULL)) << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    if (i < min_int || i > max_int)
        std::cout << "int:  imposible"<< std::endl;
    else
        std::cout << "int: " << static_cast<int>(strtod(value.c_str(), NULL)) << std::endl;
    std::cout << "float: " << static_cast<float>(std::stof(value)) << "f" << std::endl;
    std::cout << "double: " << static_cast<double>(strtod(value.c_str(), NULL)) << std::endl;
}

int main(int ac, char **av)
{
    std::cout << std::fixed;
    std::cout.precision(1);
    if (ac != 2)
    {
        std::cout << "Error: invalid argument" << std::endl;
        return (0);
    }
    int i = 0;
    char *tmp_av = av[1];
    if ((av[1][0] == '-' || av[1][0] == '+') && isnumber(av[1][1]))
        av[1] = &av[1][1];
    while (av[1][i])
    {
        if (strlen(av[1]) == 1 &&  !isnumber(av[1][i]))
        {
            cast_char(av[1]);
            return (0);
        }

        else if (av[1][strlen(av[1]) - 1] == 'f' && strchr(av[1], '.'))
        {
            std::string s = av[1];
            bool isValid = true;
            for (int j = 0; s[j]; j++)
            {
                if (s[j] == '.' && !isnumber(s[j + 1]))
                    isValid = false;
            }
            if (isValid == true)
            {
                float float_ = strtod(av[1], NULL);
                if (float_ > __FLT_MAX__ || float_ < __FLT_MIN__)
                {
                    print_error();
                    break;
                }
                cast_float(tmp_av);
                return (0);
            }
            else
                return (print_error(), 0);
        }

        else if (strchr(av[1], '.'))
        {
            std::string s = av[1];
            int i = s.find('.');
            if (isnumber(s[i + 1]))
            {
                double double_ = strtod(av[1], NULL);
                if (double_ < __DBL_MIN__ || double_ > __DBL_MAX__)
                {
                    print_error();
                    break;
                }
                else
                    cast_double(tmp_av);
                return (0);
            }
        }

        else if (isnumber(av[1][i]) && (!strchr(av[1], '.')))
        {
            for (int k = 1; av[1][k]; k++)
            {
                if (!isnumber(av[1][k]))
                    return (print_error(), 0);
            }
            cast_int(tmp_av);
            return (0);
        }

        else if (!strcmp(av[1], "nan") || !strcmp(av[1], "-inf") || !strcmp(av[1], "+inf") || !strcmp(av[1], "inf")
            || !strcmp(av[1], "inff") || !strcmp(av[1], "-inff") || !strcmp(av[1], "+inff") || !strcmp(av[1], "nanf"))
        {
            double type_string = std::stod(av[1]);
            std::cout << "char: " << "imposible" << std::endl;
            std::cout << "int: " << "imposible" << std::endl;
            std::cout << "float: " << static_cast<float>(type_string) << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(type_string) << std::endl;
            return (0);
        }
        else
        {
            print_error();
            break;
        }
        i++;
    }
    return (0);
}
