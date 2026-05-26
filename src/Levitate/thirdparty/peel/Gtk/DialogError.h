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
#include <peel/GLib/Quark.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Quark;
} /* namespace GLib */

namespace Gtk
{
enum class DialogError : std::underlying_type<::GtkDialogError>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::DialogError>
{
  typedef Gtk::DialogError UnownedType;

  static Gtk::DialogError
  get (const ::GValue *value)
  {
    return static_cast<Gtk::DialogError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::DialogError m)
  {
    g_value_set_enum (value, static_cast<::GtkDialogError> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::DialogError m)
  {
    set (value, m);
  }

  static Gtk::DialogError
  cast_for_create (Gtk::DialogError m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::DialogError> ()
{
  return gtk_dialog_error_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::DialogError>
{
  Gtk::DialogError default_value;

  constexpr PspecTraits (Gtk::DialogError default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_dialog_error_get_type (),
                              static_cast<::GtkDialogError> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class DialogError : std::underlying_type<::GtkDialogError>::type
{
  FAILED = GTK_DIALOG_ERROR_FAILED,
  CANCELLED = GTK_DIALOG_ERROR_CANCELLED,
  DISMISSED = GTK_DIALOG_ERROR_DISMISSED,
}; /* enum DialogError */

peel_no_warn_unused
static GLib::Quark
dialog_error_quark () noexcept
{
  ::GQuark _peel_return = gtk_dialog_error_quark ();
  return static_cast<GLib::Quark> (_peel_return);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
