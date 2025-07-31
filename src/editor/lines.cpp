#include "lines.hpp"

#include <vector>

#ifdef DEBUGGING
#define EMPTY 'X'
#else
#define EMPTY ' '
#endif

#define HARDCODED_LINE_LENGTH 0x14
#define HARDCODED_LINES_COUNT 0x0A

std::string new_line;
std::vector<std::string> text_lines = {};

unsigned long caret_HorizontalPosition = 0;
unsigned long caret_VerticalPosition   = 0;

unsigned long global_MaxLineLength  = HARDCODED_LINE_LENGTH;
unsigned long global_MaxLinesAmount = HARDCODED_LINES_COUNT;

void InitLines()
{
    new_line.resize(global_MaxLineLength, EMPTY);
    text_lines.resize(global_MaxLinesAmount, new_line);
}

void MoveCaret(long horizontal, long vertical)
{
    if(horizontal != 0)
    {
        if(horizontal < 0 && (horizontal * -1) > caret_HorizontalPosition)
            horizontal = 0;

        else if(horizontal > 0 && horizontal >= (global_MaxLineLength - caret_HorizontalPosition))
            horizontal = (global_MaxLineLength - caret_HorizontalPosition - 1);

        caret_HorizontalPosition += horizontal;
    }

    if(vertical != 0)
    {
        if(vertical < 0 && (vertical * -1) > caret_VerticalPosition)
            vertical = 0;

        else if(vertical > 0 && vertical > (global_MaxLinesAmount - caret_VerticalPosition))
            vertical = (global_MaxLinesAmount - caret_VerticalPosition);

        caret_VerticalPosition += vertical;
    }
}

void InsertCharacter(unsigned int codepoint, bool move_caret_forward)
{
    text_lines.at(caret_VerticalPosition).replace(caret_HorizontalPosition, 1, 1, static_cast<char>(codepoint));

    if(move_caret_forward)
        MoveCaret(1);
}

void DeleteCharacters(int amount, bool move_caret_backward)
{
    if(amount > caret_HorizontalPosition && caret_HorizontalPosition != 0)
        amount = caret_HorizontalPosition; // If we tried to delete too many characters, delete all the characters from the caret's position to 0

    if(amount != 1)
        text_lines.at(caret_VerticalPosition).replace(caret_HorizontalPosition - amount, amount, 1, EMPTY);
    else
        text_lines.at(caret_VerticalPosition).replace(caret_HorizontalPosition, 1, 1, EMPTY);

    if( move_caret_backward && caret_HorizontalPosition != 0)
        MoveCaret(amount * -1);
}

std::string GetCurrentLine()
{ return text_lines.at(caret_VerticalPosition); }

std::string GetAllLines()
{
    std::string return_string = "";
    for(unsigned int i = 0 ; i < text_lines.size() ; i++)
    {
        std::string new_line = text_lines.at(i);

        if(caret_VerticalPosition == i)
            new_line.replace(caret_HorizontalPosition, 1, "|");

        return_string.append(new_line + "\n");
    }

    return return_string;
}

unsigned long GetCaretColumn()
{ return caret_HorizontalPosition; }

unsigned long GetCaretLine()
{ return caret_VerticalPosition; }
