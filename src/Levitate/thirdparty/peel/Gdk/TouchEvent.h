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
class TouchEvent;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::TouchEvent> ()
{
  return gdk_touch_event_get_type ();
}


namespace Gdk
{
class TouchEvent : public Event
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TouchEvent () = delete;
  TouchEvent (const TouchEvent &) = delete;
  TouchEvent (TouchEvent &&) = delete;
  TouchEvent &
  operator = (const TouchEvent &) = delete;
  TouchEvent &
  operator = (TouchEvent &&) = delete;
  ~TouchEvent () = delete;
public:

  bool
  get_emulating_pointer () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    gboolean _peel_return = gdk_touch_event_get_emulating_pointer (_peel_this);
    return !!_peel_return;
  }
}; /* class TouchEvent */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
