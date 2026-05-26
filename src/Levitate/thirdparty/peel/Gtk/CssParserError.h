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
enum class CssParserError : std::underlying_type<::GtkCssParserError>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::CssParserError>
{
  typedef Gtk::CssParserError UnownedType;

  static Gtk::CssParserError
  get (const ::GValue *value)
  {
    return static_cast<Gtk::CssParserError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::CssParserError m)
  {
    g_value_set_enum (value, static_cast<::GtkCssParserError> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::CssParserError m)
  {
    set (value, m);
  }

  static Gtk::CssParserError
  cast_for_create (Gtk::CssParserError m) noexcept
  {
    return m;
  }
};


namespace Gtk
{
enum class CssParserError : std::underlying_type<::GtkCssParserError>::type
{
  FAILED = GTK_CSS_PARSER_ERROR_FAILED,
  SYNTAX = GTK_CSS_PARSER_ERROR_SYNTAX,
  IMPORT = GTK_CSS_PARSER_ERROR_IMPORT,
  NAME = GTK_CSS_PARSER_ERROR_NAME,
  UNKNOWN_VALUE = GTK_CSS_PARSER_ERROR_UNKNOWN_VALUE,
}; /* enum CssParserError */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
