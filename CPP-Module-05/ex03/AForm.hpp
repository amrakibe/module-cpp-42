/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:32:26 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/03 23:50:46 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;


class AForm 
{
    private:
		const std::string name;
		bool sign;
		const int gradesignt;
		const int exec;
    public:
		virtual ~AForm();
		AForm();
		AForm(int gradesign,int exec, std::string name);
		AForm(const AForm &obj);
		AForm & operator=(const AForm &obj); 
		void	beSigned(const Bureaucrat &obj);
		void	SetSign() ;
		bool	getSign() const;
		std::string getName() const;
		int getGradesignt() const;
		int getExecute() const;
		virtual void  execute(Bureaucrat const & executor) const = 0;
		class GradeTooLowException: public std::exception
		{
			const char *what() const throw();
		};
		class GradeTooHighException: public std::exception
		{
			const char *what() const throw();
		};
};
std::ostream & operator<< (std::ostream &out , const AForm &objAForm);