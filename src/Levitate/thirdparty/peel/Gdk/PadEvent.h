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
class PadEvent;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::PadEvent> ()
{
  return gdk_pad_event_get_type ();
}


namespace Gdk
{
class PadEvent : public Event
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  PadEvent () = delete;
  PadEvent (const PadEvent &) = delete;
  PadEvent (PadEvent &&) = delete;
  PadEvent &
  operator = (const PadEvent &) = delete;
  PadEvent &
  operator = (PadEvent &&) = delete;
  ~PadEvent () = delete;
public:

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  get_axis_value (unsigned *index, double *value) noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    guint *_peel_index = reinterpret_cast<guint *> (index);
    gdk_pad_event_get_axis_value (_peel_this, _peel_index, value);
  }

  unsigned
  get_button () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    return gdk_pad_event_get_button (_peel_this);
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  get_group_mode (unsigned *group, unsigned *mode) noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    guint *_peel_group = reinterpret_cast<guint *> (group);
    guint *_peel_mode = reinterpret_cast<guint *> (mode);
    gdk_pad_event_get_group_mode (_peel_this, _peel_group, _peel_mode);
  }
}; /* class PadEvent */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
