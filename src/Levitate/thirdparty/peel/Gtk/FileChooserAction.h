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
#include <peel/Gtk/FileChooser.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::FileChooser::Action>
{
  typedef Gtk::FileChooser::Action UnownedType;

  static Gtk::FileChooser::Action
  get (const ::GValue *value)
  {
    return static_cast<Gtk::FileChooser::Action> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::FileChooser::Action m)
  {
    g_value_set_enum (value, static_cast<::GtkFileChooserAction> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::FileChooser::Action m)
  {
    set (value, m);
  }

  static Gtk::FileChooser::Action
  cast_for_create (Gtk::FileChooser::Action m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::FileChooser::Action> ()
{
  return gtk_file_chooser_action_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::FileChooser::Action>
{
  Gtk::FileChooser::Action default_value;

  constexpr PspecTraits (Gtk::FileChooser::Action default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_file_chooser_action_get_type (),
                              static_cast<::GtkFileChooserAction> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class FileChooser::Action : std::underlying_type<::GtkFileChooserAction>::type
{
  OPEN = GTK_FILE_CHOOSER_ACTION_OPEN,
  SAVE = GTK_FILE_CHOOSER_ACTION_SAVE,
  SELECT_FOLDER = GTK_FILE_CHOOSER_ACTION_SELECT_FOLDER,
}; /* enum FileChooser::Action */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
