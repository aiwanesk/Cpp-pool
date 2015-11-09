#include "Bureaucrat.hpp"

int main(void){
	try
	{
		Bureaucrat poutine("Poutine", 1451);
		poutine--;
		std::cout << poutine << std::endl;
		poutine--;
		std::cout << poutine << std::endl;
		std::cout << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException e){
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat ernest("Ernest", 22);
		ernest++;
		std::cout << ernest << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Bureaucrat huberdelamairie("Hubert", 2);
		huberdelamairie++;
		std::cout << huberdelamairie << std::endl;
		huberdelamairie++;
		std::cout << huberdelamairie << std::endl;
	}
	catch(Bureaucrat::GradeTooLowException e)
	{
		std::cout << e.what() << std::endl;
	}
	catch(Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
