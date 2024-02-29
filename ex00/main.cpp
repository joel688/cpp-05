/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:41:10 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/27 14:48:41 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/Bureaucrat/Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a;
		Bureaucrat y = a;
		std::cout << y;
		std::cout << std::endl << "--------------------------------" << std::endl;
		std::cout << a;
		a.DecreaseGrade();
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.msg() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.msg() << std::endl;
	}

	std::cout << std::endl << "--------------------------------" << std::endl;

	try
	{
		Bureaucrat b("Jacques", 140);
		std::cout << b;
		b.DecreaseGrade();
		std::cout << b;
		b.IncreaseGrade();
		std::cout << b;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{	
		std::cerr << e.msg() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.msg() << std::endl;
	}
	
	std::cout << std::endl << "--------------------------------" << std::endl;

	try
	{
		Bureaucrat c("Richard");
		std::cerr << c;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.msg() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.msg() << std::endl;
	}

	std::cout << std::endl << "--------------------------------" << std::endl;

	try
	{
		Bureaucrat d(1);
		std::cout << d;
		d.IncreaseGrade();
		std::cout << d;
		d.IncreaseGrade();
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.msg() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.msg() << std::endl;
	}
	
	std::cout << std::endl << "--------------------------------" << std::endl;

	try
	{
		Bureaucrat x("Gilles", 160);
		std::cout << x;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.msg() << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.msg() << std::endl;
	}
}
