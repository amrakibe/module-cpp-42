/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 19:49:20 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/05 20:30:33 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>
#include <iomanip>
#include <limits>
#define max_int 2147483647
#define min_int -2147483647

void cast_double(std::string value)
{
    double double_ = std::stod(value);
    int a = static_cast<int>(double_);
    char char_ = static_cast<char>(a);
    float float_ = static_cast<float>(double_);

    if (isprint(char_))
        std::cout << "char: " << char_ << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << a << std::endl;
    std::cout << "float: " << float_ << "f" << std::endl;
    std::cout << "double: " << double_ << std::endl;
}

void cast_int(std::string value)
{
    int int_ = std::stoi(value);
    char char_ = static_cast<char>(int_);
    if (isprint(char_))
        std::cout << "char: " << char_ << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    float f = static_cast<float>(int_);
    double d = static_cast<double>(int_);
    std::cout << "int: " << int_ << std::endl;
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
}

void cast_char(std::string value)
{
    char char_ = static_cast<char>(value[0]);
    std::cout << "char: " << char_ << std::endl;
    int int_ = static_cast<int>(char_);
    float float_ = static_cast<float>(char_);
    double double_ = static_cast<double>(char_);
    std::cout << "int: " << int_ << std::endl;
    std::cout << "float: " << float_ << "f" << std::endl;
    std::cout << "double: " << double_ << std::endl;
}

void cast_float(std::string value)
{
    float float_ = static_cast<float>(std::stof(value));
    int int_ = static_cast<int>(float_);
    char char_ = static_cast<char>(int_);
    double double_ = static_cast<double>(float_);
    if (isprint(char_))
        std::cout << "char: " << char_ << std::endl;
    else
    {
        std::cout << "char: Non displayable" << std::endl;
    }
    std::cout << "int: " << int_ << std::endl;
    std::cout << "float: " << float_ << "f" << std::endl;
    std::cout << "double: " << double_ << std::endl;
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
    char *tmp_av = av[1]; // for casting
    if (av[1][0] == '-' || av[1][0] == '+')
        av[1] = &av[1][1]; // for remove - or + for check parse
    while (av[1][i])
    {
        if (strlen(av[1]) == 1 && isalpha(av[1][i]))
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
                    std::cout << "char: imposible" << std::endl;
                    std::cout << "int:  imposible" << std::endl;
                    std::cout << "float: imposible" << std::endl;
                    std::cout << "double: imposible" << std::endl;
                    break;
                }
                cast_float(tmp_av);
                return (0);
            }
            else
                return (std::cout << "invalid argument\n", 0);
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
                    std::cout << "char: imposible" << std::endl;
                    std::cout << "int:  imposible" << std::endl;
                    std::cout << "float: imposible" << std::endl;
                    std::cout << "double: imposible" << std::endl;
                    break;
                }
                else
                    cast_double(tmp_av);
                return 0;
            }
        }

        else if (isnumber(av[1][i]) && (!strchr(av[1], '.')))
        {
            for (int k = 1; av[1][k]; k++)
            {
                if (!isnumber(av[1][k]))
                    return (std::cout << "invalid argument\n", 0);
            }
            int int_ = strtod(av[1], NULL);
            if (int_ < min_int || int_ > max_int)
            {
                    std::cout << "char: imposible" << std::endl;
                    std::cout << "int:  imposible" << std::endl;
                    std::cout << "float: imposible" << std::endl;
                    std::cout << "double: imposible" << std::endl;
                break;
            }
            cast_int(tmp_av);
            return 0;
        }
        else if (!strcmp(av[1], "nan") || !strcmp(av[1], "-inf") || !strcmp(av[1], "+inf") || !strcmp(av[1], "inf") || !strcmp(av[1], "inff") || !strcmp(av[1], "-inff") || !strcmp(av[1], "+inff") || !strcmp(av[1], "nanf"))
        {
            double cast = std::stod(av[1]);
            std::cout << "char: "
                      << "imposible" << std::endl;
            std::cout << "int: "
                      << "imposible" << std::endl;
            std::cout << "float: " << static_cast<float>(cast) << "f" << std::endl;
            std::cout << "double: " << static_cast<float>(cast) << std::endl;
            return (0);
        }
        else
        {
           std::cout << "char: imposible" << std::endl;
                    std::cout << "int:  imposible" << std::endl;
                    std::cout << "float: imposible" << std::endl;
                    std::cout << "double: imposible" << std::endl;
            break;
        }
        i++;
    }
    return (0);
}
