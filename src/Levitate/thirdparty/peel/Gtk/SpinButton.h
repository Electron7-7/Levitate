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
#include <peel/Gtk/Editable.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class Adjustment;
enum class ScrollType : std::underlying_type<::GtkScrollType>::type;
class SpinButton;
enum class SpinType : std::underlying_type<::GtkSpinType>::type;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::SpinButton> ()
{
  return gtk_spin_button_get_type ();
}


namespace Gtk
{
class SpinButton : public Editable
/* non-derivable */
/* extends Widget */
/* implements Accessible, AccessibleRange, Buildable, CellEditable, Constraint::Target, Editable, Orientable */
{
private:
  using Editable::get_default_direction;
  using Editable::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SpinButton () = delete;
  SpinButton (const SpinButton &) = delete;
  SpinButton (SpinButton &&) = delete;
  SpinButton &
  operator = (const SpinButton &) = delete;
  SpinButton &
  operator = (SpinButton &&) = delete;
  ~SpinButton () = delete;
public:
  enum class UpdatePolicy : std::underlying_type<::GtkSpinButtonUpdatePolicy>::type;

  static peel::FloatPtr<SpinButton>
  create (Adjustment *adjustment, double climb_rate, unsigned digits) noexcept
  {
    ::GtkAdjustment *_peel_adjustment = reinterpret_cast<::GtkAdjustment *> (adjustment);
    ::GtkWidget *_peel_return = gtk_spin_button_new (_peel_adjustment, climb_rate, digits);
    peel_assume (_peel_return);
    return peel::FloatPtr<SpinButton> (reinterpret_cast<SpinButton *> (_peel_return));
  }

  static peel::FloatPtr<SpinButton>
  create_with_range (double min, double max, double step) noexcept
  {
    ::GtkWidget *_peel_return = gtk_spin_button_new_with_range (min, max, step);
    peel_assume (_peel_return);
    return peel::FloatPtr<SpinButton> (reinterpret_cast<SpinButton *> (_peel_return));
  }

  void
  configure (peel::FloatPtr<Adjustment> adjustment, double climb_rate, unsigned digits) noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    ::GtkAdjustment *_peel_adjustment = reinterpret_cast<::GtkAdjustment *> (std::move (adjustment).release_floating_ptr ());
    gtk_spin_button_configure (_peel_this, _peel_adjustment, climb_rate, digits);
  }

  bool
  get_activates_default () noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    gboolean _peel_return = gtk_spin_button_get_activates_default (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  Adjustment *
  get_adjustment () noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    ::GtkAdjustment *_peel_return = gtk_spin_button_get_adjustment (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Adjustment *> (_peel_return);
  }

  double
  get_climb_rate () noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    return gtk_spin_button_get_climb_rate (_peel_this);
  }

