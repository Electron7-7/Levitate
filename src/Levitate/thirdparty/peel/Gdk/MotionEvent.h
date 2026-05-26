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
class MotionEvent;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::MotionEvent> ()
{
  return gdk_motion_event_get_type ();
}


namespace Gdk
{
class MotionEvent : public Event
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  MotionEvent () = delete;
  MotionEvent (const MotionEvent &) = delete;
  MotionEvent (MotionEvent &&) = delete;
  MotionEvent &
  operator = (const MotionEvent &) = delete;
  MotionEvent &
  operator = (MotionEvent &&) = delete;
  ~MotionEvent () = delete;
public:
}; /* class MotionEvent */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
