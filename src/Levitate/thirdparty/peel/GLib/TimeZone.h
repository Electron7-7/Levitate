#pragma once

/* Auto-generated, do not modify */
/* Package glib-2.0 */

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
#include <glib.h>

peel_begin_header

namespace peel
{
namespace GLib
{
enum class TimeType : std::underlying_type<::GTimeType>::type;
class /* record */ TimeZone;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::TimeZone> ()
{
  return g_time_zone_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::TimeZone>
{
  typedef RefPtr<GLib::TimeZone> OwnedType;
  typedef GLib::TimeZone * UnownedType;

  static GLib::TimeZone *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::TimeZone *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::TimeZone * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::TimeZone>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::TimeZone>::adopt_ref (reinterpret_cast<GLib::TimeZone *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::TimeZone> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::TimeZone *
  cast_for_create (GLib::TimeZone * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::TimeZone>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::TimeZone> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::TimeZone, void>
{
  static void
  ref (GLib::TimeZone *ptr)
  {
    g_time_zone_ref (reinterpret_cast<::GTimeZone *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::TimeZone *ptr)
  {
    g_time_zone_unref (reinterpret_cast<::GTimeZone *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
class /* record */ TimeZone
{
private:
  TimeZone () = delete;
  TimeZone (const TimeZone &) = delete;
  TimeZone (TimeZone &&) = delete;
  ~TimeZone ();

public:
  static peel::RefPtr<TimeZone>
  create (const char *identifier) noexcept
  {
    ::GTimeZone *_peel_return = g_time_zone_new (identifier);
    peel_assume (_peel_return);
    return peel::RefPtr<TimeZone>::adopt_ref (reinterpret_cast<TimeZone *> (_peel_return));
  }

  static peel::RefPtr<TimeZone>
  create_identifier (const char *identifier) noexcept
  {
    ::GTimeZone *_peel_return = g_time_zone_new_identifier (identifier);
    return peel::RefPtr<TimeZone>::adopt_ref (reinterpret_cast<TimeZone *> (_peel_return));
  }

  static peel::RefPtr<TimeZone>
  create_local () noexcept
  {
    ::GTimeZone *_peel_return = g_time_zone_new_local ();
    peel_assume (_peel_return);
    return peel::RefPtr<TimeZone>::adopt_ref (reinterpret_cast<TimeZone *> (_peel_return));
  }

  static peel::RefPtr<TimeZone>
  create_offset (int32_t seconds) noexcept
  {
    ::GTimeZone *_peel_return = g_time_zone_new_offset (seconds);
    peel_assume (_peel_return);
    return peel::RefPtr<TimeZone>::adopt_ref (reinterpret_cast<TimeZone *> (_peel_return));
  }

  static peel::RefPtr<TimeZone>
  create_utc () noexcept
  {
    ::GTimeZone *_peel_return = g_time_zone_new_utc ();
    peel_assume (_peel_return);
    return peel::RefPtr<TimeZone>::adopt_ref (reinterpret_cast<TimeZone *> (_peel_return));
  }

  peel_arg_inout (3) peel_nonnull_args (3)
  int
  adjust_time (TimeType type, int64_t *time_) noexcept
  {
    ::GTimeZone *_peel_this = reinterpret_cast<::GTimeZone *> (this);
    ::GTimeType _peel_type = static_cast<::GTimeType> (type);
    gint64 *_peel_time_ = reinterpret_cast<gint64 *> (time_);
    return g_time_zone_adjust_time (_peel_this, _peel_type, _peel_time_);
  }

  int
  find_interval (TimeType type, int64_t time_) noexcept
  {
    ::GTimeZone *_peel_this = reinterpret_cast<::GTimeZone *> (this);
    ::GTimeType _peel_type = static_cast<::GTimeType> (type);
    return g_time_zone_find_interval (_peel_this, _peel_type, time_);
  }

  peel_returns_nonnull
  const char *
  get_abbreviation (int interval) noexcept
  {
    ::GTimeZone *_peel_this = reinterpret_cast<::GTimeZone *> (this);
    return g_time_zone_get_abbreviation (_peel_this, interval);
  }

  peel_returns_nonnull
  const char *
  get_identifier () noexcept
  {
    ::GTimeZone *_peel_this = reinterpret_cast<::GTimeZone *> (this);
    return g_time_zone_get_identifier (_peel_this);
  }

  int32_t
  get_offset (int interval) noexcept
  {
    ::GTimeZone *_peel_this = reinterpret_cast<::GTimeZone *> (this);
    return g_time_zone_get_offset (_peel_this, interval);
  }

  bool
  is_dst (int interval) noexcept
  {
    ::GTimeZone *_peel_this = reinterpret_cast<::GTimeZone *> (this);
    gboolean _peel_return = g_time_zone_is_dst (_peel_this, interval);
    return !!_peel_return;
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */
}; /* record TimeZone */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
