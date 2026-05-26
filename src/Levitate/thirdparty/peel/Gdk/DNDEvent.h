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
class DNDEvent;
class Drop;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::DNDEvent> ()
{
  return gdk_dnd_event_get_type ();
}


namespace Gdk
{
class DNDEvent : public Event
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  DNDEvent () = delete;
  DNDEvent (const DNDEvent &) = delete;
  DNDEvent (DNDEvent &&) = delete;
  DNDEvent &
  operator = (const DNDEvent &) = delete;
  DNDEvent &
  operator = (DNDEvent &&) = delete;
  ~DNDEvent () = delete;
public:

  Drop *
  get_drop () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkDrop *_peel_return = gdk_dnd_event_get_drop (_peel_this);
    return reinterpret_cast<Drop *> (_peel_return);
  }
}; /* class DNDEvent */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
