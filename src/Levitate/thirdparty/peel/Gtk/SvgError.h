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
struct Error;
struct Quark;
} /* namespace GLib */

namespace Gtk
{
enum class SvgError : std::underlying_type<::GtkSvgError>::type;
struct SvgLocation;
} /* namespace Gtk */

template<>
struct GObject::Value::Traits<Gtk::SvgError>
{
  typedef Gtk::SvgError UnownedType;

  static Gtk::SvgError
  get (const ::GValue *value)
  {
    return static_cast<Gtk::SvgError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gtk::SvgError m)
  {
    g_value_set_enum (value, static_cast<::GtkSvgError> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gtk::SvgError m)
  {
    set (value, m);
  }

  static Gtk::SvgError
  cast_for_create (Gtk::SvgError m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gtk::SvgError> ()
{
  return gtk_svg_error_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gtk::SvgError>
{
  Gtk::SvgError default_value;

  constexpr PspecTraits (Gtk::SvgError default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gtk_svg_error_get_type (),
                              static_cast<::GtkSvgError> (default_value),
                              basics.flags);
  }
};


namespace Gtk
{
enum class SvgError : std::underlying_type<::GtkSvgError>::type
{
  INVALID_SYNTAX = GTK_SVG_ERROR_INVALID_SYNTAX,
  INVALID_ELEMENT = GTK_SVG_ERROR_INVALID_ELEMENT,
  INVALID_ATTRIBUTE = GTK_SVG_ERROR_INVALID_ATTRIBUTE,
  MISSING_ATTRIBUTE = GTK_SVG_ERROR_MISSING_ATTRIBUTE,
  INVALID_REFERENCE = GTK_SVG_ERROR_INVALID_REFERENCE,
  FAILED_UPDATE = GTK_SVG_ERROR_FAILED_UPDATE,
  FAILED_RENDERING = GTK_SVG_ERROR_FAILED_RENDERING,
  IGNORED_ELEMENT = GTK_SVG_ERROR_IGNORED_ELEMENT,
  LIMITS_EXCEEDED = GTK_SVG_ERROR_LIMITS_EXCEEDED,
  NOT_IMPLEMENTED = GTK_SVG_ERROR_NOT_IMPLEMENTED,
}; /* enum SvgError */

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static const char *
svg_error_get_attribute (const GLib::Error *error) noexcept
{
  const ::GError *_peel_error = reinterpret_cast<const ::GError *> (error);
  return gtk_svg_error_get_attribute (_peel_error);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static const char *
svg_error_get_element (const GLib::Error *error) noexcept
{
  const ::GError *_peel_error = reinterpret_cast<const ::GError *> (error);
  return gtk_svg_error_get_element (_peel_error);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static const SvgLocation *
svg_error_get_end (const GLib::Error *error) noexcept
{
  const ::GError *_peel_error = reinterpret_cast<const ::GError *> (error);
  const ::GtkSvgLocation *_peel_return = gtk_svg_error_get_end (_peel_error);
  return reinterpret_cast<const SvgLocation *> (_peel_return);
}

peel_no_warn_unused peel_arg_in (1) peel_nonnull_args (1)
static const SvgLocation *
svg_error_get_start (const GLib::Error *error) noexcept
{
  const ::GError *_peel_error = reinterpret_cast<const ::GError *> (error);
  const ::GtkSvgLocation *_peel_return = gtk_svg_error_get_start (_peel_error);
  return reinterpret_cast<const SvgLocation *> (_peel_return);
}

peel_no_warn_unused
static GLib::Quark
svg_error_quark () noexcept
{
  ::GQuark _peel_return = gtk_svg_error_quark ();
  return static_cast<GLib::Quark> (_peel_return);
}


} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gtk/SvgLocation.h>
