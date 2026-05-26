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
#include <peel/Gdk/Event.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class GrabBrokenEvent;
class Surface;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::GrabBrokenEvent> ()
{
  return gdk_grab_broken_event_get_type ();
}


namespace Gdk
{
class GrabBrokenEvent : public Event
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  GrabBrokenEvent () = delete;
  GrabBrokenEvent (const GrabBrokenEvent &) = delete;
  GrabBrokenEvent (GrabBrokenEvent &&) = delete;
  GrabBrokenEvent &
  operator = (const GrabBrokenEvent &) = delete;
  GrabBrokenEvent &
  operator = (GrabBrokenEvent &&) = delete;
  ~GrabBrokenEvent () = delete;
public:

  peel_returns_nonnull
  Surface *
  get_grab_surface () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkSurface *_peel_return = gdk_grab_broken_event_get_grab_surface (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Surface *> (_peel_return);
  }

  bool
  get_implicit () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    gboolean _peel_return = gdk_grab_broken_event_get_implicit (_peel_this);
    return !!_peel_return;
  }
}; /* class GrabBrokenEvent */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
