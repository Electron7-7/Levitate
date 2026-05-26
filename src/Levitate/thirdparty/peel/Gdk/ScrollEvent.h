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
enum class ScrollDirection : std::underlying_type<::GdkScrollDirection>::type;
class ScrollEvent;
enum class ScrollRelativeDirection : std::underlying_type<::GdkScrollRelativeDirection>::type;
enum class ScrollUnit : std::underlying_type<::GdkScrollUnit>::type;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::ScrollEvent> ()
{
  return gdk_scroll_event_get_type ();
}


namespace Gdk
{
class ScrollEvent : public Event
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ScrollEvent () = delete;
  ScrollEvent (const ScrollEvent &) = delete;
  ScrollEvent (ScrollEvent &&) = delete;
  ScrollEvent &
  operator = (const ScrollEvent &) = delete;
  ScrollEvent &
  operator = (ScrollEvent &&) = delete;
  ~ScrollEvent () = delete;
public:

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  get_deltas (double *delta_x, double *delta_y) noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    gdk_scroll_event_get_deltas (_peel_this, delta_x, delta_y);
  }

  ScrollDirection
  get_direction () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkScrollDirection _peel_return = gdk_scroll_event_get_direction (_peel_this);
    return static_cast<ScrollDirection> (_peel_return);
  }

  ScrollRelativeDirection
  get_relative_direction () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkScrollRelativeDirection _peel_return = gdk_scroll_event_get_relative_direction (_peel_this);
    return static_cast<ScrollRelativeDirection> (_peel_return);
  }

  ScrollUnit
  get_unit () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkScrollUnit _peel_return = gdk_scroll_event_get_unit (_peel_this);
    return static_cast<ScrollUnit> (_peel_return);
  }

  bool
  is_stop () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    gboolean _peel_return = gdk_scroll_event_is_stop (_peel_this);
    return !!_peel_return;
  }
}; /* class ScrollEvent */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
