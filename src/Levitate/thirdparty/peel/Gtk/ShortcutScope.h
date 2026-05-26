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
#include <peel/Gtk/Shortcut.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Shortcut::Scope>
{
  typedef Gtk::Shortcut::Scope UnownedType;

  static Gtk::Shortcut::Scope
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Shortcut::Scope> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Shortcut::Scope m)
  {
    g_value_set_enum (value, static_cast<::GtkShortcutScope> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Shortcut::Scope m)
  {
    set (value, m);
  }

  static Gtk::Shortcut::Scope
  cast_for_create (Gtk::Shortcut::Scope m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Shortcut::Scope> ()
{
  return gtk_shortcut_scope_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Shortcut::Scope>
{
  Gtk::Shortcut::Scope default_value;

  constexpr PspecTraits (Gtk::Shortcut::Scope default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_shortcut_scope_get_type (),
                              static_cast<::GtkShortcutScope> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Shortcut::Scope : std::underlying_type<::GtkShortcutScope>::type
{
  LOCAL = GTK_SHORTCUT_SCOPE_LOCAL,
  MANAGED = GTK_SHORTCUT_SCOPE_MANAGED,
  GLOBAL = GTK_SHORTCUT_SCOPE_GLOBAL,
}; /* enum Shortcut::Scope */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
