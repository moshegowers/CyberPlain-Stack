#pragma once

#include <exception>

namespace StackExercise
{
	class StackOverflowException : public std::exception
	{};
}