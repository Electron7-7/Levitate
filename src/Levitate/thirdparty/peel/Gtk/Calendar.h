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
#include <gtk/gtk.h>
#include <peel/Gtk/Widget.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ DateTime;
} /* namespace GLib */

namespace Gtk
{
class Calendar;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Calendar> ()
{
  return gtk_calendar_get_type ();
}


namespace Gtk
{
class Calendar : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Calendar () = delete;
  Calendar (const Calendar &) = delete;
  Calendar (Calendar &&) = delete;
  Calendar &
  operator = (const Calendar &) = delete;
  Calendar &
  operator = (Calendar &&) = delete;
  ~Calendar () = delete;
public:

  static peel::FloatPtr<Calendar>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_calendar_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<Calendar> (reinterpret_cast<Calendar *> (_peel_return));
  }

  void
  clear_marks () noexcept
  {
    ::GtkCalendar *_peel_this = reinterpret_cast<::GtkCalendar *> (this);
    gtk_calendar_clear_marks (_peel_this);
  }

  peel::RefPtr<GLib::DateTime>
  get_date () noexcept
  {
    ::GtkCalendar *_peel_this = reinterpret_cast<::GtkCalendar *> (this);
    ::GDateTime *_peel_return = gtk_calendar_get_date (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::DateTime>::adopt_ref (reinterpret_cast<GLib::DateTime *> (_peel_return));
  }

  int
  get_day () noexcept
  {
    ::GtkCalendar *_peel_this = reinterpret_cast<::GtkCalendar *> (this);
    return gtk_calendar_get_day (_peel_this);
  }

  bool
  get_day_is_marked (unsigned day) noexcept
  {
    ::GtkCalendar *_peel_this = reinterpret_cast<::GtkCalendar *> (this);
    gboolean _peel_return = gtk_calendar_get_day_is_marked (_peel_this, day);
    return !!_peel_return;
  }

  int
  get_month () noexcept
  {
    ::GtkCalendar *_peel_this = reinterpret_cast<::GtkCalendar *> (this);
    return gtk_calendar_get_month (_peel_this);
  }

  bool
  get_show_day_names () noexcept
  {
    ::GtkCalendar *_peel_this = reinterpret_cast<::GtkCalendar *> (this);
    gboolean _peel_return = gtk_calendar_get_show_day_names (_peel_this);
    return !!_peel_return;
  }

  bool
  get_show_heading () noexcept
  {
    ::GtkCalendar *_peel_this = reinterpret_cast<::GtkCalendar *> (this);
    gboolean _peel_return = gtk_calendar_get_show_heading (_peel_this);
    return !!_peel_return;
  }

  bool
  get_show_week_numbers () noexcept
  {
    ::GtkCalendar *_peel_this = reinterpret_cast<::GtkCalendar *> (this);
    gboolean _peel_return = gtk_calendar_get_show_week_numbers (_peel_this);
    return !!_peel_return;
  }

  int
  get_year () noexcept
  {
    ::GtkCalendar *_peel_this = reinterpret_cast<::GtkCalendar *> (this);
    return gtk_calendar_get_year (_peel_this);
  }

  void
  mark_day (unsigned day) noexcept
  {
    ::GtkCalendar *_peel_this = reinterpret_cast<::GtkCalendar *> (this);
    gtk_calendar_mark_day (_peel_this, day);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  select_day (GLib::DateTime *date) noexcept
  {
    ::GtkCalendar *_peel_this = reinterpret_cast<::GtkCalendar *> (this);
    ::GDateTime *_peel_date = reinterpret_cast<::GDateTime *> (date);
    gtk_calendar_select_day (_peel_this, _peel_date);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_date (GLib::DateTime *date) noexcept
  {
    ::GtkCalendar *_peel_this = reinterpret_cast<::GtkCalendar *> (this);
    ::GDateTime *_peel_date = reinterpret_cast<::GDateTime *> (date);
    gtk_calendar_set_date (_peel_this, _peel_date);
  }

  void
  set_day (int day) noexcept
  {
    ::GtkCalendar *_peel_this = reinterpret_cast<::GtkCalendar *> (this);
    gtk_calendar_set_day (_peel_this, day);
  }

  void
  set_month (int month) noexcept
  {
    ::GtkCalendar *_peel_this = reinterpret_cast<::GtkCalendar *> (this);
    gtk_calendar_set_month (_peel_this, month);
  }

  void
  set_show_day_names (bool value) noexcept
  {
    ::GtkCalendar *_peel_this = reinterpret_cast<::GtkCalendar *> (this);
    gboolean _peel_value = static_cast<gboolean> (value);
    gtk_calendar_set_show_day_names (_peel_this, _peel_value);
  }

  void
  set_show_heading (bool value) noexcept
  {
    ::GtkCalendar *_peel_this = reinterpret_cast<::GtkCalendar *> (this);
    gboolean _peel_value = static_cast<gboolean> (value);
    gtk_calendar_set_show_heading (_peel_this, _peel_value);
  }

  void
  set_show_week_numbers (bool value) noexcept
  {
    ::GtkCalendar *_peel_this = reinterpret_cast<::GtkCalendar *> (this);
    gboolean _peel_value = static_cast<gboolean> (value);
    gtk_calendar_set_show_week_numbers (_peel_this, _peel_value);
  }

  void
  set_year (int year) noexcept
  {
    ::GtkCalendar *_peel_this = reinterpret_cast<::GtkCalendar *> (this);
    gtk_calendar_set_year (_peel_this, year);
  }

  void
  unmark_day (unsigned day) noexcept
  {
    ::GtkCalendar *_peel_this = reinterpret_cast<::GtkCalendar *> (this);
    gtk_calendar_unmark_day (_peel_this, day);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_day_selected (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Calendar, void ()>::_peel_connect_by_name (this, "day-selected", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_day_selected (HandlerObject *object, void (HandlerObject::*handler_method) (Calendar *), bool after = false) noexcept
  {
    return Signal<Calendar, void ()>::_peel_connect_by_name (this, "day-selected", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_next_month (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Calendar, void ()>::_peel_connect_by_name (this, "next-month", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_next_month (HandlerObject *object, void (HandlerObject::*handler_method) (Calendar *), bool after = false) noexcept
  {
    return Signal<Calendar, void ()>::_peel_connect_by_name (this, "next-month", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_next_year (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Calendar, void ()>::_peel_connect_by_name (this, "next-year", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_next_year (HandlerObject *object, void (HandlerObject::*handler_method) (Calendar *), bool after = false) noexcept
  {
    return Signal<Calendar, void ()>::_peel_connect_by_name (this, "next-year", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_prev_month (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Calendar, void ()>::_peel_connect_by_name (this, "prev-month", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_prev_month (HandlerObject *object, void (HandlerObject::*handler_method) (Calendar *), bool after = false) noexcept
  {
    return Signal<Calendar, void ()>::_peel_connect_by_name (this, "prev-month", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_prev_year (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Calendar, void ()>::_peel_connect_by_name (this, "prev-year", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_prev_year (HandlerObject *object, void (HandlerObject::*handler_method) (Calendar *), bool after = false) noexcept
  {
    return Signal<Calendar, void ()>::_peel_connect_by_name (this, "prev-year", object, handler_method, after);
  }

  static peel::Property<GLib::DateTime>
  prop_date ()
  {
    return peel::Property<GLib::DateTime> { "date" };
  }

  static peel::Property<int>
  prop_day ()
  {
    return peel::Property<int> { "day" };
  }

  static peel::Property<int>
  prop_month ()
  {
    return peel::Property<int> { "month" };
  }

  static peel::Property<bool>
  prop_show_day_names ()
  {
    return peel::Property<bool> { "show-day-names" };
  }

  static peel::Property<bool>
  prop_show_heading ()
  {
    return peel::Property<bool> { "show-heading" };
  }

  static peel::Property<bool>
  prop_show_week_numbers ()
  {
    return peel::Property<bool> { "show-week-numbers" };
  }

  static peel::Property<int>
  prop_year ()
  {
    return peel::Property<int> { "year" };
  }
}; /* class Calendar */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/DateTime.h>
