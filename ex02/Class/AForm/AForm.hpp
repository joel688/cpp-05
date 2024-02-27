/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:48:53 by joakoeni          #+#    #+#             */
/*   Updated: 2024/02/27 15:47:32 by joakoeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#define LOWEST 150
#define HIGHEST 1

#include <iostream>
#include "../Bureaucrat/Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const		std::string _name;
		bool		_isItSigned;
		const int	_GradeToSignIt;
		const int	_GradeToExecuteIt;
		const std::string _target;

	public:
					AForm();
					AForm(std::string name, int gradetosignit, int gradetoexecuteit);
					AForm(std::string name, int gradetosignit, int gradetoexecuteit, std::string target);
					AForm(int gradetosignit, int gradetoexecuteit);
					AForm(std::string name, int gradetosignit);
					AForm(int gradetoexecuteit, std::string name);
					AForm(const AForm &src);
			virtual ~AForm();
			const	std::string getName(void) const;
			int		getGradeToSignIt(void) const;
			int		getGradeToExecuteIt(void) const;
			bool	getIsItSigned(void) const;
			void	beSigned(Bureaucrat bureaucrat);
			const std::string	getTarget(void) const;
			AForm&	operator=(const AForm& src);
			virtual	void execute(Bureaucrat const & executor) = 0;
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
			class	NotSignedException : public std::exception
			{
				public:
					const std::string msg() const throw();
			};
};

	std::ostream & operator<<(std::ostream & o, AForm const & src);

#endif

