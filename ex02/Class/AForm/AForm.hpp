/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:48:53 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/23 11:40:41 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#define LOWEST 150
#define HIGHEST 1

#include <iostream>
#include "../Bureaucrat/Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const		std::string _name;
		bool		_isItSigned;
		const int	_GradeToSignIt;
		const int	_GradeToExecuteIt;

	public:
					Form();
					Form(std::string name, int gradetosignit, int gradetoexecuteit);
					Form(int gradetosignit, int gradetoexecuteit);
					Form(const Form &src);
					~Form();
			const	std::string getName(void) const;
			int		getGradeToSignIt(void) const;
			int		getGradeToExecuteIt(void) const;
			bool	getIsItSigned(void) const;
			void	beSigned(Bureaucrat bureaucrat);
			Form&	operator=(const Form& src);
			class	GradeTooHighException : public std::exception
			{
				public:
					const std::string msg() const throw();
			};
			class GradeTooLowException : public std::exception
			{
				public:
					const std::string msg() const throw();
			};
};

	std::ostream & operator<<(std::ostream & o, Form const & src);

#endif

