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
enum class TextExtendSelection : std::underlying_type<::GtkTextExtendSelection>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::TextExtendSelection>
{
  typedef Gtk::TextExtendSelection UnownedType;

  static Gtk::TextExtendSelection
  get (const ::GValue *value)
  {
    return static_cast<Gtk::TextExtendSelection> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::TextExtendSelection m)
  {
    g_value_set_enum (value, static_cast<::GtkTextExtendSelection> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::TextExtendSelection m)
  {
    set (value, m);
  }

  static Gtk::TextExtendSelection
  cast_for_create (Gtk::TextExtendSelection m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::TextExtendSelection> ()
{
  return gtk_text_extend_selection_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::TextExtendSelection>
{
  Gtk::TextExtendSelection default_value;

  constexpr PspecTraits (Gtk::TextExtendSelection default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_text_extend_selection_get_type (),
                              static_cast<::GtkTextExtendSelection> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class TextExtendSelection : std::underlying_type<::GtkTextExtendSelection>::type
{
  WORD = GTK_TEXT_EXTEND_SELECTION_WORD,
  LINE = GTK_TEXT_EXTEND_SELECTION_LINE,
}; /* enum TextExtendSelection */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
