#ifndef STACK_H
#define STACK_H

namespace StackExercise
{
	const int STACK_SIZE = 10;
	
	template <class T>
	class StackT
	{
	public:
		StackT();

		void Push(T val);
		T Pop();

	private:
		int m_impl[STACK_SIZE];
		int m_nextIndex;
	};


	template<class T>
	inline StackT<T>::StackT() :m_nextIndex(0)
	{
	}

	template <class T>
	inline void StackT<T>::Push(T val)
	{
		if (m_nextIndex < STACK_SIZE)
		{
			m_impl[m_nextIndex] = val;
			++m_nextIndex;
		}
		else
		{
			throw StackOverflowException();
		}
	}

	template <class T>
	inline T StackT<T>::Pop()
	{
		if (m_nextIndex > 0)
		{
			--m_nextIndex;
			return m_impl[m_nextIndex];
		}
		else
		{
			throw StackUnderflowException();
		}
	}
}

#endif