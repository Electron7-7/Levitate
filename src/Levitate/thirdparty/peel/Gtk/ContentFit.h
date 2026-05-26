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
enum class ContentFit : std::underlying_type<::GtkContentFit>::type;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::ContentFit>
{
  typedef Gtk::ContentFit UnownedType;

  static Gtk::ContentFit
  get (const ::GValue *value)
  {
    return static_cast<Gtk::ContentFit> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::ContentFit m)
  {
    g_value_set_enum (value, static_cast<::GtkContentFit> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::ContentFit m)
  {
    set (value, m);
  }

  static Gtk::ContentFit
  cast_for_create (Gtk::ContentFit m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::ContentFit> ()
{
  return gtk_content_fit_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::ContentFit>
{
  Gtk::ContentFit default_value;

  constexpr PspecTraits (Gtk::ContentFit default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_content_fit_get_type (),
                              static_cast<::GtkContentFit> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class ContentFit : std::underlying_type<::GtkContentFit>::type
{
  FILL = GTK_CONTENT_FIT_FILL,
  CONTAIN = GTK_CONTENT_FIT_CONTAIN,
  COVER = GTK_CONTENT_FIT_COVER,
  SCALE_DOWN = GTK_CONTENT_FIT_SCALE_DOWN,
}; /* enum ContentFit */


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
