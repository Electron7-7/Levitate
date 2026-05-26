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
#include <gdk/gdk.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
enum class SubpixelLayout : std::underlying_type<::GdkSubpixelLayout>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::SubpixelLayout>
{
  typedef Gdk::SubpixelLayout UnownedType;

  static Gdk::SubpixelLayout
  get (const ::GValue *value)
  {
    return static_cast<Gdk::SubpixelLayout> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::SubpixelLayout m)
  {
    g_value_set_enum (value, static_cast<::GdkSubpixelLayout> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::SubpixelLayout m)
  {
    set (value, m);
  }

  static Gdk::SubpixelLayout
  cast_for_create (Gdk::SubpixelLayout m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::SubpixelLayout> ()
{
  return gdk_subpixel_layout_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::SubpixelLayout>
{
  Gdk::SubpixelLayout default_value;

  constexpr PspecTraits (Gdk::SubpixelLayout default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_subpixel_layout_get_type (),
                              static_cast<::GdkSubpixelLayout> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class SubpixelLayout : std::underlying_type<::GdkSubpixelLayout>::type
{
  UNKNOWN = GDK_SUBPIXEL_LAYOUT_UNKNOWN,
  NONE = GDK_SUBPIXEL_LAYOUT_NONE,
  HORIZONTAL_RGB = GDK_SUBPIXEL_LAYOUT_HORIZONTAL_RGB,
  HORIZONTAL_BGR = GDK_SUBPIXEL_LAYOUT_HORIZONTAL_BGR,
  VERTICAL_RGB = GDK_SUBPIXEL_LAYOUT_VERTICAL_RGB,
  VERTICAL_BGR = GDK_SUBPIXEL_LAYOUT_VERTICAL_BGR,
}; /* enum SubpixelLayout */


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
