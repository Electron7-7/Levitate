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
#include <peel/GObject/TypeClass.h>
#include <peel/GObject/TypeInstance.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
enum class AxisUse : std::underlying_type<::GdkAxisUse>::type;
class Device;
class DeviceTool;
class Display;
class Event;
class /* record */ EventSequence;
enum class ModifierType : std::underlying_type<::GdkModifierType>::type;
class Seat;
class Surface;
struct TimeCoord;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::Event> ()
{
  return gdk_event_get_type ();
}

template<typename T>
struct RefTraits<T, peel::enable_if_derived<Gdk::Event, T, void>>
{
  static void
  ref (T *ptr)
  {
    gdk_event_ref (reinterpret_cast<::GdkEvent *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (T *ptr)
  {
    gdk_event_unref (reinterpret_cast<::GdkEvent *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gdk
{
class Event : public GObject::TypeInstance
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Event () = delete;
  Event (const Event &) = delete;
  Event (Event &&) = delete;
  Event &
  operator = (const Event &) = delete;
  Event &
  operator = (Event &&) = delete;
  ~Event () = delete;
public:
  enum class Type : std::underlying_type<::GdkEventType>::type;

  peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  _get_angle (Event *event2, double *angle) noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkEvent *_peel_event2 = reinterpret_cast<::GdkEvent *> (event2);
    gboolean _peel_return = gdk_events_get_angle (_peel_this, _peel_event2, angle);
    return !!_peel_return;
  }

  peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (2, 3, 4)
  bool
  _get_center (Event *event2, double *x, double *y) noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkEvent *_peel_event2 = reinterpret_cast<::GdkEvent *> (event2);
    gboolean _peel_return = gdk_events_get_center (_peel_this, _peel_event2, x, y);
    return !!_peel_return;
  }

  peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  _get_distance (Event *event2, double *distance) noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkEvent *_peel_event2 = reinterpret_cast<::GdkEvent *> (event2);
    gboolean _peel_return = gdk_events_get_distance (_peel_this, _peel_event2, distance);
    return !!_peel_return;
  }

  bool
  get_axes (peel::ArrayRef<double> *axes) noexcept
  {
    guint _peel_n_axes;
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    double *_peel_axes;
    gboolean _peel_return = gdk_event_get_axes (_peel_this, &_peel_axes, &_peel_n_axes);
    *axes = peel::ArrayRef<double> (reinterpret_cast<double *> (_peel_axes), _peel_n_axes);
    return !!_peel_return;
  }

  peel_arg_out (3) peel_nonnull_args (3)
  bool
  get_axis (AxisUse axis_use, double *value) noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkAxisUse _peel_axis_use = static_cast<::GdkAxisUse> (axis_use);
    gboolean _peel_return = gdk_event_get_axis (_peel_this, _peel_axis_use, value);
    return !!_peel_return;
  }

  Device *
  get_device () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkDevice *_peel_return = gdk_event_get_device (_peel_this);
    return reinterpret_cast<Device *> (_peel_return);
  }

  DeviceTool *
  get_device_tool () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkDeviceTool *_peel_return = gdk_event_get_device_tool (_peel_this);
    return reinterpret_cast<DeviceTool *> (_peel_return);
  }

  Display *
  get_display () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkDisplay *_peel_return = gdk_event_get_display (_peel_this);
    return reinterpret_cast<Display *> (_peel_return);
  }

  peel_returns_nonnull
  EventSequence *
  get_event_sequence () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkEventSequence *_peel_return = gdk_event_get_event_sequence (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<EventSequence *> (_peel_return);
  }

  Event::Type
  get_event_type () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkEventType _peel_return = gdk_event_get_event_type (_peel_this);
    return static_cast<Event::Type> (_peel_return);
  }

  peel::UniquePtr<TimeCoord[]>
  get_history () noexcept
  {
    guint _peel_out_n_coords;
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkTimeCoord *_peel_return = gdk_event_get_history (_peel_this, &_peel_out_n_coords);
    return peel::UniquePtr<TimeCoord[]>::adopt_ref (reinterpret_cast<TimeCoord *> (_peel_return), _peel_out_n_coords);
  }

  ModifierType
  get_modifier_state () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkModifierType _peel_return = gdk_event_get_modifier_state (_peel_this);
    return static_cast<ModifierType> (_peel_return);
  }

  bool
  get_pointer_emulated () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    gboolean _peel_return = gdk_event_get_pointer_emulated (_peel_this);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  bool
  get_position (double *x, double *y) noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    gboolean _peel_return = gdk_event_get_position (_peel_this, x, y);
    return !!_peel_return;
  }

  Seat *
  get_seat () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkSeat *_peel_return = gdk_event_get_seat (_peel_this);
    return reinterpret_cast<Seat *> (_peel_return);
  }

  Surface *
  get_surface () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    ::GdkSurface *_peel_return = gdk_event_get_surface (_peel_this);
    return reinterpret_cast<Surface *> (_peel_return);
  }

  uint32_t
  get_time () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    return gdk_event_get_time (_peel_this);
  }

  /* ref bound as RefTraits */

  bool
  triggers_context_menu () noexcept
  {
    ::GdkEvent *_peel_this = reinterpret_cast<::GdkEvent *> (this);
    gboolean _peel_return = gdk_event_triggers_context_menu (_peel_this);
    return !!_peel_return;
  }

  /* unref bound as RefTraits */
}; /* class Event */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header

#include <peel/Gdk/TimeCoord.h>
