#include "cppunitlite/Assertions.h"

#include <stdio.h>
#include <string.h>
#include <sstream>

void Assertions::StringEquals(std::string message, std::string expected, std::string actual, const char* fileName, long lineNumber) {
	if (expected != actual) {
		std::stringstream ss;
		ss << message << " (expected '" << expected << "', got '" << actual << "')";
		throw TestFailException(ss.str(), std::string(fileName), lineNumber);
	}
}

void Assertions::StringEquals(std::string message, const char* expected, const char* actual, const char* fileName, long lineNumber) {
	if (expected == NULL) {
		std::stringstream ss;
		ss << message << " (expected '" << expected << "', got NULL";
		throw TestFailException(ss.str(), std::string(fileName), lineNumber);
	}
	if (strcmp(expected, actual)) {
		std::stringstream ss;
		ss << message << " (expected '" << expected << "', got '" << actual << "')";
		throw TestFailException(ss.str(), std::string(fileName), lineNumber);
	}
}

void Assertions::ConditionFailed(std::string message, std::string condition, const char* fileName, long lineNumber) {
	std::stringstream ss;
	ss << message << " (condition failed: " << condition << ")";
	throw TestFailException(ss.str(), std::string(fileName), lineNumber);
}

void Assertions::LongEquals(std::string message, long expected, long actual, const char* fileName, long lineNumber) {
	if (expected != actual) {
		std::stringstream ss;
		ss << message << " (expected '" << expected << "', got '" << actual << "')";
		throw TestFailException(ss.str(), std::string(fileName), lineNumber);
	}
}

void Assertions::UInt32Equals(std::string message, unsigned int expected, unsigned int actual, const char* fileName, long lineNumber) {
	if (expected != actual) {
		std::stringstream ss;
		ss << message << " (expected '" << expected << "', got '" << actual << "')";
		throw TestFailException(ss.str(), std::string(fileName), lineNumber);
	}
}

void Assertions::CharEquals(std::string message, char expected, char actual, const char* fileName, long lineNumber) {
	if (expected != actual) {
		std::stringstream ss;
		ss << message << " (expected '" << expected << "', got '" << actual << "')";
		throw TestFailException(ss.str(), std::string(fileName), lineNumber);
	}
}