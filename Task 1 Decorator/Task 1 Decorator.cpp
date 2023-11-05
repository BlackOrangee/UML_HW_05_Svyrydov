// Task 1 Decorator.
// 
// Develop a simple text editor with the ability to add various plugins (decorators) to extend the editor's functionality.
//

#include <iostream>
#include "TextEditor.h"
#include "GPT_Plugin.h"

using namespace std;

int main()
{
	TextEditor* text = new TextEditor("text");

	TextEditor* GPTText = new GPT_Plugin(text);


	cout << GPTText->read();
}