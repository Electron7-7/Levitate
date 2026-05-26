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
enum class PadActionType : std::underlying_type<::GtkPadActionType>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::PadActionType>
{
  typedef Gtk::PadActionType UnownedType;

  static Gtk::PadActionType
  get (const ::GValue *value)
  {
    return static_cast<Gtk::PadActionType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::PadActionType m)
  {
    g_value_set_enum (value, static_cast<::GtkPadActionType> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::PadActionType m)
  {
    set (value, m);
  }

  static Gtk::PadActionType
  cast_for_create (Gtk::PadActionType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::PadActionType> ()
{
  return gtk_pad_action_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::PadActionType>
{
  Gtk::PadActionType default_value;

  constexpr PspecTraits (Gtk::PadActionType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_pad_action_type_get_type (),
                              static_cast<::GtkPadActionType> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class PadActionType : std::underlying_type<::GtkPadActionType>::type
{
  BUTTON = GTK_PAD_ACTION_BUTTON,
  RING = GTK_PAD_ACTION_RING,
  STRIP = GTK_PAD_ACTION_STRIP,
  DIAL = GTK_PAD_ACTION_DIAL,
}; /* enum PadActionType */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
