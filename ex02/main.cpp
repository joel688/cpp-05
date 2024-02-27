/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:41:10 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/27 15:53:17 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/Bureaucrat/Bureaucrat.hpp"
#include "Class/AForm/AForm.hpp"
#include "Class/PresidentialPardonForm/PresidentialPardonForm.hpp"
int main()
{
	try
	{
		Bureaucrat a("Patrick Bateman", 2);
		PresidentialPardonForm p("Jaquie");
		std::cout << a;
		a.IncreaseGrade();
		p.beSigned(a);
		p.execute(a);
	}
	catch (AForm::GradeTooLowException & e)
	{
		std::cerr << e.msg() << std::endl;
	}
	catch (AForm::GradeTooHighException & e)
	{
		std::cerr << e.msg() << std::endl;
	}
	catch (AForm::NotSignedException & e)
	{
		std::cerr << e.msg() << std::endl;
	}
}

