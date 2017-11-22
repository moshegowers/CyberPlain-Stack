#pragma once

#include <exception>

namespace StackExercise
{
	class StackUnderflowException : public std::exception
	{};
}