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
#include <peel/GObject/TypeInterface.h>
#include <peel/Gdk/Surface.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class /* interface */ DragSurface;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::DragSurface> ()
{
  return gdk_drag_surface_get_type ();
}


namespace Gdk
{
class /* interface */ DragSurface : public Surface
/* requires Surface */
{
private:
  DragSurface () = delete;
  DragSurface (const DragSurface &) = delete;
  DragSurface (DragSurface &&) = delete;

  DragSurface &
  operator = (const DragSurface &) = delete;
  DragSurface &
  operator = (DragSurface &&) = delete;

protected:
  ~DragSurface () = default;

public:
  class /* record */ Size;

  bool
  present (int width, int height) noexcept
  {
    ::GdkDragSurface *_peel_this = reinterpret_cast<::GdkDragSurface *> (this);
    gboolean _peel_return = gdk_drag_surface_present (_peel_this, width, height);
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_compute_size (Handler &&handler, bool after = false) noexcept
  {
    return Signal<DragSurface, void (DragSurface::Size *)>::_peel_connect_by_name (this, "compute-size", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_compute_size (HandlerObject *object, void (HandlerObject::*handler_method) (DragSurface *, DragSurface::Size *), bool after = false) noexcept
  {
    return Signal<DragSurface, void (DragSurface::Size *)>::_peel_connect_by_name (this, "compute-size", object, handler_method, after);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;
  };

}; /* interface DragSurface */
static_assert (sizeof (DragSurface) == sizeof (Surface),
               "DragSurface size mismatch");
static_assert (alignof (DragSurface) == alignof (Surface),
               "DragSurface align mismatch");

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
