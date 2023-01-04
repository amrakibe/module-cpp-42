/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 14:03:41 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/03 23:24:51 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "iostream"
#include <exception>
#include "Form.hpp"

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
		Bureaucrat(std::string name, int grade);
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat &operator=(const Bureaucrat &obj);
        std::string getName() const;
        int		getGrade() const;
        void	increment();
		void	decrement();
        void signForm(Form &form);
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