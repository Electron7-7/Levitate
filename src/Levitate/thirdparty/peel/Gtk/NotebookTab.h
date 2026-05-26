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
#include <peel/Gtk/Notebook.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::Notebook::Tab>
{
  typedef Gtk::Notebook::Tab UnownedType;

  static Gtk::Notebook::Tab
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Notebook::Tab> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Notebook::Tab m)
  {
    g_value_set_enum (value, static_cast<::GtkNotebookTab> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Notebook::Tab m)
  {
    set (value, m);
  }

  static Gtk::Notebook::Tab
  cast_for_create (Gtk::Notebook::Tab m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Notebook::Tab> ()
{
  return gtk_notebook_tab_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Notebook::Tab>
{
  Gtk::Notebook::Tab default_value;

  constexpr PspecTraits (Gtk::Notebook::Tab default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_notebook_tab_get_type (),
                              static_cast<::GtkNotebookTab> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Notebook::Tab : std::underlying_type<::GtkNotebookTab>::type
{
  FIRST = GTK_NOTEBOOK_TAB_FIRST,
  LAST = GTK_NOTEBOOK_TAB_LAST,
}; /* enum Notebook::Tab */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
