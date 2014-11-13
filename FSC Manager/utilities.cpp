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
	if (!doc.load_file("FSCM.xml")){
		pugi::xml_node main = doc.append_child("FSCM");

		// add description node with text child
		pugi::xml_node mc = main.append_child("Classrooms");
		pugi::xml_node ch = mc.append_child("classroom");

		// add param node before the description
		pugi::xml_node param = main.insert_child_before("param", mc);

		// add attributes to param node
		param.append_attribute("name") = "version";
		param.append_attribute("value") = 1.1;
		param.insert_attribute_after("type", param.attribute("name")) = "float";
		//]

		std::cout << "Saving result: " << doc.save_file("FSCM.xml") << std::endl;
	}
}
