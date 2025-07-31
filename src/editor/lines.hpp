#ifndef LINES_H
#define LINES_H

#include <string>

#define INIT_NUMBER_OF_LINES 10

void InitLines();

std::string GetCurrentLine();
std::string GetAllLines();
void InsertCharacter(unsigned int Codepoint, bool MoveCaretForward = true);
void DeleteCharacters(int Amount = 1, bool MoveCaretBackward = true);

void MoveCaret(long HorizontalAmount = 0, long VerticalAmount = 0);
unsigned long GetCaretLine();
unsigned long GetCaretColumn();

extern unsigned long global_MaxLineLength;
extern unsigned long global_MaxLinesAmount;

#endif // LINES_H
