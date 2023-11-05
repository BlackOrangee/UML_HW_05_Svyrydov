#include "TextEditor.h"

TextEditor::TextEditor(string text)
{
	this->text = text;
}

void TextEditor::setText(string text)
{
	this->text = text;
}

string TextEditor::getText()
{
	return text;
}

void TextEditor::write(TextEditor* toWrite)
{

	this->text = toWrite->getText();
}

string TextEditor::read()
{
	return text;
}