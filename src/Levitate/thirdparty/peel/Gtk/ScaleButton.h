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
namespace Gtk
{
class Adjustment;
class Button;
class ScaleButton;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ScaleButton> ()
{
  return gtk_scale_button_get_type ();
}


namespace Gtk
{
class ScaleButton : public Widget
/* implements Accessible, AccessibleRange, Buildable, Constraint::Target, Orientable */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ScaleButton () = delete;
  ScaleButton (const ScaleButton &) = delete;
  ScaleButton (ScaleButton &&) = delete;
  ScaleButton &
  operator = (const ScaleButton &) = delete;
  ScaleButton &
  operator = (ScaleButton &&) = delete;
protected:
  ~ScaleButton () = default;
public:

  static peel::FloatPtr<ScaleButton>
  create (double min, double max, double step, peel::StrvRef icons) noexcept
  {
    const char **_peel_icons = const_cast<const char **> (icons.data ());
    ::GtkWidget *_peel_return = gtk_scale_button_new (min, max, step, _peel_icons);
    peel_assume (_peel_return);
    return peel::FloatPtr<ScaleButton> (reinterpret_cast<ScaleButton *> (_peel_return));
  }

  bool
  get_active () noexcept
  {
    ::GtkScaleButton *_peel_this = reinterpret_cast<::GtkScaleButton *> (this);
    gboolean _peel_return = gtk_scale_button_get_active (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  Adjustment *
  get_adjustment () noexcept
  {
    ::GtkScaleButton *_peel_this = reinterpret_cast<::GtkScaleButton *> (this);
    ::GtkAdjustment *_peel_return = gtk_scale_button_get_adjustment (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Adjustment *> (_peel_return);
  }

  bool
  get_has_frame () noexcept
  {
    ::GtkScaleButton *_peel_this = reinterpret_cast<::GtkScaleButton *> (this);
    gboolean _peel_return = gtk_scale_button_get_has_frame (_peel_this);
    return !!_peel_return;
  }

  peel_returns_nonnull
  Button *
  get_minus_button () noexcept
  {
    ::GtkScaleButton *_peel_this = reinterpret_cast<::GtkScaleButton *> (this);
    ::GtkWidget *_peel_return = gtk_scale_button_get_minus_button (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Button *> (_peel_return);
  }

  peel_returns_nonnull
  Button *
  get_plus_button () noexcept
  {
    ::GtkScaleButton *_peel_this = reinterpret_cast<::GtkScaleButton *> (this);
    ::GtkWidget *_peel_return = gtk_scale_button_get_plus_button (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Button *> (_peel_return);
  }

  peel_returns_nonnull
  Widget *
  get_popup () noexcept
  {
    ::GtkScaleButton *_peel_this = reinterpret_cast<::GtkScaleButton *> (this);
    ::GtkWidget *_peel_return = gtk_scale_button_get_popup (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  double
  get_value () noexcept
  {
    ::GtkScaleButton *_peel_this = reinterpret_cast<::GtkScaleButton *> (this);
    return gtk_scale_button_get_value (_peel_this);
  }

  peel_nonnull_args (2)
  void
  set_adjustment (Adjustment *adjustment) noexcept
  {
    ::GtkScaleButton *_peel_this = reinterpret_cast<::GtkScaleButton *> (this);
    ::GtkAdjustment *_peel_adjustment = reinterpret_cast<::GtkAdjustment *> (adjustment);
    gtk_scale_button_set_adjustment (_peel_this, _peel_adjustment);
  }

  void
  set_has_frame (bool has_frame) noexcept
  {
    ::GtkScaleButton *_peel_this = reinterpret_cast<::GtkScaleButton *> (this);
    gboolean _peel_has_frame = static_cast<gboolean> (has_frame);
    gtk_scale_button_set_has_frame (_peel_this, _peel_has_frame);
  }

  void
  set_icons (peel::StrvRef icons) noexcept
  {
    ::GtkScaleButton *_peel_this = reinterpret_cast<::GtkScaleButton *> (this);
    const char **_peel_icons = const_cast<const char **> (icons.data ());
    gtk_scale_button_set_icons (_peel_this, _peel_icons);
  }

  void
  set_value (double value) noexcept
  {
    ::GtkScaleButton *_peel_this = reinterpret_cast<::GtkScaleButton *> (this);
    gtk_scale_button_set_value (_peel_this, value);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_popdown (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ScaleButton, void ()>::_peel_connect_by_name (this, "popdown", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_popdown (HandlerObject *object, void (HandlerObject::*handler_method) (ScaleButton *), bool after = false) noexcept
  {
    return Signal<ScaleButton, void ()>::_peel_connect_by_name (this, "popdown", object, handler_method, after);
  }

  void
  emit_popdown () noexcept
  {
    return Signal<ScaleButton, void ()>::_peel_emit_by_name (this, "popdown");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_popup (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ScaleButton, void ()>::_peel_connect_by_name (this, "popup", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_popup (HandlerObject *object, void (HandlerObject::*handler_method) (ScaleButton *), bool after = false) noexcept
  {
    return Signal<ScaleButton, void ()>::_peel_connect_by_name (this, "popup", object, handler_method, after);
  }

  void
  emit_popup () noexcept
  {
    return Signal<ScaleButton, void ()>::_peel_emit_by_name (this, "popup");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_value_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ScaleButton, void (double)>::_peel_connect_by_name (this, "value-changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_value_changed (HandlerObject *object, void (HandlerObject::*handler_method) (ScaleButton *, double), bool after = false) noexcept
  {
    return Signal<ScaleButton, void (double)>::_peel_connect_by_name (this, "value-changed", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_active ()
  {
    return peel::Property<bool> { "active" };
  }

  static peel::Property<Adjustment>
  prop_adjustment ()
  {
    return peel::Property<Adjustment> { "adjustment" };
  }

  static peel::Property<bool>
  prop_has_frame ()
  {
    return peel::Property<bool> { "has-frame" };
  }

  static peel::Property<peel::Strv>
  prop_icons ()
  {
    return peel::Property<peel::Strv> { "icons" };
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
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<ScaleButton> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_value_changed (double value) noexcept
  {
    ::GtkScaleButtonClass *_peel_class = reinterpret_cast<::GtkScaleButtonClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkScaleButton *_peel_this = reinterpret_cast<::GtkScaleButton *> (this);
    _peel_class->value_changed (_peel_this, value);
  }

public:
  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkScaleButtonClass) - sizeof (Widget::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_value_changed ()
    {
      ::GtkScaleButtonClass *klass = reinterpret_cast<::GtkScaleButtonClass *> (this);
      klass->value_changed = +[] (::GtkScaleButton *button, double value) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (button);
        _peel_this->DerivedClass::vfunc_value_changed (value);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkScaleButtonClass),
                 "ScaleButton::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkScaleButtonClass),
                 "ScaleButton::Class align mismatch");
}; /* class ScaleButton */

static_assert (sizeof (ScaleButton) == sizeof (::GtkScaleButton),
               "ScaleButton size mismatch");
static_assert (alignof (ScaleButton) == alignof (::GtkScaleButton),
               "ScaleButton align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
