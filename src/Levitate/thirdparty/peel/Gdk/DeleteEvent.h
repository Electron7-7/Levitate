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
class DeleteEvent;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::DeleteEvent> ()
{
  return gdk_delete_event_get_type ();
}


namespace Gdk
{
class DeleteEvent : public Event
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DeleteEvent () = delete;
  DeleteEvent (const DeleteEvent &) = delete;
  DeleteEvent (DeleteEvent &&) = delete;
  DeleteEvent &
  operator = (const DeleteEvent &) = delete;
  DeleteEvent &
  operator = (DeleteEvent &&) = delete;
  ~DeleteEvent () = delete;
public:
}; /* class DeleteEvent */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
