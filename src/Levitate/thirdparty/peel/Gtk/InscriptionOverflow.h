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
#include <peel/Gtk/Inscription.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Inscription::Overflow>
{
  typedef Gtk::Inscription::Overflow UnownedType;

  static Gtk::Inscription::Overflow
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Inscription::Overflow> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Inscription::Overflow m)
  {
    g_value_set_enum (value, static_cast<::GtkInscriptionOverflow> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Inscription::Overflow m)
  {
    set (value, m);
  }

  static Gtk::Inscription::Overflow
  cast_for_create (Gtk::Inscription::Overflow m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Inscription::Overflow> ()
{
  return gtk_inscription_overflow_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Inscription::Overflow>
{
  Gtk::Inscription::Overflow default_value;

  constexpr PspecTraits (Gtk::Inscription::Overflow default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_inscription_overflow_get_type (),
                              static_cast<::GtkInscriptionOverflow> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Inscription::Overflow : std::underlying_type<::GtkInscriptionOverflow>::type
{
  CLIP = GTK_INSCRIPTION_OVERFLOW_CLIP,
  ELLIPSIZE_START = GTK_INSCRIPTION_OVERFLOW_ELLIPSIZE_START,
  ELLIPSIZE_MIDDLE = GTK_INSCRIPTION_OVERFLOW_ELLIPSIZE_MIDDLE,
  ELLIPSIZE_END = GTK_INSCRIPTION_OVERFLOW_ELLIPSIZE_END,
}; /* enum Inscription::Overflow */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
