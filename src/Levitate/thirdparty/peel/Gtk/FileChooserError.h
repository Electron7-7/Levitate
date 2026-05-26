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
#include <peel/Gtk/FileChooser.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Quark;
} /* namespace GLib */

namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::FileChooser::Error>
{
  typedef Gtk::FileChooser::Error UnownedType;

  static Gtk::FileChooser::Error
  get (const ::GValue *value)
  {
    return static_cast<Gtk::FileChooser::Error> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::FileChooser::Error m)
  {
    g_value_set_enum (value, static_cast<::GtkFileChooserError> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::FileChooser::Error m)
  {
    set (value, m);
  }

  static Gtk::FileChooser::Error
  cast_for_create (Gtk::FileChooser::Error m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::FileChooser::Error> ()
{
  return gtk_file_chooser_error_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::FileChooser::Error>
{
  Gtk::FileChooser::Error default_value;

  constexpr PspecTraits (Gtk::FileChooser::Error default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_file_chooser_error_get_type (),
                              static_cast<::GtkFileChooserError> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class FileChooser::Error : std::underlying_type<::GtkFileChooserError>::type
{
  NONEXISTENT = GTK_FILE_CHOOSER_ERROR_NONEXISTENT,
  BAD_FILENAME = GTK_FILE_CHOOSER_ERROR_BAD_FILENAME,
  ALREADY_EXISTS = GTK_FILE_CHOOSER_ERROR_ALREADY_EXISTS,
  INCOMPLETE_HOSTNAME = GTK_FILE_CHOOSER_ERROR_INCOMPLETE_HOSTNAME,
}; /* enum FileChooser::Error */

peel_no_warn_unused
static GLib::Quark
file_chooser_error_quark () noexcept
{
  ::GQuark _peel_return = gtk_file_chooser_error_quark ();
  return static_cast<GLib::Quark> (_peel_return);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
