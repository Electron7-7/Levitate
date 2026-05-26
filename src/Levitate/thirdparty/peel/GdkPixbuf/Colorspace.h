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

peel_begin_header

namespace peel
{
namespace GdkPixbuf
{
enum class Colorspace : std::underlying_type<::GdkColorspace>::type;
} /* namespace GdkPixbuf */

template<>
struct GObject::Value::Traits<GdkPixbuf::Colorspace>
{
  typedef GdkPixbuf::Colorspace UnownedType;

  static GdkPixbuf::Colorspace
  get (const ::GValue *value)
  {
    return static_cast<GdkPixbuf::Colorspace> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GdkPixbuf::Colorspace m)
  {
    g_value_set_enum (value, static_cast<::GdkColorspace> (m));
  }

  static void
  set_marshal_return (::GValue *value, GdkPixbuf::Colorspace m)
  {
    set (value, m);
  }

  static GdkPixbuf::Colorspace
  cast_for_create (GdkPixbuf::Colorspace m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<GdkPixbuf::Colorspace> ()
{
  return gdk_colorspace_get_type ();
}
template<>
struct peel::internals::PspecTraits<GdkPixbuf::Colorspace>
{
  GdkPixbuf::Colorspace default_value;

  constexpr PspecTraits (GdkPixbuf::Colorspace default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_colorspace_get_type (),
                              static_cast<::GdkColorspace> (default_value),
                              basics.flags);
  }
};


namespace GdkPixbuf
{
enum class Colorspace : std::underlying_type<::GdkColorspace>::type
{
  RGB = GDK_COLORSPACE_RGB,
}; /* enum Colorspace */


} /* namespace GdkPixbuf */
} /* namespace peel */

peel_end_header
