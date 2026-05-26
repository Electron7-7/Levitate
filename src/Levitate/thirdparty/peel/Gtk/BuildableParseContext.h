#pragma once

/* Auto-generated, do not modify */
/* Package gtk4 */

#include <peel/GObject/Type.h>
#include <peel/RefPtr.h>
#include <peel/FloatPtr.h>
#include <peel/UniquePtr.h>
#include <peel/ArrayRef.h>
#include <peel/String.h>
#include <peel/signal.h>
#include <peel/callback.h>
#include <peel/property.h>
#include <peel/lang.h>
#include <cstdint>
#include <utility>
#include <gtk/gtk.h>
#include <peel/Gtk/Buildable.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct PtrArray;
} /* namespace GLib */

namespace Gtk
{
} /* namespace Gtk */


namespace Gtk
{
class /* record */ Buildable::ParseContext
{
private:
  ParseContext () = delete;
  ParseContext (const ParseContext &) = delete;
  ParseContext (ParseContext &&) = delete;
  ~ParseContext ();

public:
  const char *
  get_element () noexcept
  {
    ::GtkBuildableParseContext *_peel_this = reinterpret_cast<::GtkBuildableParseContext *> (this);
    return gtk_buildable_parse_context_get_element (_peel_this);
  }

  peel_returns_nonnull
  GLib::PtrArray *
  get_element_stack () noexcept
  {
    ::GtkBuildableParseContext *_peel_this = reinterpret_cast<::GtkBuildableParseContext *> (this);
    ::GPtrArray *_peel_return = gtk_buildable_parse_context_get_element_stack (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<GLib::PtrArray *> (_peel_return);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_position (int *line_number, int *char_number) noexcept
  {
    ::GtkBuildableParseContext *_peel_this = reinterpret_cast<::GtkBuildableParseContext *> (this);
    gtk_buildable_parse_context_get_position (_peel_this, line_number, char_number);
  }

  void *
  pop () noexcept
  {
    ::GtkBuildableParseContext *_peel_this = reinterpret_cast<::GtkBuildableParseContext *> (this);
    return gtk_buildable_parse_context_pop (_peel_this);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  push (const Buildable::Parser *parser, void *user_data) noexcept
  {
    ::GtkBuildableParseContext *_peel_this = reinterpret_cast<::GtkBuildableParseContext *> (this);
    const ::GtkBuildableParser *_peel_parser = reinterpret_cast<const ::GtkBuildableParser *> (parser);
    gtk_buildable_parse_context_push (_peel_this, _peel_parser, user_data);
  }
}; /* record Buildable::ParseContext */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
