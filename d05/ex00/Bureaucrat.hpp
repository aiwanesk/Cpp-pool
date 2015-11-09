#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class			Bureaucrat
{
	protected:
		std::string	_name;
		int			_grade;
	public:
		Bureaucrat(std::string n, int i);
		Bureaucrat &operator=(Bureaucrat const & rhs);
		Bureaucrat(Bureaucrat const & source, std::string n, int i);
		~Bureaucrat(void);
		int			getGrade() const;
		std::string	getName() const;
		Bureaucrat & operator++(int a);
		Bureaucrat & operator--(int a);
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException() throw();
				GradeTooHighException(GradeTooHighException const & src) throw();
				~GradeTooHighException()throw();
				GradeTooHighException &operator= (GradeTooHighException const & rhs) throw();
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException() throw();
				GradeTooLowException(GradeTooLowException const & src) throw();
				~GradeTooLowException()throw();
				GradeTooLowException & operator=(GradeTooLowException const & rhs)throw();
				virtual const char *what() const throw();
		};
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & i);

#endif
