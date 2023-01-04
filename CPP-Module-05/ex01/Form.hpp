/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:38:03 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/03 21:38:05 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>
class Bureaucrat;


class Form 
{
    private:
		bool sign;
		const std::string name;
		const int gradesignt;
		const int execute;
    public:
		~Form();
		Form();
		Form(const std::string name, const int gradesignt , const int execute);
		Form(const Form &obj);
		Form & operator=(const Form &obj); 
		
		void beSigned(const Bureaucrat &br);
		void signForm(Bureaucrat &br);

		void SetSign();
		bool getSign() const;
		std::string getName() const;
		int getGradesignt() const;
		int getExecute() const;
		class GradeTooLowException: public std::exception
		{
			const char *what() const throw();
		};
		class GradeTooHighException: public std::exception
		{
			const char *what() const throw();
		};
};
std::ostream & operator<< (std::ostream &out , const Form &objForm);
