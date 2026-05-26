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
enum class SurfaceEdge : std::underlying_type<::GdkSurfaceEdge>::type;
} /* namespace Gdk */

template<>
struct GObject::Value::Traits<Gdk::SurfaceEdge>
{
  typedef Gdk::SurfaceEdge UnownedType;

  static Gdk::SurfaceEdge
  get (const ::GValue *value)
  {
    return static_cast<Gdk::SurfaceEdge> (g_value_get_enum (value));
  }

  static void
  set (::GValue *value, Gdk::SurfaceEdge m)
  {
    g_value_set_enum (value, static_cast<::GdkSurfaceEdge> (m));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::SurfaceEdge m)
  {
    set (value, m);
  }

  static Gdk::SurfaceEdge
  cast_for_create (Gdk::SurfaceEdge m) noexcept
  {
    return m;
  }
};
template<>
inline GObject::Type
GObject::Type::of<Gdk::SurfaceEdge> ()
{
  return gdk_surface_edge_get_type ();
}
template<>
struct peel::internals::PspecTraits<Gdk::SurfaceEdge>
{
  Gdk::SurfaceEdge default_value;

  constexpr PspecTraits (Gdk::SurfaceEdge default_value)
    : default_value (default_value)
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_enum (basics.name, basics.nick, basics.blurb,
                              gdk_surface_edge_get_type (),
                              static_cast<::GdkSurfaceEdge> (default_value),
                              basics.flags);
  }
};


namespace Gdk
{
enum class SurfaceEdge : std::underlying_type<::GdkSurfaceEdge>::type
{
  NORTH_WEST = GDK_SURFACE_EDGE_NORTH_WEST,
  NORTH = GDK_SURFACE_EDGE_NORTH,
  NORTH_EAST = GDK_SURFACE_EDGE_NORTH_EAST,
  WEST = GDK_SURFACE_EDGE_WEST,
  EAST = GDK_SURFACE_EDGE_EAST,
  SOUTH_WEST = GDK_SURFACE_EDGE_SOUTH_WEST,
  SOUTH = GDK_SURFACE_EDGE_SOUTH,
  SOUTH_EAST = GDK_SURFACE_EDGE_SOUTH_EAST,
}; /* enum SurfaceEdge */


} /* namespace Gdk */
} /* namespace peel */

peel_end_header
