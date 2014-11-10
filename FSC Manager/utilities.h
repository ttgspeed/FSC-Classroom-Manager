#pragma once

#include <pugixml.hpp>
#include <iostream>
#include < stdio.h >
#include < stdlib.h >
#include < vcclr.h >
#include <string>

using namespace System;

ref class utilities
{
public:
	utilities(void);
	char* formToChar(String ^data);
	void initXML();
};

