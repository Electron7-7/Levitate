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
struct Date;
enum class DateMonth : std::underlying_type<::GDateMonth>::type;
enum class DateWeekday : std::underlying_type<::GDateWeekday>::type;
struct TimeVal;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::Date> ()
{
  return g_date_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::Date>
{
  typedef UniquePtr<GLib::Date> OwnedType;
  typedef const GLib::Date * UnownedType;

  static const GLib::Date *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const GLib::Date *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const GLib::Date * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<GLib::Date>
  dup (const ::GValue *value)
  {
    return UniquePtr<GLib::Date>::adopt_ref (reinterpret_cast<GLib::Date *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<GLib::Date> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const GLib::Date *
  cast_for_create (const GLib::Date * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::Date>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::Date> (), basics.flags);
  }
};

template<>
struct UniqueTraits<GLib::Date>
{
  static void
  free (GLib::Date *ptr)
  {
    g_date_free (reinterpret_cast<::GDate *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GLib
{
struct Date
{
private:

public:
  unsigned julian_days : 32;
  unsigned julian : 1;
  unsigned dmy : 1;
  unsigned day : 6;
  unsigned month : 4;
  unsigned year : 16;

  static peel::UniquePtr<Date>
  create () noexcept
  {
    ::GDate *_peel_return = g_date_new ();
    peel_assume (_peel_return);
    return peel::UniquePtr<Date>::adopt_ref (reinterpret_cast<Date *> (_peel_return));
  }

  static peel::UniquePtr<Date>
  create_dmy (uint8_t day, DateMonth month, uint16_t year) noexcept
  {
    ::GDateMonth _peel_month = static_cast<::GDateMonth> (month);
    ::GDate *_peel_return = g_date_new_dmy (day, _peel_month, year);
    peel_assume (_peel_return);
    return peel::UniquePtr<Date>::adopt_ref (reinterpret_cast<Date *> (_peel_return));
  }

  static peel::UniquePtr<Date>
  create_julian (uint32_t julian_day) noexcept
  {
    ::GDate *_peel_return = g_date_new_julian (julian_day);
    peel_assume (_peel_return);
    return peel::UniquePtr<Date>::adopt_ref (reinterpret_cast<Date *> (_peel_return));
  }

  void
  add_days (unsigned n_days) noexcept
  {
    ::GDate *_peel_this = reinterpret_cast<::GDate *> (this);
    g_date_add_days (_peel_this, n_days);
  }

  void
  add_months (unsigned n_months) noexcept
  {
    ::GDate *_peel_this = reinterpret_cast<::GDate *> (this);
    g_date_add_months (_peel_this, n_months);
  }

  void
  add_years (unsigned n_years) noexcept
  {
    ::GDate *_peel_this = reinterpret_cast<::GDate *> (this);
    g_date_add_years (_peel_this, n_years);
  }

  peel_arg_in (2) peel_arg_in (3) peel_nonnull_args (2, 3)
  void
  clamp (const Date *min_date, const Date *max_date) noexcept
  {
    ::GDate *_peel_this = reinterpret_cast<::GDate *> (this);
    const ::GDate *_peel_min_date = reinterpret_cast<const ::GDate *> (min_date);
    const ::GDate *_peel_max_date = reinterpret_cast<const ::GDate *> (max_date);
    g_date_clamp (_peel_this, _peel_min_date, _peel_max_date);
  }

  void
  clear (unsigned n_dates) noexcept
  {
    ::GDate *_peel_this = reinterpret_cast<::GDate *> (this);
    g_date_clear (_peel_this, n_dates);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  int
  compare (const Date *rhs) const noexcept
  {
    const ::GDate *_peel_this = reinterpret_cast<const ::GDate *> (this);
    const ::GDate *_peel_rhs = reinterpret_cast<const ::GDate *> (rhs);
    return g_date_compare (_peel_this, _peel_rhs);
  }

  peel::UniquePtr<Date>
  copy () const noexcept
  {
    const ::GDate *_peel_this = reinterpret_cast<const ::GDate *> (this);
    ::GDate *_peel_return = g_date_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<Date>::adopt_ref (reinterpret_cast<Date *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  int
  days_between (const Date *date2) const noexcept
  {
    const ::GDate *_peel_this = reinterpret_cast<const ::GDate *> (this);
    const ::GDate *_peel_date2 = reinterpret_cast<const ::GDate *> (date2);
    return g_date_days_between (_peel_this, _peel_date2);
  }

  /* free bound as UniqueTraits */

  uint8_t
  get_day () const noexcept
  {
    const ::GDate *_peel_this = reinterpret_cast<const ::GDate *> (this);
    return g_date_get_day (_peel_this);
  }

  unsigned
  get_day_of_year () const noexcept
  {
    const ::GDate *_peel_this = reinterpret_cast<const ::GDate *> (this);
    return g_date_get_day_of_year (_peel_this);
  }

  unsigned
  get_iso8601_week_of_year () const noexcept
  {
    const ::GDate *_peel_this = reinterpret_cast<const ::GDate *> (this);
    return g_date_get_iso8601_week_of_year (_peel_this);
  }

  uint32_t
  get_julian () const noexcept
  {
    const ::GDate *_peel_this = reinterpret_cast<const ::GDate *> (this);
    return g_date_get_julian (_peel_this);
  }

  unsigned
  get_monday_week_of_year () const noexcept
  {
    const ::GDate *_peel_this = reinterpret_cast<const ::GDate *> (this);
    return g_date_get_monday_week_of_year (_peel_this);
  }

  DateMonth
  get_month () const noexcept
  {
    const ::GDate *_peel_this = reinterpret_cast<const ::GDate *> (this);
    ::GDateMonth _peel_return = g_date_get_month (_peel_this);
    return static_cast<DateMonth> (_peel_return);
  }

  unsigned
  get_sunday_week_of_year () const noexcept
  {
    const ::GDate *_peel_this = reinterpret_cast<const ::GDate *> (this);
    return g_date_get_sunday_week_of_year (_peel_this);
  }

  unsigned
  get_week_of_year (DateWeekday first_day_of_week) const noexcept
  {
    const ::GDate *_peel_this = reinterpret_cast<const ::GDate *> (this);
    ::GDateWeekday _peel_first_day_of_week = static_cast<::GDateWeekday> (first_day_of_week);
    return g_date_get_week_of_year (_peel_this, _peel_first_day_of_week);
  }

  DateWeekday
  get_weekday () const noexcept
  {
    const ::GDate *_peel_this = reinterpret_cast<const ::GDate *> (this);
    ::GDateWeekday _peel_return = g_date_get_weekday (_peel_this);
    return static_cast<DateWeekday> (_peel_return);
  }

  uint16_t
  get_year () const noexcept
  {
    const ::GDate *_peel_this = reinterpret_cast<const ::GDate *> (this);
    return g_date_get_year (_peel_this);
  }

  bool
  is_first_of_month () const noexcept
  {
    const ::GDate *_peel_this = reinterpret_cast<const ::GDate *> (this);
    gboolean _peel_return = g_date_is_first_of_month (_peel_this);
    return !!_peel_return;
  }

  bool
  is_last_of_month () const noexcept
  {
    const ::GDate *_peel_this = reinterpret_cast<const ::GDate *> (this);
    gboolean _peel_return = g_date_is_last_of_month (_peel_this);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  order (Date *date2) noexcept
  {
    ::GDate *_peel_this = reinterpret_cast<::GDate *> (this);
    ::GDate *_peel_date2 = reinterpret_cast<::GDate *> (date2);
    g_date_order (_peel_this, _peel_date2);
  }

  void
  set_day (uint8_t day) noexcept
  {
    ::GDate *_peel_this = reinterpret_cast<::GDate *> (this);
    g_date_set_day (_peel_this, day);
  }

  void
  set_dmy (uint8_t day, DateMonth month, uint16_t y) noexcept
  {
    ::GDate *_peel_this = reinterpret_cast<::GDate *> (this);
    ::GDateMonth _peel_month = static_cast<::GDateMonth> (month);
    g_date_set_dmy (_peel_this, day, _peel_month, y);
  }

  void
  set_julian (uint32_t julian_date) noexcept
  {
    ::GDate *_peel_this = reinterpret_cast<::GDate *> (this);
    g_date_set_julian (_peel_this, julian_date);
  }

  void
  set_month (DateMonth month) noexcept
  {
    ::GDate *_peel_this = reinterpret_cast<::GDate *> (this);
    ::GDateMonth _peel_month = static_cast<::GDateMonth> (month);
    g_date_set_month (_peel_this, _peel_month);
  }

  peel_nonnull_args (2)
  void
  set_parse (const char *str) noexcept
  {
    ::GDate *_peel_this = reinterpret_cast<::GDate *> (this);
    g_date_set_parse (_peel_this, str);
  }

  void
  set_time (int32_t time_) noexcept
  {
    ::GDate *_peel_this = reinterpret_cast<::GDate *> (this);
    g_date_set_time (_peel_this, time_);
  }

  void
  set_time_t (time_t timet) noexcept
  {
    ::GDate *_peel_this = reinterpret_cast<::GDate *> (this);
    g_date_set_time_t (_peel_this, timet);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_time_val (TimeVal *timeval) noexcept
  {
    ::GDate *_peel_this = reinterpret_cast<::GDate *> (this);
    ::GTimeVal *_peel_timeval = reinterpret_cast<::GTimeVal *> (timeval);
    g_date_set_time_val (_peel_this, _peel_timeval);
  }

  void
  set_year (uint16_t year) noexcept
  {
    ::GDate *_peel_this = reinterpret_cast<::GDate *> (this);
    g_date_set_year (_peel_this, year);
  }

  void
  subtract_days (unsigned n_days) noexcept
  {
    ::GDate *_peel_this = reinterpret_cast<::GDate *> (this);
    g_date_subtract_days (_peel_this, n_days);
  }

  void
  subtract_months (unsigned n_months) noexcept
  {
    ::GDate *_peel_this = reinterpret_cast<::GDate *> (this);
    g_date_subtract_months (_peel_this, n_months);
  }

  void
  subtract_years (unsigned n_years) noexcept
  {
    ::GDate *_peel_this = reinterpret_cast<::GDate *> (this);
    g_date_subtract_years (_peel_this, n_years);
  }

  void
  to_struct_tm (tm *tm) const noexcept
  {
    const ::GDate *_peel_this = reinterpret_cast<const ::GDate *> (this);
    g_date_to_struct_tm (_peel_this, tm);
  }

  bool
  valid () const noexcept
  {
    const ::GDate *_peel_this = reinterpret_cast<const ::GDate *> (this);
    gboolean _peel_return = g_date_valid (_peel_this);
    return !!_peel_return;
  }

  static uint8_t
  get_days_in_month (DateMonth month, uint16_t year) noexcept
  {
    ::GDateMonth _peel_month = static_cast<::GDateMonth> (month);
    return g_date_get_days_in_month (_peel_month, year);
  }

  static uint8_t
  get_monday_weeks_in_year (uint16_t year) noexcept
  {
    return g_date_get_monday_weeks_in_year (year);
  }

  static uint8_t
  get_sunday_weeks_in_year (uint16_t year) noexcept
  {
    return g_date_get_sunday_weeks_in_year (year);
  }

  static uint8_t
  get_weeks_in_year (uint16_t year, DateWeekday first_day_of_week) noexcept
  {
    ::GDateWeekday _peel_first_day_of_week = static_cast<::GDateWeekday> (first_day_of_week);
    return g_date_get_weeks_in_year (year, _peel_first_day_of_week);
  }

  static bool
  is_leap_year (uint16_t year) noexcept
  {
    gboolean _peel_return = g_date_is_leap_year (year);
    return !!_peel_return;
  }

  /* Unsupported for now: strftime: explicitly skipped */

  static bool
  valid_day (uint8_t day) noexcept
  {
    gboolean _peel_return = g_date_valid_day (day);
    return !!_peel_return;
  }

  static bool
  valid_dmy (uint8_t day, DateMonth month, uint16_t year) noexcept
  {
    ::GDateMonth _peel_month = static_cast<::GDateMonth> (month);
    gboolean _peel_return = g_date_valid_dmy (day, _peel_month, year);
    return !!_peel_return;
  }

  static bool
  valid_julian (uint32_t julian_date) noexcept
  {
    gboolean _peel_return = g_date_valid_julian (julian_date);
    return !!_peel_return;
  }

  static bool
  valid_month (DateMonth month) noexcept
  {
    ::GDateMonth _peel_month = static_cast<::GDateMonth> (month);
    gboolean _peel_return = g_date_valid_month (_peel_month);
    return !!_peel_return;
  }

  static bool
  valid_weekday (DateWeekday weekday) noexcept
  {
    ::GDateWeekday _peel_weekday = static_cast<::GDateWeekday> (weekday);
    gboolean _peel_return = g_date_valid_weekday (_peel_weekday);
    return !!_peel_return;
  }

  static bool
  valid_year (uint16_t year) noexcept
  {
    gboolean _peel_return = g_date_valid_year (year);
    return !!_peel_return;
  }
}; /* record Date */

static_assert (sizeof (Date) == sizeof (::GDate),
               "Date size mismatch");
static_assert (alignof (Date) == alignof (::GDate),
               "Date align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
