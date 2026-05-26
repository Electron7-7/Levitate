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
#include <peel/Gdk/DragSurface.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::DragSurface::Size> ()
{
  return gdk_drag_surface_size_get_type ();
}
template<>
struct GObject::Value::Traits<Gdk::DragSurface::Size>
{
  typedef Gdk::DragSurface::Size * UnownedType;

  static Gdk::DragSurface::Size *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gdk::DragSurface::Size *> (g_value_get_pointer (value));
  }

  static void
  set (::GValue *value, Gdk::DragSurface::Size * r)
  {
    g_value_set_pointer (value, reinterpret_cast<void *> (r));
  }

  static void
  set_marshal_return (::GValue *value, Gdk::DragSurface::Size * r)
  {
    set (value, r);
  }

  static Gdk::DragSurface::Size *
  cast_for_create (Gdk::DragSurface::Size * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gdk::DragSurface::Size>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_pointer (basics.name, basics.nick, basics.blurb, basics.flags);
  }
};


namespace Gdk
{
class /* record */ DragSurface::Size
{
private:
  Size () = delete;
  Size (const Size &) = delete;
  Size (Size &&) = delete;
  ~Size ();

public:
  void
  set_size (int width, int height) noexcept
  {
    ::GdkDragSurfaceSize *_peel_this = reinterpret_cast<::GdkDragSurfaceSize *> (this);
    gdk_drag_surface_size_set_size (_peel_this, width, height);
  }
}; /* record DragSurface::Size */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
