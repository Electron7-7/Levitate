#include "e_scape.hpp"
#include "fonts.hpp"

std::string Levitate::E_Scape::global_buffer = "";
unsigned int Levitate::E_Scape::cursor_position = 0;
Levitate::TextRenderCmd Levitate::E_Scape::main_text_render_command(Levitate::E_Scape::global_buffer, Verdana_ttf.id, 100.0f, 500.0f, 1.0f);

void Levitate::E_Scape::moveCursorHorizontally(const int by_this_much)
{
    if((by_this_much < 0 && Levitate::E_Scape::cursor_position == 0) || (Levitate::E_Scape::cursor_position + by_this_much) > Levitate::E_Scape::global_buffer.size())
        return;
    Levitate::E_Scape::cursor_position += by_this_much;
}

void Levitate::E_Scape::InsertCharacter(const unsigned int codepoint)
{
    Levitate::E_Scape::global_buffer.insert(Levitate::E_Scape::cursor_position, 1, static_cast<char>(codepoint));
    Levitate::E_Scape::cursor_position += 1;
    Levitate::E_Scape::updateAndBufferTextRenderCmd();
}

void Levitate::E_Scape::InsertNewLine()
{
    Levitate::E_Scape::global_buffer.insert(Levitate::E_Scape::cursor_position, 1, '\n');
    Levitate::E_Scape::cursor_position += 1;
}

void Levitate::E_Scape::DeleteCharacter()
{
    if(Levitate::E_Scape::cursor_position == 0)
        return;
    Levitate::E_Scape::cursor_position -= 1;
    Levitate::E_Scape::global_buffer.erase(Levitate::E_Scape::cursor_position, 1);
}

const std::string Levitate::E_Scape::getGlobalBuffer()
{
    std::string new_global_buffer = Levitate::E_Scape::global_buffer;
    return new_global_buffer.insert(Levitate::E_Scape::cursor_position, 1, '|'); // Todo: make an actual cursor
}

void Levitate::E_Scape::updateAndBufferTextRenderCmd()
{
    if(Levitate::E_Scape::main_text_render_command.invalid())
        Levitate::E_Scape::main_text_render_command.font_name = Verdana_ttf.id;
    Levitate::E_Scape::main_text_render_command.text = global_buffer;
    Levitate::Renderer::BufferRenderCommand(Levitate::E_Scape::main_text_render_command);
}