/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amrakibe <amrakibe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 21:36:52 by amrakibe          #+#    #+#             */
/*   Updated: 2023/01/04 01:08:08 by amrakibe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::~ShrubberyCreationForm(){
}

ShrubberyCreationForm::ShrubberyCreationForm(){
    this->target = "target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(145, 137, "ShrubberyCreationForm")
{
    if (!target.empty())
        this->target = target;
    else
        throw TargetCanNotBeEmptyException();
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj)
{
	*this = obj;
}

const char *ShrubberyCreationForm::TargetCanNotBeEmptyException::what() const throw()
{
	return ("target can not be empty.");
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	if (this != &obj)
		this->target = obj.target;
	return (*this);
}

void ShrubberyCreationForm::setTarget(std::string target)
{
	this->target = target;
}

std::string ShrubberyCreationForm::getTarget() const
{
    return (this->target);
}

static std::string	TreeAsci()
{
	std::string asci	=
						"                         ; ; ; \n"
						"                   ;        ;  ;     ;;    ; \n"
						"                ;                 ;         ;  ; \n"
						"                                ; \n"
						"                               ;                ;; \n"
						"               ;          ;            ;              ; \n"
						"               ;            ';,        ;               ; \n"
						"               ;              'b      * \n"
						"                ;              '$    ;;                ;; \n"
						"               ;    ;           $:   ;:               ; \n"
						"             ;;      ;  ;;      *;  @):        ;   ; ; \n"
						"                          ;     :@,@):   ,;**:'   ; \n"
						"              ;      ;,         :@@*: ;;**'      ;   ; \n"
						"                       ';o;    ;:(@';@*    ; \n"
						"               ;  ;       'bq,;;:,@@*'   ,*      ;  ; \n"
						"                          ,p$q8,:@)'  ;p*'      ; \n"
						"                   ;     '  ; '@@Pp@@*'    ;  ; \n"
						"                    ;  ; ;;    Y7'.'     ;  ; \n"
						"                              :@):. \n"   
						"                             .:@:'. \n"   
						"                           .:::@:. \n"
						"-------------------------------------------------------------\n";
	return (asci);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!ShrubberyCreationForm::getSign() && executor.getGrade() > ShrubberyCreationForm::getGradesignt())
		throw GradeTooLowException();
	std::ofstream ofile;
	ofile.open(this->getTarget() + "_shrubbery");
	if (ofile.is_open())
	{
		ofile << TreeAsci();
		ofile.close();
	}
}