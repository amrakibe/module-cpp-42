/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:37:36 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/03 21:37:38 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "iostream"
#include <exception>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
		Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat &operator=(const Bureaucrat &obj);
        std::string getName() const;
        int		getGrade() const;
        void	increment();
		void	decrement();
        class GradeTooHighException : public  std::exception
        {
            const  char *what() const throw();
        };
        class GradeTooLowException : public  std::exception
        {
            const  char *what() const throw();
        };
};
std::ostream & operator<< (std::ostream &out ,const Bureaucrat &obj);