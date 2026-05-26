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
class ProximityEvent;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::ProximityEvent> ()
{
  return gdk_proximity_event_get_type ();
}


namespace Gdk
{
class ProximityEvent : public Event
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ProximityEvent () = delete;
  ProximityEvent (const ProximityEvent &) = delete;
  ProximityEvent (ProximityEvent &&) = delete;
  ProximityEvent &
  operator = (const ProximityEvent &) = delete;
  ProximityEvent &
  operator = (ProximityEvent &&) = delete;
  ~ProximityEvent () = delete;
public:
}; /* class ProximityEvent */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
