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

peel_begin_header

namespace peel
{
namespace Gtk
{
enum class CssParserWarning : std::underlying_type<::GtkCssParserWarning>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::CssParserWarning>
{
  typedef Gtk::CssParserWarning UnownedType;

  static Gtk::CssParserWarning
  get (const ::GValue *value)
  {
    return static_cast<Gtk::CssParserWarning> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::CssParserWarning m)
  {
    g_value_set_enum (value, static_cast<::GtkCssParserWarning> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::CssParserWarning m)
  {
    set (value, m);
  }

  static Gtk::CssParserWarning
  cast_for_create (Gtk::CssParserWarning m) noexcept
  {
    return m;
  }
};


namespace Gtk
{
enum class CssParserWarning : std::underlying_type<::GtkCssParserWarning>::type
{
  DEPRECATED = GTK_CSS_PARSER_WARNING_DEPRECATED,
  SYNTAX = GTK_CSS_PARSER_WARNING_SYNTAX,
  UNIMPLEMENTED = GTK_CSS_PARSER_WARNING_UNIMPLEMENTED,
}; /* enum CssParserWarning */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
