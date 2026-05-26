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
#include <peel/Gtk/Builder.h>

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
struct GObject::Value::Traits<Gtk::Builder::Error>
{
  typedef Gtk::Builder::Error UnownedType;

  static Gtk::Builder::Error
  get (const ::GValue *value)
  {
    return static_cast<Gtk::Builder::Error> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::Builder::Error m)
  {
    g_value_set_enum (value, static_cast<::GtkBuilderError> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::Builder::Error m)
  {
    set (value, m);
  }

  static Gtk::Builder::Error
  cast_for_create (Gtk::Builder::Error m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::Builder::Error> ()
{
  return gtk_builder_error_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::Builder::Error>
{
  Gtk::Builder::Error default_value;

  constexpr PspecTraits (Gtk::Builder::Error default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_builder_error_get_type (),
                              static_cast<::GtkBuilderError> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class Builder::Error : std::underlying_type<::GtkBuilderError>::type
{
  INVALID_TYPE_FUNCTION = GTK_BUILDER_ERROR_INVALID_TYPE_FUNCTION,
  UNHANDLED_TAG = GTK_BUILDER_ERROR_UNHANDLED_TAG,
  MISSING_ATTRIBUTE = GTK_BUILDER_ERROR_MISSING_ATTRIBUTE,
  INVALID_ATTRIBUTE = GTK_BUILDER_ERROR_INVALID_ATTRIBUTE,
  INVALID_TAG = GTK_BUILDER_ERROR_INVALID_TAG,
  MISSING_PROPERTY_VALUE = GTK_BUILDER_ERROR_MISSING_PROPERTY_VALUE,
  INVALID_VALUE = GTK_BUILDER_ERROR_INVALID_VALUE,
  VERSION_MISMATCH = GTK_BUILDER_ERROR_VERSION_MISMATCH,
  DUPLICATE_ID = GTK_BUILDER_ERROR_DUPLICATE_ID,
  OBJECT_TYPE_REFUSED = GTK_BUILDER_ERROR_OBJECT_TYPE_REFUSED,
  TEMPLATE_MISMATCH = GTK_BUILDER_ERROR_TEMPLATE_MISMATCH,
  INVALID_PROPERTY = GTK_BUILDER_ERROR_INVALID_PROPERTY,
  INVALID_SIGNAL = GTK_BUILDER_ERROR_INVALID_SIGNAL,
  INVALID_ID = GTK_BUILDER_ERROR_INVALID_ID,
  INVALID_FUNCTION = GTK_BUILDER_ERROR_INVALID_FUNCTION,
}; /* enum Builder::Error */

peel_no_warn_unused
static GLib::Quark
builder_error_quark () noexcept
{
  ::GQuark _peel_return = gtk_builder_error_quark ();
  return static_cast<GLib::Quark> (_peel_return);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header
