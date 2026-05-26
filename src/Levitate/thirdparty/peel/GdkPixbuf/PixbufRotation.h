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
enum class PixbufRotation : std::underlying_type<::GdkPixbufRotation>::type;
} /* namespace GdkPixbuf */

template<>
struct GObject::Value::Traits<GdkPixbuf::PixbufRotation>
{
  typedef GdkPixbuf::PixbufRotation UnownedType;

  static GdkPixbuf::PixbufRotation
  get (const ::GValue *value)
  {
    return static_cast<GdkPixbuf::PixbufRotation> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GdkPixbuf::PixbufRotation m)
  {
    g_value_set_enum (value, static_cast<::GdkPixbufRotation> (m));
  }

  static void
  set_marshal_return (::GValue *value, GdkPixbuf::PixbufRotation m)
  {
    set (value, m);
  }

  static GdkPixbuf::PixbufRotation
  cast_for_create (GdkPixbuf::PixbufRotation m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<GdkPixbuf::PixbufRotation> ()
{
  return gdk_pixbuf_rotation_get_type ();
}
template<>
struct peel::internals::PspecTraits<GdkPixbuf::PixbufRotation>
{
  GdkPixbuf::PixbufRotation default_value;

  constexpr PspecTraits (GdkPixbuf::PixbufRotation default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_pixbuf_rotation_get_type (),
                              static_cast<::GdkPixbufRotation> (default_value),
                              basics.flags);
  }
};


namespace GdkPixbuf
{
enum class PixbufRotation : std::underlying_type<::GdkPixbufRotation>::type
{
  NONE = GDK_PIXBUF_ROTATE_NONE,
  COUNTERCLOCKWISE = GDK_PIXBUF_ROTATE_COUNTERCLOCKWISE,
  UPSIDEDOWN = GDK_PIXBUF_ROTATE_UPSIDEDOWN,
  CLOCKWISE = GDK_PIXBUF_ROTATE_CLOCKWISE,
}; /* enum PixbufRotation */


} /* namespace GdkPixbuf */
} /* namespace peel */

peel_end_header
