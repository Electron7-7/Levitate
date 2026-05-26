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
enum class DeleteType : std::underlying_type<::GtkDeleteType>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::DeleteType>
{
  typedef Gtk::DeleteType UnownedType;

  static Gtk::DeleteType
  get (const ::GValue *value)
  {
    return static_cast<Gtk::DeleteType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::DeleteType m)
  {
    g_value_set_enum (value, static_cast<::GtkDeleteType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::DeleteType m)
  {
    set (value, m);
  }

  static Gtk::DeleteType
  cast_for_create (Gtk::DeleteType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::DeleteType> ()
{
  return gtk_delete_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::DeleteType>
{
  Gtk::DeleteType default_value;

  constexpr PspecTraits (Gtk::DeleteType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_delete_type_get_type (),
                              static_cast<::GtkDeleteType> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class DeleteType : std::underlying_type<::GtkDeleteType>::type
{
  CHARS = GTK_DELETE_CHARS,
  WORD_ENDS = GTK_DELETE_WORD_ENDS,
  WORDS = GTK_DELETE_WORDS,
  DISPLAY_LINES = GTK_DELETE_DISPLAY_LINES,
  DISPLAY_LINE_ENDS = GTK_DELETE_DISPLAY_LINE_ENDS,
  PARAGRAPH_ENDS = GTK_DELETE_PARAGRAPH_ENDS,
  PARAGRAPHS = GTK_DELETE_PARAGRAPHS,
  WHITESPACE = GTK_DELETE_WHITESPACE,
}; /* enum DeleteType */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