  unsigned
  get_digits () noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    return gtk_spin_button_get_digits (_peel_this);
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_increments (double *step, double *page) noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    gtk_spin_button_get_increments (_peel_this, step, page);
  }

  bool
  get_numeric () noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    gboolean _peel_return = gtk_spin_button_get_numeric (_peel_this);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_range (double *min, double *max) noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    gtk_spin_button_get_range (_peel_this, min, max);
  }

  bool
  get_snap_to_ticks () noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    gboolean _peel_return = gtk_spin_button_get_snap_to_ticks (_peel_this);
    return !!_peel_return;
  }

  SpinButton::UpdatePolicy
  get_update_policy () noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    ::GtkSpinButtonUpdatePolicy _peel_return = gtk_spin_button_get_update_policy (_peel_this);
    return static_cast<SpinButton::UpdatePolicy> (_peel_return);
  }

  double
  get_value () noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    return gtk_spin_button_get_value (_peel_this);
  }

  int
  get_value_as_int () noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    return gtk_spin_button_get_value_as_int (_peel_this);
  }

  bool
  get_wrap () noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    gboolean _peel_return = gtk_spin_button_get_wrap (_peel_this);
    return !!_peel_return;
  }

  void
  set_activates_default (bool activates_default) noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    gboolean _peel_activates_default = static_cast<gboolean> (activates_default);
    gtk_spin_button_set_activates_default (_peel_this, _peel_activates_default);
  }

  peel_nonnull_args (2)
  void
  set_adjustment (Adjustment *adjustment) noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    ::GtkAdjustment *_peel_adjustment = reinterpret_cast<::GtkAdjustment *> (adjustment);
    gtk_spin_button_set_adjustment (_peel_this, _peel_adjustment);
  }

  void
  set_climb_rate (double climb_rate) noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    gtk_spin_button_set_climb_rate (_peel_this, climb_rate);
  }

  void
  set_digits (unsigned digits) noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    gtk_spin_button_set_digits (_peel_this, digits);
  }

  void
  set_increments (double step, double page) noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    gtk_spin_button_set_increments (_peel_this, step, page);
  }

  void
  set_numeric (bool numeric) noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    gboolean _peel_numeric = static_cast<gboolean> (numeric);
    gtk_spin_button_set_numeric (_peel_this, _peel_numeric);
  }

  void
  set_range (double min, double max) noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    gtk_spin_button_set_range (_peel_this, min, max);
  }

  void
  set_snap_to_ticks (bool snap_to_ticks) noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    gboolean _peel_snap_to_ticks = static_cast<gboolean> (snap_to_ticks);
    gtk_spin_button_set_snap_to_ticks (_peel_this, _peel_snap_to_ticks);
  }

  void
  set_update_policy (SpinButton::UpdatePolicy policy) noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    ::GtkSpinButtonUpdatePolicy _peel_policy = static_cast<::GtkSpinButtonUpdatePolicy> (policy);
    gtk_spin_button_set_update_policy (_peel_this, _peel_policy);
  }

  void
  set_value (double value) noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    gtk_spin_button_set_value (_peel_this, value);
  }

  void
  set_wrap (bool wrap) noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    gboolean _peel_wrap = static_cast<gboolean> (wrap);
    gtk_spin_button_set_wrap (_peel_this, _peel_wrap);
  }

  void
  spin (SpinType direction, double increment) noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    ::GtkSpinType _peel_direction = static_cast<::GtkSpinType> (direction);
    gtk_spin_button_spin (_peel_this, _peel_direction, increment);
  }

  void
  update () noexcept
  {
    ::GtkSpinButton *_peel_this = reinterpret_cast<::GtkSpinButton *> (this);
    gtk_spin_button_update (_peel_this);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SpinButton, void ()>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (SpinButton *), bool after = false) noexcept
  {
    return Signal<SpinButton, void ()>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  void
  emit_activate () noexcept
  {
    return Signal<SpinButton, void ()>::_peel_emit_by_name (this, "activate");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_change_value (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SpinButton, void (ScrollType)>::_peel_connect_by_name (this, "change-value", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_change_value (HandlerObject *object, void (HandlerObject::*handler_method) (SpinButton *, ScrollType), bool after = false) noexcept
  {
    return Signal<SpinButton, void (ScrollType)>::_peel_connect_by_name (this, "change-value", object, handler_method, after);
  }

  void
  emit_change_value (ScrollType scroll) noexcept
  {
    return Signal<SpinButton, void (ScrollType)>::_peel_emit_by_name (this, "change-value", scroll);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_input (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SpinButton, int (double)>::_peel_connect_by_name (this, "input", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_input (HandlerObject *object, int (HandlerObject::*handler_method) (SpinButton *, double), bool after = false) noexcept
  {
    return Signal<SpinButton, int (double)>::_peel_connect_by_name (this, "input", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_output (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SpinButton, bool ()>::_peel_connect_by_name (this, "output", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_output (HandlerObject *object, bool (HandlerObject::*handler_method) (SpinButton *), bool after = false) noexcept
  {
    return Signal<SpinButton, bool ()>::_peel_connect_by_name (this, "output", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_value_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SpinButton, void ()>::_peel_connect_by_name (this, "value-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_value_changed (HandlerObject *object, void (HandlerObject::*handler_method) (SpinButton *), bool after = false) noexcept
  {
    return Signal<SpinButton, void ()>::_peel_connect_by_name (this, "value-changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_wrapped (Handler &&handler, bool after = false) noexcept
  {
    return Signal<SpinButton, void ()>::_peel_connect_by_name (this, "wrapped", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_wrapped (HandlerObject *object, void (HandlerObject::*handler_method) (SpinButton *), bool after = false) noexcept
  {
    return Signal<SpinButton, void ()>::_peel_connect_by_name (this, "wrapped", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_activates_default ()
  {
    return peel::Property<bool> { "activates-default" };
  }

  static peel::Property<Adjustment>
  prop_adjustment ()
  {
    return peel::Property<Adjustment> { "adjustment" };
  }

  static peel::Property<double>
  prop_climb_rate ()
  {
    return peel::Property<double> { "climb-rate" };
  }

  static peel::Property<unsigned>
  prop_digits ()
  {
    return peel::Property<unsigned> { "digits" };
  }

  static peel::Property<bool>
  prop_numeric ()
  {
    return peel::Property<bool> { "numeric" };
  }

  static peel::Property<bool>
  prop_snap_to_ticks ()
  {
    return peel::Property<bool> { "snap-to-ticks" };
  }

  static peel::Property<SpinButton::UpdatePolicy>
  prop_update_policy ()
  {
    return peel::Property<SpinButton::UpdatePolicy> { "update-policy" };
  }

  static peel::Property<double>
  prop_value ()
  {
    return peel::Property<double> { "value" };
  }

  static peel::Property<bool>
  prop_wrap ()
  {
    return peel::Property<bool> { "wrap" };
  }
}; /* class SpinButton */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Adjustment.h>
