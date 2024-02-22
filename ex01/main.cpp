/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 13:41:10 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/22 16:33:08 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Class/Bureaucrat/Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("Patrick Bateman", 16);
		Form form("Form303", 15, 15);
		std::cout << a;
		std::cout << form;
		form.beSigned(a);
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cerr << e.msg() << std::endl;
	}
}

