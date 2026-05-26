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
#include <peel/Gtk/Accessible.h>

peel_begin_header

namespace peel
{
namespace GObject
{
struct Value;
} /* namespace GObject */

namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Accessible::State>
{
  typedef Gtk::Accessible::State UnownedType;

  static Gtk::Accessible::State
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Accessible::State> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Accessible::State m)
  {
    g_value_set_enum (value, static_cast<::GtkAccessibleState> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Accessible::State m)
  {
    set (value, m);
  }

  static Gtk::Accessible::State
  cast_for_create (Gtk::Accessible::State m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Accessible::State> ()
{
  return gtk_accessible_state_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Accessible::State>
{
  Gtk::Accessible::State default_value;

  constexpr PspecTraits (Gtk::Accessible::State default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_accessible_state_get_type (),
                              static_cast<::GtkAccessibleState> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Accessible::State : std::underlying_type<::GtkAccessibleState>::type
{
  BUSY = GTK_ACCESSIBLE_STATE_BUSY,
  CHECKED = GTK_ACCESSIBLE_STATE_CHECKED,
  DISABLED = GTK_ACCESSIBLE_STATE_DISABLED,
  EXPANDED = GTK_ACCESSIBLE_STATE_EXPANDED,
  HIDDEN = GTK_ACCESSIBLE_STATE_HIDDEN,
  INVALID = GTK_ACCESSIBLE_STATE_INVALID,
  PRESSED = GTK_ACCESSIBLE_STATE_PRESSED,
  SELECTED = GTK_ACCESSIBLE_STATE_SELECTED,
  VISITED = GTK_ACCESSIBLE_STATE_VISITED,
}; /* enum Accessible::State */

peel_no_warn_unused peel_arg_in (2) peel_nonnull_args (2)
static void
accessible_state_init_value (Accessible::State state, GObject::Value *value) noexcept
{
  ::GtkAccessibleState _peel_state = static_cast<::GtkAccessibleState> (state);
  ::GValue *_peel_value = reinterpret_cast<::GValue *> (value);
  gtk_accessible_state_init_value (_peel_state, _peel_value);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GObject/Value.h>
