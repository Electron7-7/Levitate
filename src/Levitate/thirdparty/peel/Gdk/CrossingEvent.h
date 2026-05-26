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
class CrossingEvent;
enum class CrossingMode : std::underlying_type<::GdkCrossingMode>::type;
enum class NotifyType : std::underlying_type<::GdkNotifyType>::type;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::CrossingEvent> ()
{
  return gdk_crossing_event_get_type ();
}


namespace Gdk
{
class CrossingEvent : public Event
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CrossingEvent () = delete;
  CrossingEvent (const CrossingEvent &) = delete;
  CrossingEvent (CrossingEvent &&) = delete;
  CrossingEvent &
  operator = (const CrossingEvent &) = delete;
  CrossingEvent &
  operator = (CrossingEvent &&) = delete;
  ~CrossingEvent () = delete;
public:

  NotifyType
  get_detail () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkNotifyType _peel_return = gdk_crossing_event_get_detail (_peel_this);
    return static_cast<NotifyType> (_peel_return);
  }

  bool
  get_focus () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    gboolean _peel_return = gdk_crossing_event_get_focus (_peel_this);
    return !!_peel_return;
  }

  CrossingMode
  get_mode () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkCrossingMode _peel_return = gdk_crossing_event_get_mode (_peel_this);
    return static_cast<CrossingMode> (_peel_return);
  }
}; /* class CrossingEvent */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
