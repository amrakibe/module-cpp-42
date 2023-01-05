/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 15:32:47 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/04 14:22:53 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::~AForm(){
}

AForm::AForm() : name("AForm"), gradesignt(0), exec(0)
{
    this->sign = false;
}

AForm::AForm(int gradesign, int exec, std::string name) : name(name), gradesignt(gradesign), exec(exec)  
{
    this->sign = false;
}

AForm::AForm(const AForm &obj):name(obj.name), gradesignt(obj.gradesignt), exec(obj.exec)
{
    *this = obj;
}

void AForm::SetSign()
{
    this->sign = true;
}

std::string AForm::getName()const
{
    return (this->name);
}

int AForm::getExecute()const
{
    return(this->exec);
}

bool AForm::getSign() const
{
    return(this->sign);
}

int AForm::getGradesignt() const
{
    return (this->gradesignt);
}

void AForm::beSigned(const Bureaucrat &br)
{
    if (br.getGrade() > this->gradesignt)
        throw AForm::GradeTooHighException();
    this->SetSign();
}

AForm &AForm::operator=(const AForm &obj)
{
    if (this != &obj)
    {
        this->sign = obj.sign;
    }
    return (*this);
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "Grade Is Too High";
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "Grade Is Too Low";
}

std::ostream & operator<< (std::ostream &out , const AForm &objAForm)
{
    out << objAForm.getExecute();
    out << objAForm.getGradesignt();
    out << objAForm.getName();
    out << (objAForm.getGradesignt() ? "can sign" : "can't sign") << std::endl;
    return (out);
}