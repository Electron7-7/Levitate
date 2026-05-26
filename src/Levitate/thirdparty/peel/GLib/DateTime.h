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
class /* record */ DateTime;
struct TimeVal;
class /* record */ TimeZone;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::DateTime> ()
{
  return g_date_time_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::DateTime>
{
  typedef RefPtr<GLib::DateTime> OwnedType;
  typedef GLib::DateTime * UnownedType;

  static GLib::DateTime *
  get (const ::GValue *value)
  {
    return reinterpret_cast<GLib::DateTime *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, GLib::DateTime * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<GLib::DateTime>
  dup (const ::GValue *value)
  {
    return RefPtr<GLib::DateTime>::adopt_ref (reinterpret_cast<GLib::DateTime *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<GLib::DateTime> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static GLib::DateTime *
  cast_for_create (GLib::DateTime * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::DateTime>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::DateTime> (), basics.flags);
  }
};

template<>
struct RefTraits<GLib::DateTime, void>
{
  static void
  ref (GLib::DateTime *ptr)
  {
    g_date_time_ref (reinterpret_cast<::GDateTime *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (GLib::DateTime *ptr)
  {
    g_date_time_unref (reinterpret_cast<::GDateTime *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace GLib
{
class /* record */ DateTime
{
private:
  DateTime () = delete;
  DateTime (const DateTime &) = delete;
  DateTime (DateTime &&) = delete;
  ~DateTime ();

public:
  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<DateTime>
  create (TimeZone *tz, int year, int month, int day, int hour, int minute, double seconds) noexcept
  {
    ::GTimeZone *_peel_tz = reinterpret_cast<::GTimeZone *> (tz);
    ::GDateTime *_peel_return = g_date_time_new (_peel_tz, year, month, day, hour, minute, seconds);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (1)
  static peel::RefPtr<DateTime>
  create_from_iso8601 (const char *text, TimeZone *default_tz) noexcept
  {
    ::GTimeZone *_peel_default_tz = reinterpret_cast<::GTimeZone *> (default_tz);
    ::GDateTime *_peel_return = g_date_time_new_from_iso8601 (text, _peel_default_tz);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<DateTime>
  create_from_timeval_local (const TimeVal *tv) noexcept
  {
    const ::GTimeVal *_peel_tv = reinterpret_cast<const ::GTimeVal *> (tv);
    ::GDateTime *_peel_return = g_date_time_new_from_timeval_local (_peel_tv);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<DateTime>
  create_from_timeval_utc (const TimeVal *tv) noexcept
  {
    const ::GTimeVal *_peel_tv = reinterpret_cast<const ::GTimeVal *> (tv);
    ::GDateTime *_peel_return = g_date_time_new_from_timeval_utc (_peel_tv);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  static peel::RefPtr<DateTime>
  create_from_unix_local (int64_t t) noexcept
  {
    ::GDateTime *_peel_return = g_date_time_new_from_unix_local (t);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  static peel::RefPtr<DateTime>
  create_from_unix_local_usec (int64_t usecs) noexcept
  {
    ::GDateTime *_peel_return = g_date_time_new_from_unix_local_usec (usecs);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  static peel::RefPtr<DateTime>
  create_from_unix_utc (int64_t t) noexcept
  {
    ::GDateTime *_peel_return = g_date_time_new_from_unix_utc (t);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  static peel::RefPtr<DateTime>
  create_from_unix_utc_usec (int64_t usecs) noexcept
  {
    ::GDateTime *_peel_return = g_date_time_new_from_unix_utc_usec (usecs);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  static peel::RefPtr<DateTime>
  create_local (int year, int month, int day, int hour, int minute, double seconds) noexcept
  {
    ::GDateTime *_peel_return = g_date_time_new_local (year, month, day, hour, minute, seconds);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<DateTime>
  create_now (TimeZone *tz) noexcept
  {
    ::GTimeZone *_peel_tz = reinterpret_cast<::GTimeZone *> (tz);
    ::GDateTime *_peel_return = g_date_time_new_now (_peel_tz);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  static peel::RefPtr<DateTime>
  create_now_local () noexcept
  {
    ::GDateTime *_peel_return = g_date_time_new_now_local ();
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  static peel::RefPtr<DateTime>
  create_now_utc () noexcept
  {
    ::GDateTime *_peel_return = g_date_time_new_now_utc ();
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  static peel::RefPtr<DateTime>
  create_utc (int year, int month, int day, int hour, int minute, double seconds) noexcept
  {
    ::GDateTime *_peel_return = g_date_time_new_utc (year, month, day, hour, minute, seconds);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  peel::RefPtr<DateTime>
  add (int64_t timespan) noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    ::GDateTime *_peel_return = g_date_time_add (_peel_this, timespan);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  peel::RefPtr<DateTime>
  add_days (int days) noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    ::GDateTime *_peel_return = g_date_time_add_days (_peel_this, days);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  peel::RefPtr<DateTime>
  add_full (int years, int months, int days, int hours, int minutes, double seconds) noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    ::GDateTime *_peel_return = g_date_time_add_full (_peel_this, years, months, days, hours, minutes, seconds);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  peel::RefPtr<DateTime>
  add_hours (int hours) noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    ::GDateTime *_peel_return = g_date_time_add_hours (_peel_this, hours);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  peel::RefPtr<DateTime>
  add_minutes (int minutes) noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    ::GDateTime *_peel_return = g_date_time_add_minutes (_peel_this, minutes);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  peel::RefPtr<DateTime>
  add_months (int months) noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    ::GDateTime *_peel_return = g_date_time_add_months (_peel_this, months);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  peel::RefPtr<DateTime>
  add_seconds (double seconds) noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    ::GDateTime *_peel_return = g_date_time_add_seconds (_peel_this, seconds);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  peel::RefPtr<DateTime>
  add_weeks (int weeks) noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    ::GDateTime *_peel_return = g_date_time_add_weeks (_peel_this, weeks);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  peel::RefPtr<DateTime>
  add_years (int years) noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    ::GDateTime *_peel_return = g_date_time_add_years (_peel_this, years);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  int
  compare (const DateTime *dt2) const noexcept
  {
    ::gconstpointer _peel_this = reinterpret_cast<::gconstpointer> (this);
    ::gconstpointer _peel_dt2 = reinterpret_cast<::gconstpointer> (dt2);
    return g_date_time_compare (_peel_this, _peel_dt2);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  int64_t
  difference (DateTime *begin) noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    ::GDateTime *_peel_begin = reinterpret_cast<::GDateTime *> (begin);
    return g_date_time_difference (_peel_this, _peel_begin);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (const DateTime *dt2) const noexcept
  {
    ::gconstpointer _peel_this = reinterpret_cast<::gconstpointer> (this);
    ::gconstpointer _peel_dt2 = reinterpret_cast<::gconstpointer> (dt2);
    gboolean _peel_return = g_date_time_equal (_peel_this, _peel_dt2);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  peel::String
  format (const char *format) noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    gchar *_peel_return = g_date_time_format (_peel_this, format);
    return peel::String::adopt_string (_peel_return);
  }

  peel::String
  format_iso8601 () noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    gchar *_peel_return = g_date_time_format_iso8601 (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  int
  get_day_of_month () noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    return g_date_time_get_day_of_month (_peel_this);
  }

  int
  get_day_of_week () noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    return g_date_time_get_day_of_week (_peel_this);
  }

  int
  get_day_of_year () noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    return g_date_time_get_day_of_year (_peel_this);
  }

  int
  get_hour () noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    return g_date_time_get_hour (_peel_this);
  }

  int
  get_microsecond () noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    return g_date_time_get_microsecond (_peel_this);
  }

  int
  get_minute () noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    return g_date_time_get_minute (_peel_this);
  }

  int
  get_month () noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    return g_date_time_get_month (_peel_this);
  }

  int
  get_second () noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    return g_date_time_get_second (_peel_this);
  }

  double
  get_seconds () noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    return g_date_time_get_seconds (_peel_this);
  }

  peel_returns_nonnull
  TimeZone *
  get_timezone () noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    ::GTimeZone *_peel_return = g_date_time_get_timezone (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<TimeZone *> (_peel_return);
  }

  peel_returns_nonnull
  const char *
  get_timezone_abbreviation () noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    return g_date_time_get_timezone_abbreviation (_peel_this);
  }

  int64_t
  get_utc_offset () noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    return g_date_time_get_utc_offset (_peel_this);
  }

  int
  get_week_numbering_year () noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    return g_date_time_get_week_numbering_year (_peel_this);
  }

  int
  get_week_of_year () noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    return g_date_time_get_week_of_year (_peel_this);
  }

  int
  get_year () noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    return g_date_time_get_year (_peel_this);
  }

  peel_arg_out (2) peel_arg_out (3) peel_arg_out (4)
  void
  get_ymd (int *year, int *month, int *day) noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    gint *_peel_year = reinterpret_cast<gint *> (year);
    gint *_peel_month = reinterpret_cast<gint *> (month);
    gint *_peel_day = reinterpret_cast<gint *> (day);
    g_date_time_get_ymd (_peel_this, _peel_year, _peel_month, _peel_day);
  }

  unsigned
  hash () const noexcept
  {
    ::gconstpointer _peel_this = reinterpret_cast<::gconstpointer> (this);
    return g_date_time_hash (_peel_this);
  }

  bool
  is_daylight_savings () noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    gboolean _peel_return = g_date_time_is_daylight_savings (_peel_this);
    return !!_peel_return;
  }

  /* ref bound as RefTraits */

  peel::RefPtr<DateTime>
  to_local () noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    ::GDateTime *_peel_return = g_date_time_to_local (_peel_this);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  to_timeval (TimeVal *tv) noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    ::GTimeVal *_peel_tv = reinterpret_cast<::GTimeVal *> (tv);
    gboolean _peel_return = g_date_time_to_timeval (_peel_this, _peel_tv);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  peel::RefPtr<DateTime>
  to_timezone (TimeZone *tz) noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    ::GTimeZone *_peel_tz = reinterpret_cast<::GTimeZone *> (tz);
    ::GDateTime *_peel_return = g_date_time_to_timezone (_peel_this, _peel_tz);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  int64_t
  to_unix () noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    return g_date_time_to_unix (_peel_this);
  }

  int64_t
  to_unix_usec () noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    return g_date_time_to_unix_usec (_peel_this);
  }

  peel::RefPtr<DateTime>
  to_utc () noexcept
  {
    ::GDateTime *_peel_this = reinterpret_cast<::GDateTime *> (this);
    ::GDateTime *_peel_return = g_date_time_to_utc (_peel_this);
    return peel::RefPtr<DateTime>::adopt_ref (reinterpret_cast<DateTime *> (_peel_return));
  }

  /* unref bound as RefTraits */
}; /* record DateTime */

} /* namespace GLib */
} /* namespace peel */

peel_end_header
