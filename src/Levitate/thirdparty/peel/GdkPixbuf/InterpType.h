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
enum class InterpType : std::underlying_type<::GdkInterpType>::type;
} /* namespace GdkPixbuf */

template<>
struct GObject::Value::Traits<GdkPixbuf::InterpType>
{
  typedef GdkPixbuf::InterpType UnownedType;

  static GdkPixbuf::InterpType
  get (const ::GValue *value)
  {
    return static_cast<GdkPixbuf::InterpType> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, GdkPixbuf::InterpType m)
  {
    g_value_set_enum (value, static_cast<::GdkInterpType> (m));
  }

  static void
  set_marshal_return (::GValue *value, GdkPixbuf::InterpType m)
  {
    set (value, m);
  }

  static GdkPixbuf::InterpType
  cast_for_create (GdkPixbuf::InterpType m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<GdkPixbuf::InterpType> ()
{
  return gdk_interp_type_get_type ();
}
template<>
struct peel::internals::PspecTraits<GdkPixbuf::InterpType>
{
  GdkPixbuf::InterpType default_value;

  constexpr PspecTraits (GdkPixbuf::InterpType default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_interp_type_get_type (),
                              static_cast<::GdkInterpType> (default_value),
                              basics.flags);
  }
};


namespace GdkPixbuf
{
enum class InterpType : std::underlying_type<::GdkInterpType>::type
{
  NEAREST = GDK_INTERP_NEAREST,
  TILES = GDK_INTERP_TILES,
  BILINEAR = GDK_INTERP_BILINEAR,
  HYPER = GDK_INTERP_HYPER,
}; /* enum InterpType */


} /* namespace GdkPixbuf */
} /* namespace peel */

peel_end_header
