#pragma once

/* Auto-generated, do not modify */
/* Package gdk-pixbuf-2.0 */

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
#include <gdk-pixbuf/gdk-pixbuf.h>
#include <peel/GLib/Quark.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Quark;
} /* namespace GLib */

namespace GdkPixbuf
{
enum class PixbufError : std::underlying_type<::GdkPixbufError>::type;
} /* namespace GdkPixbuf */

template<>
struct GObject::Value::Traits<GdkPixbuf::PixbufError>
{
  typedef GdkPixbuf::PixbufError UnownedType;

  static GdkPixbuf::PixbufError
  get (const ::GValue *value)
  {
    return static_cast<GdkPixbuf::PixbufError> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GdkPixbuf::PixbufError m)
  {
    g_value_set_enum (value, static_cast<::GdkPixbufError> (m));
  }

  static void
  set_marshal_return (::GValue *value, GdkPixbuf::PixbufError m)
  {
    set (value, m);
  }

  static GdkPixbuf::PixbufError
  cast_for_create (GdkPixbuf::PixbufError m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<GdkPixbuf::PixbufError> ()
{
  return gdk_pixbuf_error_get_type ();
}
template<>
struct peel::internals::PspecTraits<GdkPixbuf::PixbufError>
{
  GdkPixbuf::PixbufError default_value;

  constexpr PspecTraits (GdkPixbuf::PixbufError default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_pixbuf_error_get_type (),
                              static_cast<::GdkPixbufError> (default_value),
                              basics.flags);
  }
};


namespace GdkPixbuf
{
enum class PixbufError : std::underlying_type<::GdkPixbufError>::type
{
  CORRUPT_IMAGE = GDK_PIXBUF_ERROR_CORRUPT_IMAGE,
  INSUFFICIENT_MEMORY = GDK_PIXBUF_ERROR_INSUFFICIENT_MEMORY,
  BAD_OPTION = GDK_PIXBUF_ERROR_BAD_OPTION,
  UNKNOWN_TYPE = GDK_PIXBUF_ERROR_UNKNOWN_TYPE,
  UNSUPPORTED_OPERATION = GDK_PIXBUF_ERROR_UNSUPPORTED_OPERATION,
  FAILED = GDK_PIXBUF_ERROR_FAILED,
  INCOMPLETE_ANIMATION = GDK_PIXBUF_ERROR_INCOMPLETE_ANIMATION,
}; /* enum PixbufError */

peel_no_warn_unused
static GLib::Quark
pixbuf_error_quark () noexcept
{
  ::GQuark _peel_return = gdk_pixbuf_error_quark ();
  return static_cast<GLib::Quark> (_peel_return);
}


} /* namespace GdkPixbuf */
} /* namespace peel */

peel_end_header
