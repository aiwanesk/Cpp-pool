
# ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>
#include <ostream>

template <typename T>
class Array {

	private :

	private :
		T *_array;
		size_t _n;

	public :
		class outOfRangeException;
		Array(void) : _n(0){
			_array = NULL;
		}

		Array(unsigned int n) : _n(n){
			_array = new T[n];
		}

		Array(Array<T> const &rhs) : _n(rhs.size()) {
			_array = new T[rhs._n]; 
		}

		Array<T> & operator=(Array<T> const &rhs) {
			size_t		cmp = rhs._n;

			if (this->_n > 0)
				delete [] _array;
			this->_array = new T[rhs._n];
			while (cmp > 0)
			{
				this->_array[cmp - 1] = rhs._array[cmp - 1];
				--cmp;
			}
			return (*this);
		}

		T&		operator[](size_t nElem) const throw(std::out_of_range){
			if (nElem >= this->_n)
				throw std::out_of_range("Out of range");
			return (this->_array[nElem]);
		}

		size_t		size() const {
			return (this->_n);
		}
		virtual ~Array() {
			delete [] this->_array;
		}
};

template<typename T>
class Array<T>::outOfRangeException : public std::exception{

	private :
		outOfRangeException & operator=(outOfRangeException const &rhs) throw();

	public :
		outOfRangeException(void) throw() {}
		outOfRangeException(outOfRangeException const &rhs) throw() {(void)rhs;}
		virtual ~outOfRangeException() throw() {}
		virtual const char *what() const throw() {
			return (std::string("outOfRange").c_str());
		}
};


template<typename T>
std::ostream& operator<<(std::ostream& ofs, Array<T>& art) {
	size_t cmp = art.size();

	std::cout << "Tableau de " << cmp << " Elements" << std::endl;
	while (cmp > 0)
	{
		ofs << "\tLecture du tab[" << (cmp - 1) << "] = " << static_cast<int>(art[cmp - 1]) << std::endl;
		--cmp;
	}
	return (ofs);
}

#endif
