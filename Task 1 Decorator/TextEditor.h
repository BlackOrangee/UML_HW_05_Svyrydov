#pragma once
#include <iostream>

using namespace std;

class TextEditor
{
private:
	string text;

public:
	TextEditor() {};
	TextEditor(string);
	void setText(string);
	string getText();

	virtual void write(TextEditor*);
	virtual string read();
};



