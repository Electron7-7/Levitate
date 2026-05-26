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
enum class PixbufAlphaMode : std::underlying_type<::GdkPixbufAlphaMode>::type;
} /* namespace GdkPixbuf */

template<>
struct GObject::Value::Traits<GdkPixbuf::PixbufAlphaMode>
{
  typedef GdkPixbuf::PixbufAlphaMode UnownedType;

  static GdkPixbuf::PixbufAlphaMode
  get (const ::GValue *value)
  {
    return static_cast<GdkPixbuf::PixbufAlphaMode> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GdkPixbuf::PixbufAlphaMode m)
  {
    g_value_set_enum (value, static_cast<::GdkPixbufAlphaMode> (m));
  }

  static void
  set_marshal_return (::GValue *value, GdkPixbuf::PixbufAlphaMode m)
  {
    set (value, m);
  }

  static GdkPixbuf::PixbufAlphaMode
  cast_for_create (GdkPixbuf::PixbufAlphaMode m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<GdkPixbuf::PixbufAlphaMode> ()
{
  return gdk_pixbuf_alpha_mode_get_type ();
}
template<>
struct peel::internals::PspecTraits<GdkPixbuf::PixbufAlphaMode>
{
  GdkPixbuf::PixbufAlphaMode default_value;

  constexpr PspecTraits (GdkPixbuf::PixbufAlphaMode default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_pixbuf_alpha_mode_get_type (),
                              static_cast<::GdkPixbufAlphaMode> (default_value),
                              basics.flags);
  }
};


namespace GdkPixbuf
{
enum class PixbufAlphaMode : std::underlying_type<::GdkPixbufAlphaMode>::type
{
  BILEVEL = GDK_PIXBUF_ALPHA_BILEVEL,
  FULL = GDK_PIXBUF_ALPHA_FULL,
}; /* enum PixbufAlphaMode */


} /* namespace GdkPixbuf */
} /* namespace peel */

peel_end_header
