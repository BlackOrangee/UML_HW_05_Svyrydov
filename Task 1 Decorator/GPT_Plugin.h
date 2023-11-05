#pragma once
#include "TextEditor.h"
class GPT_Plugin :
    public TextEditor
{
public:
    GPT_Plugin() {};
    GPT_Plugin(TextEditor*);
    void write(TextEditor*) override;
    string read();

};

