#include "GPT_Plugin.h"

GPT_Plugin::GPT_Plugin(TextEditor* text)
{
	setText(text->getText() + " + GPT Plugin");
}

void GPT_Plugin::write(TextEditor* toWrite)
{
	this->setText(toWrite->getText() + " + GPT Plugin");
}

string GPT_Plugin::read()
{
	return getText();
}