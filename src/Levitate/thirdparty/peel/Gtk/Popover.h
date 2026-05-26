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
#include <peel/Gtk/Native.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
struct Rectangle;
} /* namespace Gdk */

namespace Gtk
{
class Popover;
enum class PositionType : std::underlying_type<::GtkPositionType>::type;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Popover> ()
{
  return gtk_popover_get_type ();
}


namespace Gtk
{
class Popover : public Native
/* extends Widget */
/* implements Accessible, Buildable, Constraint::Target, Native, ShortcutManager */
{
private:
  using Native::get_default_direction;
  using Native::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Popover () = delete;
  Popover (const Popover &) = delete;
  Popover (Popover &&) = delete;
  Popover &
  operator = (const Popover &) = delete;
  Popover &
  operator = (Popover &&) = delete;
protected:
  ~Popover () = default;
public:

  static peel::FloatPtr<Popover>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_popover_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<Popover> (reinterpret_cast<Popover *> (_peel_return));
  }

  bool
  get_autohide () noexcept
  {
    ::GtkPopover *_peel_this = reinterpret_cast<::GtkPopover *> (this);
    gboolean _peel_return = gtk_popover_get_autohide (_peel_this);
    return !!_peel_return;
  }

  bool
  get_cascade_popdown () noexcept
  {
    ::GtkPopover *_peel_this = reinterpret_cast<::GtkPopover *> (this);
    gboolean _peel_return = gtk_popover_get_cascade_popdown (_peel_this);
    return !!_peel_return;
  }

