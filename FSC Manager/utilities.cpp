#include "StdAfx.h"
#include "utilities.h"
#include <pugixml.hpp>


utilities::utilities(void)
{
}

char* utilities::formToChar(String ^data)
{
	pin_ptr<const wchar_t> wch = PtrToStringChars(data);
	size_t convertedChars = 0;
	size_t  sizeInBytes = ((data->Length + 1) * 2);
	errno_t err = 0;
	char *ch = (char *)malloc(sizeInBytes);
	err = wcstombs_s(&convertedChars, 
					ch, sizeInBytes,
					wch, sizeInBytes);
	if (err != 0)
		printf_s("wcstombs_s  failed!\n");

	return ch;
}

void utilities::initXML()
{
	pugi::xml_document doc;
	pugi::xml_parse_result result = doc.load_file("tree.xml");

	std::cout << "Load result: " << result.description() << ", mesh name: " << doc.child("mesh").attribute("name").value() << std::endl;
}
