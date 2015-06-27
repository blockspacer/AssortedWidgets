#include "DropListItem.h"

namespace AssortedWidgets
{
	namespace Widgets
	{
		DropListItem::DropListItem(char *_text):text(_text)
		{
			size=getPreferedSize();
		}

		DropListItem::DropListItem(std::string &_text):text(_text)
		{
			size=getPreferedSize();
		}

		DropListItem::~DropListItem(void)
		{
		}
	}
}