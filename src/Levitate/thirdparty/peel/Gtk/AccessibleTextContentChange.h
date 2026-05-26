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
#include <peel/Gtk/AccessibleText.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::AccessibleText::ContentChange>
{
  typedef Gtk::AccessibleText::ContentChange UnownedType;

  static Gtk::AccessibleText::ContentChange
  get (const ::GValue *value)
  {
    return static_cast<Gtk::AccessibleText::ContentChange> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::AccessibleText::ContentChange m)
  {
    g_value_set_enum (value, static_cast<::GtkAccessibleTextContentChange> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::AccessibleText::ContentChange m)
  {
    set (value, m);
  }

  static Gtk::AccessibleText::ContentChange
  cast_for_create (Gtk::AccessibleText::ContentChange m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::AccessibleText::ContentChange> ()
{
  return gtk_accessible_text_content_change_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::AccessibleText::ContentChange>
{
  Gtk::AccessibleText::ContentChange default_value;

  constexpr PspecTraits (Gtk::AccessibleText::ContentChange default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_accessible_text_content_change_get_type (),
                              static_cast<::GtkAccessibleTextContentChange> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class AccessibleText::ContentChange : std::underlying_type<::GtkAccessibleTextContentChange>::type
{
  INSERT = GTK_ACCESSIBLE_TEXT_CONTENT_CHANGE_INSERT,
  REMOVE = GTK_ACCESSIBLE_TEXT_CONTENT_CHANGE_REMOVE,
}; /* enum AccessibleText::ContentChange */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