  Widget *
  get_child () noexcept
  {
    ::GtkPopover *_peel_this = reinterpret_cast<::GtkPopover *> (this);
    ::GtkWidget *_peel_return = gtk_popover_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_has_arrow () noexcept
  {
    ::GtkPopover *_peel_this = reinterpret_cast<::GtkPopover *> (this);
    gboolean _peel_return = gtk_popover_get_has_arrow (_peel_this);
    return !!_peel_return;
  }

  bool
  get_mnemonics_visible () noexcept
  {
    ::GtkPopover *_peel_this = reinterpret_cast<::GtkPopover *> (this);
    gboolean _peel_return = gtk_popover_get_mnemonics_visible (_peel_this);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3)
  void
  get_offset (int *x_offset, int *y_offset) noexcept
  {
    ::GtkPopover *_peel_this = reinterpret_cast<::GtkPopover *> (this);
    gtk_popover_get_offset (_peel_this, x_offset, y_offset);
  }

  peel_arg_out (2) peel_nonnull_args (2)
  bool
  get_pointing_to (Gdk::Rectangle *rect) noexcept
  {
    ::GtkPopover *_peel_this = reinterpret_cast<::GtkPopover *> (this);
    ::GdkRectangle *_peel_rect = reinterpret_cast<::GdkRectangle *> (rect);
    gboolean _peel_return = gtk_popover_get_pointing_to (_peel_this, _peel_rect);
    return !!_peel_return;
  }

  PositionType
  get_position () noexcept
  {
    ::GtkPopover *_peel_this = reinterpret_cast<::GtkPopover *> (this);
    ::GtkPositionType _peel_return = gtk_popover_get_position (_peel_this);
    return static_cast<PositionType> (_peel_return);
  }

  void
  popdown () noexcept
  {
    ::GtkPopover *_peel_this = reinterpret_cast<::GtkPopover *> (this);
    gtk_popover_popdown (_peel_this);
  }

  void
  popup () noexcept
  {
    ::GtkPopover *_peel_this = reinterpret_cast<::GtkPopover *> (this);
    gtk_popover_popup (_peel_this);
  }

  void
  present () noexcept
  {
    ::GtkPopover *_peel_this = reinterpret_cast<::GtkPopover *> (this);
    gtk_popover_present (_peel_this);
  }

  void
  set_autohide (bool autohide) noexcept
  {
    ::GtkPopover *_peel_this = reinterpret_cast<::GtkPopover *> (this);
    gboolean _peel_autohide = static_cast<gboolean> (autohide);
    gtk_popover_set_autohide (_peel_this, _peel_autohide);
  }

  void
  set_cascade_popdown (bool cascade_popdown) noexcept
  {
    ::GtkPopover *_peel_this = reinterpret_cast<::GtkPopover *> (this);
    gboolean _peel_cascade_popdown = static_cast<gboolean> (cascade_popdown);
    gtk_popover_set_cascade_popdown (_peel_this, _peel_cascade_popdown);
  }

  void
  set_child (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkPopover *_peel_this = reinterpret_cast<::GtkPopover *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_popover_set_child (_peel_this, _peel_child);
  }

  void
  set_default_widget (Widget *widget) noexcept
  {
    ::GtkPopover *_peel_this = reinterpret_cast<::GtkPopover *> (this);
    ::GtkWidget *_peel_widget = reinterpret_cast<::GtkWidget *> (widget);
    gtk_popover_set_default_widget (_peel_this, _peel_widget);
  }

  void
  set_has_arrow (bool has_arrow) noexcept
  {
    ::GtkPopover *_peel_this = reinterpret_cast<::GtkPopover *> (this);
    gboolean _peel_has_arrow = static_cast<gboolean> (has_arrow);
    gtk_popover_set_has_arrow (_peel_this, _peel_has_arrow);
  }

  void
  set_mnemonics_visible (bool mnemonics_visible) noexcept
  {
    ::GtkPopover *_peel_this = reinterpret_cast<::GtkPopover *> (this);
    gboolean _peel_mnemonics_visible = static_cast<gboolean> (mnemonics_visible);
    gtk_popover_set_mnemonics_visible (_peel_this, _peel_mnemonics_visible);
  }

  void
  set_offset (int x_offset, int y_offset) noexcept
  {
    ::GtkPopover *_peel_this = reinterpret_cast<::GtkPopover *> (this);
    gtk_popover_set_offset (_peel_this, x_offset, y_offset);
  }

  peel_arg_in (2)
  void
  set_pointing_to (const Gdk::Rectangle *rect) noexcept
  {
    ::GtkPopover *_peel_this = reinterpret_cast<::GtkPopover *> (this);
    const ::GdkRectangle *_peel_rect = reinterpret_cast<const ::GdkRectangle *> (rect);
    gtk_popover_set_pointing_to (_peel_this, _peel_rect);
  }

  void
  set_position (PositionType position) noexcept
  {
    ::GtkPopover *_peel_this = reinterpret_cast<::GtkPopover *> (this);
    ::GtkPositionType _peel_position = static_cast<::GtkPositionType> (position);
    gtk_popover_set_position (_peel_this, _peel_position);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate_default (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Popover, void ()>::_peel_connect_by_name (this, "activate-default", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate_default (HandlerObject *object, void (HandlerObject::*handler_method) (Popover *), bool after = false) noexcept
  {
    return Signal<Popover, void ()>::_peel_connect_by_name (this, "activate-default", object, handler_method, after);
  }

  void
  emit_activate_default () noexcept
  {
    return Signal<Popover, void ()>::_peel_emit_by_name (this, "activate-default");
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_closed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Popover, void ()>::_peel_connect_by_name (this, "closed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_closed (HandlerObject *object, void (HandlerObject::*handler_method) (Popover *), bool after = false) noexcept
  {
    return Signal<Popover, void ()>::_peel_connect_by_name (this, "closed", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_autohide ()
  {
    return peel::Property<bool> { "autohide" };
  }

  static peel::Property<bool>
  prop_cascade_popdown ()
  {
    return peel::Property<bool> { "cascade-popdown" };
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<Widget>
  prop_default_widget ()
  {
    return peel::Property<Widget> { "default-widget" };
  }

  static peel::Property<bool>
  prop_has_arrow ()
  {
    return peel::Property<bool> { "has-arrow" };
  }

  static peel::Property<bool>
  prop_mnemonics_visible ()
  {
    return peel::Property<bool> { "mnemonics-visible" };
  }

  static peel::Property<Gdk::Rectangle>
  prop_pointing_to ()
  {
    return peel::Property<Gdk::Rectangle> { "pointing-to" };
  }

  static peel::Property<PositionType>
  prop_position ()
  {
    return peel::Property<PositionType> { "position" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Popover> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_activate_default () noexcept
  {
    ::GtkPopoverClass *_peel_class = reinterpret_cast<::GtkPopoverClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkPopover *_peel_this = reinterpret_cast<::GtkPopover *> (this);
    _peel_class->activate_default (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_closed () noexcept
  {
    ::GtkPopoverClass *_peel_class = reinterpret_cast<::GtkPopoverClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkPopover *_peel_this = reinterpret_cast<::GtkPopover *> (this);
    _peel_class->closed (_peel_this);
  }

public:
  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkPopoverClass) - sizeof (Widget::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_activate_default ()
    {
      ::GtkPopoverClass *klass = reinterpret_cast<::GtkPopoverClass *> (this);
      klass->activate_default = +[] (::GtkPopover *popover) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (popover);
        _peel_this->DerivedClass::vfunc_activate_default ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_closed ()
    {
      ::GtkPopoverClass *klass = reinterpret_cast<::GtkPopoverClass *> (this);
      klass->closed = +[] (::GtkPopover *popover) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (popover);
        _peel_this->DerivedClass::vfunc_closed ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkPopoverClass),
                 "Popover::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkPopoverClass),
                 "Popover::Class align mismatch");
}; /* class Popover */

static_assert (sizeof (Popover) == sizeof (::GtkPopover),
               "Popover size mismatch");
static_assert (alignof (Popover) == alignof (::GtkPopover),
               "Popover align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Widget.h>
