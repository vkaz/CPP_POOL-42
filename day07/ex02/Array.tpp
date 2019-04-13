#ifndef ARRAY_TPP
# define ARRAY_TPP

# include <exception>

template <typename T>
class Array
{
private:
    unsigned int _size;
    T           *_templ;
public:
    Array<T>()
    {
        _size = 0;
        _templ = NULL;
    }
    Array<T>(unsigned int s)
    {
        _size = s;
        _templ = new T[_size];
    }
    ~Array<T>()
    {
        delete _templ;
    }
    Array<T>(Array<T> const &rhs)
    {
        *this = rhs;
    }
    class  erException : public std::exception
    {
        public:
        erException(){}
        ~erException() throw(){}
        char const *what() const throw() {return ("Out of range!!");}
    };
    Array<T> &operator=(Array<T> const &rhs)
    {
        delete (_templ);
		_size = rhs._size;
		_templ = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_templ[i] = rhs._templ[i];
		return (*this);
    }
    T &operator[](unsigned int i)  throw(erException)
    {
        if(!_templ || i >= _size)
        {
            throw(erException());
        }
        else
            return (_templ[i]);
    }
    unsigned int size(void) const
	{
		return (_size);
	}
};

#endif
