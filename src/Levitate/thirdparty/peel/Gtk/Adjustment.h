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
#include <peel/GObject/InitiallyUnowned.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class Adjustment;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Adjustment> ()
{
  return gtk_adjustment_get_type ();
}


namespace Gtk
{
class Adjustment : public GObject::InitiallyUnowned
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Adjustment () = delete;
  Adjustment (const Adjustment &) = delete;
  Adjustment (Adjustment &&) = delete;
  Adjustment &
  operator = (const Adjustment &) = delete;
  Adjustment &
  operator = (Adjustment &&) = delete;
protected:
  ~Adjustment () = default;
public:

  static peel::FloatPtr<Adjustment>
  create (double value, double lower, double upper, double step_increment, double page_increment, double page_size) noexcept
  {
    ::GtkAdjustment *_peel_return = gtk_adjustment_new (value, lower, upper, step_increment, page_increment, page_size);
    peel_assume (_peel_return);
    return peel::FloatPtr<Adjustment> (reinterpret_cast<Adjustment *> (_peel_return));
  }

  void
  clamp_page (double lower, double upper) noexcept
  {
    ::GtkAdjustment *_peel_this = reinterpret_cast<::GtkAdjustment *> (this);
    gtk_adjustment_clamp_page (_peel_this, lower, upper);
  }

  void
  configure (double value, double lower, double upper, double step_increment, double page_increment, double page_size) noexcept
  {
    ::GtkAdjustment *_peel_this = reinterpret_cast<::GtkAdjustment *> (this);
    gtk_adjustment_configure (_peel_this, value, lower, upper, step_increment, page_increment, page_size);
  }

  double
  get_lower () noexcept
  {
    ::GtkAdjustment *_peel_this = reinterpret_cast<::GtkAdjustment *> (this);
    return gtk_adjustment_get_lower (_peel_this);
  }

  double
  get_minimum_increment () noexcept
  {
    ::GtkAdjustment *_peel_this = reinterpret_cast<::GtkAdjustment *> (this);
    return gtk_adjustment_get_minimum_increment (_peel_this);
  }

  double
  get_page_increment () noexcept
  {
    ::GtkAdjustment *_peel_this = reinterpret_cast<::GtkAdjustment *> (this);
    return gtk_adjustment_get_page_increment (_peel_this);
  }

  double
  get_page_size () noexcept
  {
    ::GtkAdjustment *_peel_this = reinterpret_cast<::GtkAdjustment *> (this);
    return gtk_adjustment_get_page_size (_peel_this);
  }

  double
  get_step_increment () noexcept
  {
    ::GtkAdjustment *_peel_this = reinterpret_cast<::GtkAdjustment *> (this);
    return gtk_adjustment_get_step_increment (_peel_this);
  }

  double
  get_upper () noexcept
  {
    ::GtkAdjustment *_peel_this = reinterpret_cast<::GtkAdjustment *> (this);
    return gtk_adjustment_get_upper (_peel_this);
  }

  double
  get_value () noexcept
  {
    ::GtkAdjustment *_peel_this = reinterpret_cast<::GtkAdjustment *> (this);
    return gtk_adjustment_get_value (_peel_this);
  }

  void
  set_lower (double lower) noexcept
  {
    ::GtkAdjustment *_peel_this = reinterpret_cast<::GtkAdjustment *> (this);
    gtk_adjustment_set_lower (_peel_this, lower);
  }

  void
  set_page_increment (double page_increment) noexcept
  {
    ::GtkAdjustment *_peel_this = reinterpret_cast<::GtkAdjustment *> (this);
    gtk_adjustment_set_page_increment (_peel_this, page_increment);
  }

  void
  set_page_size (double page_size) noexcept
  {
    ::GtkAdjustment *_peel_this = reinterpret_cast<::GtkAdjustment *> (this);
    gtk_adjustment_set_page_size (_peel_this, page_size);
  }

  void
  set_step_increment (double step_increment) noexcept
  {
    ::GtkAdjustment *_peel_this = reinterpret_cast<::GtkAdjustment *> (this);
    gtk_adjustment_set_step_increment (_peel_this, step_increment);
  }

  void
  set_upper (double upper) noexcept
  {
    ::GtkAdjustment *_peel_this = reinterpret_cast<::GtkAdjustment *> (this);
    gtk_adjustment_set_upper (_peel_this, upper);
  }

  void
  set_value (double value) noexcept
  {
    ::GtkAdjustment *_peel_this = reinterpret_cast<::GtkAdjustment *> (this);
    gtk_adjustment_set_value (_peel_this, value);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Adjustment, void ()>::_peel_connect_by_name (this, "changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_changed (HandlerObject *object, void (HandlerObject::*handler_method) (Adjustment *), bool after = false) noexcept
  {
    return Signal<Adjustment, void ()>::_peel_connect_by_name (this, "changed", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_value_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Adjustment, void ()>::_peel_connect_by_name (this, "value-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_value_changed (HandlerObject *object, void (HandlerObject::*handler_method) (Adjustment *), bool after = false) noexcept
  {
    return Signal<Adjustment, void ()>::_peel_connect_by_name (this, "value-changed", object, handler_method, after);
  }

  static peel::Property<double>
  prop_lower ()
  {
    return peel::Property<double> { "lower" };
  }

  static peel::Property<double>
  prop_page_increment ()
  {
    return peel::Property<double> { "page-increment" };
  }

  static peel::Property<double>
  prop_page_size ()
  {
    return peel::Property<double> { "page-size" };
  }

  static peel::Property<double>
  prop_step_increment ()
  {
    return peel::Property<double> { "step-increment" };
  }

  static peel::Property<double>
  prop_upper ()
  {
    return peel::Property<double> { "upper" };
  }

  static peel::Property<double>
  prop_value ()
  {
    return peel::Property<double> { "value" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Adjustment> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_changed () noexcept
  {
    ::GtkAdjustmentClass *_peel_class = reinterpret_cast<::GtkAdjustmentClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkAdjustment *_peel_this = reinterpret_cast<::GtkAdjustment *> (this);
    _peel_class->changed (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_value_changed () noexcept
  {
    ::GtkAdjustmentClass *_peel_class = reinterpret_cast<::GtkAdjustmentClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkAdjustment *_peel_this = reinterpret_cast<::GtkAdjustment *> (this);
    _peel_class->value_changed (_peel_this);
  }

public:
  class Class : public GObject::InitiallyUnowned::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkAdjustmentClass) - sizeof (GObject::InitiallyUnowned::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_changed ()
    {
      ::GtkAdjustmentClass *klass = reinterpret_cast<::GtkAdjustmentClass *> (this);
      klass->changed = +[] (::GtkAdjustment *adjustment) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (adjustment);
        _peel_this->DerivedClass::vfunc_changed ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_value_changed ()
    {
      ::GtkAdjustmentClass *klass = reinterpret_cast<::GtkAdjustmentClass *> (this);
      klass->value_changed = +[] (::GtkAdjustment *adjustment) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (adjustment);
        _peel_this->DerivedClass::vfunc_value_changed ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkAdjustmentClass),
                 "Adjustment::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkAdjustmentClass),
                 "Adjustment::Class align mismatch");
}; /* class Adjustment */

static_assert (sizeof (Adjustment) == sizeof (::GtkAdjustment),
               "Adjustment size mismatch");
static_assert (alignof (Adjustment) == alignof (::GtkAdjustment),
               "Adjustment align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
