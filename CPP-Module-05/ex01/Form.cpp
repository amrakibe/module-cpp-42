/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:37:57 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/05 00:14:48 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::~Form(){
}

Form::Form() : name("Form"), gradesignt(1), execute(1)
{
    this->sign = false;
}

Form::Form(std::string name , int gradesign, int execute) : name(name), gradesignt(gradesign), execute(execute)
{
    this->sign = false;
}

Form::Form(const Form &obj) : name(obj.name), gradesignt(obj.gradesignt), execute(obj.execute)
{
    *this = obj;
}

void Form::SetSign()
{
    this->sign = true;
}
bool Form::getSign() const
{
    return (this->sign);
}
std::string Form::getName() const
{
    return (this->name);
}

int Form::getExecute() const
{
    return (this->execute);
}

int Form::getGradesignt() const
{
    return (this->gradesignt);
}

void Form::beSigned(const Bureaucrat &obj)
{
    if (obj.getGrade() > this->gradesignt)
        throw Form::GradeTooHighException();
    this->SetSign();
}

Form &Form::operator=(const Form &obj)
{
    if (this != &obj)
    {
        this->sign = obj.sign;
    }
    return (*this);
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade Is Too Low";
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade Is Too High";
}

std::ostream & operator<< (std::ostream &out , const Form &objForm)
{
    out << objForm.getExecute();
    out << objForm.getGradesignt();
    out << objForm.getName();
    out << (objForm.getGradesignt() ? ",can sign" : ", can't sign") << std::endl;
    return (out);
}
