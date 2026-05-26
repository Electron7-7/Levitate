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
class FocusEvent;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::FocusEvent> ()
{
  return gdk_focus_event_get_type ();
}


namespace Gdk
{
class FocusEvent : public Event
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FocusEvent () = delete;
  FocusEvent (const FocusEvent &) = delete;
  FocusEvent (FocusEvent &&) = delete;
  FocusEvent &
  operator = (const FocusEvent &) = delete;
  FocusEvent &
  operator = (FocusEvent &&) = delete;
  ~FocusEvent () = delete;
public:

  bool
  get_in () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    gboolean _peel_return = gdk_focus_event_get_in (_peel_this);
    return !!_peel_return;
  }
}; /* class FocusEvent */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
