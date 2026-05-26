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

peel_begin_header

namespace peel
{
namespace Gdk
{
class /* record */ FrameTimings;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::FrameTimings> ()
{
  return gdk_frame_timings_get_type ();
}
template<>
struct GObject::Value::Traits<Gdk::FrameTimings>
{
  typedef RefPtr<Gdk::FrameTimings> OwnedType;
  typedef Gdk::FrameTimings * UnownedType;

  static Gdk::FrameTimings *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gdk::FrameTimings *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gdk::FrameTimings * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gdk::FrameTimings>
  dup (const ::GValue *value)
  {
    return RefPtr<Gdk::FrameTimings>::adopt_ref (reinterpret_cast<Gdk::FrameTimings *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gdk::FrameTimings> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gdk::FrameTimings *
  cast_for_create (Gdk::FrameTimings * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gdk::FrameTimings>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gdk::FrameTimings> (), basics.flags);
  }
};

template<>
struct RefTraits<Gdk::FrameTimings, void>
{
  static void
  ref (Gdk::FrameTimings *ptr)
  {
    gdk_frame_timings_ref (reinterpret_cast<::GdkFrameTimings *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gdk::FrameTimings *ptr)
  {
    gdk_frame_timings_unref (reinterpret_cast<::GdkFrameTimings *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gdk
{
class /* record */ FrameTimings
{
private:
  FrameTimings () = delete;
  FrameTimings (const FrameTimings &) = delete;
  FrameTimings (FrameTimings &&) = delete;
  ~FrameTimings ();

public:
  bool
  get_complete () noexcept
  {
    ::GdkFrameTimings *_peel_this = reinterpret_cast<::GdkFrameTimings *> (this);
    gboolean _peel_return = gdk_frame_timings_get_complete (_peel_this);
    return !!_peel_return;
  }

  int64_t
  get_frame_counter () noexcept
  {
    ::GdkFrameTimings *_peel_this = reinterpret_cast<::GdkFrameTimings *> (this);
    return gdk_frame_timings_get_frame_counter (_peel_this);
  }

  int64_t
  get_frame_time () noexcept
  {
    ::GdkFrameTimings *_peel_this = reinterpret_cast<::GdkFrameTimings *> (this);
    return gdk_frame_timings_get_frame_time (_peel_this);
  }

  int64_t
  get_predicted_presentation_time () noexcept
  {
    ::GdkFrameTimings *_peel_this = reinterpret_cast<::GdkFrameTimings *> (this);
    return gdk_frame_timings_get_predicted_presentation_time (_peel_this);
  }

  int64_t
  get_presentation_time () noexcept
  {
    ::GdkFrameTimings *_peel_this = reinterpret_cast<::GdkFrameTimings *> (this);
    return gdk_frame_timings_get_presentation_time (_peel_this);
  }

  int64_t
  get_refresh_interval () noexcept
  {
    ::GdkFrameTimings *_peel_this = reinterpret_cast<::GdkFrameTimings *> (this);
    return gdk_frame_timings_get_refresh_interval (_peel_this);
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */
}; /* record FrameTimings */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
