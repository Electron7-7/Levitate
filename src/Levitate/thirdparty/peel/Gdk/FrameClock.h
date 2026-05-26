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
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class FrameClock;
class /* record */ FrameTimings;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::FrameClock> ()
{
  return gdk_frame_clock_get_type ();
}


namespace Gdk
{
class FrameClock : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FrameClock () = delete;
  FrameClock (const FrameClock &) = delete;
  FrameClock (FrameClock &&) = delete;
  FrameClock &
  operator = (const FrameClock &) = delete;
  FrameClock &
  operator = (FrameClock &&) = delete;
  ~FrameClock () = delete;
public:
  enum class Phase : std::underlying_type<::GdkFrameClockPhase>::type;

  void
  begin_updating () noexcept
  {
    ::GdkFrameClock *_peel_this = reinterpret_cast<::GdkFrameClock *> (this);
    gdk_frame_clock_begin_updating (_peel_this);
  }

  void
  end_updating () noexcept
  {
    ::GdkFrameClock *_peel_this = reinterpret_cast<::GdkFrameClock *> (this);
    gdk_frame_clock_end_updating (_peel_this);
  }

  FrameTimings *
  get_current_timings () noexcept
  {
    ::GdkFrameClock *_peel_this = reinterpret_cast<::GdkFrameClock *> (this);
    ::GdkFrameTimings *_peel_return = gdk_frame_clock_get_current_timings (_peel_this);
    return reinterpret_cast<FrameTimings *> (_peel_return);
  }

  double
  get_fps () noexcept
  {
    ::GdkFrameClock *_peel_this = reinterpret_cast<::GdkFrameClock *> (this);
    return gdk_frame_clock_get_fps (_peel_this);
  }

  int64_t
  get_frame_counter () noexcept
  {
    ::GdkFrameClock *_peel_this = reinterpret_cast<::GdkFrameClock *> (this);
    return gdk_frame_clock_get_frame_counter (_peel_this);
  }

  int64_t
  get_frame_time () noexcept
  {
    ::GdkFrameClock *_peel_this = reinterpret_cast<::GdkFrameClock *> (this);
    return gdk_frame_clock_get_frame_time (_peel_this);
  }

  int64_t
  get_history_start () noexcept
  {
    ::GdkFrameClock *_peel_this = reinterpret_cast<::GdkFrameClock *> (this);
    return gdk_frame_clock_get_history_start (_peel_this);
  }

  peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (4)
  void
  get_refresh_info (int64_t base_time, int64_t *refresh_interval_return, int64_t *presentation_time_return) noexcept
  {
    ::GdkFrameClock *_peel_this = reinterpret_cast<::GdkFrameClock *> (this);
    gint64 *_peel_refresh_interval_return = reinterpret_cast<gint64 *> (refresh_interval_return);
    gint64 *_peel_presentation_time_return = reinterpret_cast<gint64 *> (presentation_time_return);
    gdk_frame_clock_get_refresh_info (_peel_this, base_time, _peel_refresh_interval_return, _peel_presentation_time_return);
  }

  FrameTimings *
  get_timings (int64_t frame_counter) noexcept
  {
    ::GdkFrameClock *_peel_this = reinterpret_cast<::GdkFrameClock *> (this);
    ::GdkFrameTimings *_peel_return = gdk_frame_clock_get_timings (_peel_this, frame_counter);
    return reinterpret_cast<FrameTimings *> (_peel_return);
  }

  void
  request_phase (FrameClock::Phase phase) noexcept
  {
    ::GdkFrameClock *_peel_this = reinterpret_cast<::GdkFrameClock *> (this);
    ::GdkFrameClockPhase _peel_phase = static_cast<::GdkFrameClockPhase> (phase);
    gdk_frame_clock_request_phase (_peel_this, _peel_phase);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_after_paint (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FrameClock, void ()>::_peel_connect_by_name (this, "after-paint", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_after_paint (HandlerObject *object, void (HandlerObject::*handler_method) (FrameClock *), bool after = false) noexcept
  {
    return Signal<FrameClock, void ()>::_peel_connect_by_name (this, "after-paint", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_before_paint (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FrameClock, void ()>::_peel_connect_by_name (this, "before-paint", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_before_paint (HandlerObject *object, void (HandlerObject::*handler_method) (FrameClock *), bool after = false) noexcept
  {
    return Signal<FrameClock, void ()>::_peel_connect_by_name (this, "before-paint", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_flush_events (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FrameClock, void ()>::_peel_connect_by_name (this, "flush-events", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_flush_events (HandlerObject *object, void (HandlerObject::*handler_method) (FrameClock *), bool after = false) noexcept
  {
    return Signal<FrameClock, void ()>::_peel_connect_by_name (this, "flush-events", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_layout (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FrameClock, void ()>::_peel_connect_by_name (this, "layout", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_layout (HandlerObject *object, void (HandlerObject::*handler_method) (FrameClock *), bool after = false) noexcept
  {
    return Signal<FrameClock, void ()>::_peel_connect_by_name (this, "layout", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_paint (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FrameClock, void ()>::_peel_connect_by_name (this, "paint", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_paint (HandlerObject *object, void (HandlerObject::*handler_method) (FrameClock *), bool after = false) noexcept
  {
    return Signal<FrameClock, void ()>::_peel_connect_by_name (this, "paint", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_resume_events (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FrameClock, void ()>::_peel_connect_by_name (this, "resume-events", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_resume_events (HandlerObject *object, void (HandlerObject::*handler_method) (FrameClock *), bool after = false) noexcept
  {
    return Signal<FrameClock, void ()>::_peel_connect_by_name (this, "resume-events", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_update (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FrameClock, void ()>::_peel_connect_by_name (this, "update", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_update (HandlerObject *object, void (HandlerObject::*handler_method) (FrameClock *), bool after = false) noexcept
  {
    return Signal<FrameClock, void ()>::_peel_connect_by_name (this, "update", object, handler_method, after);
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class FrameClock */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
