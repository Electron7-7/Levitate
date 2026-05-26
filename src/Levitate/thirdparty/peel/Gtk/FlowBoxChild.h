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
class FlowBoxChild;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::FlowBoxChild> ()
{
  return gtk_flow_box_child_get_type ();
}


namespace Gtk
{
class FlowBoxChild : public Widget
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FlowBoxChild () = delete;
  FlowBoxChild (const FlowBoxChild &) = delete;
  FlowBoxChild (FlowBoxChild &&) = delete;
  FlowBoxChild &
  operator = (const FlowBoxChild &) = delete;
  FlowBoxChild &
  operator = (FlowBoxChild &&) = delete;
protected:
  ~FlowBoxChild () = default;
public:

  static peel::FloatPtr<FlowBoxChild>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_flow_box_child_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<FlowBoxChild> (reinterpret_cast<FlowBoxChild *> (_peel_return));
  }

  void
  changed () noexcept
  {
    ::GtkFlowBoxChild *_peel_this = reinterpret_cast<::GtkFlowBoxChild *> (this);
    gtk_flow_box_child_changed (_peel_this);
  }

  Widget *
  get_child () noexcept
  {
    ::GtkFlowBoxChild *_peel_this = reinterpret_cast<::GtkFlowBoxChild *> (this);
    ::GtkWidget *_peel_return = gtk_flow_box_child_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  int
  get_index () noexcept
  {
    ::GtkFlowBoxChild *_peel_this = reinterpret_cast<::GtkFlowBoxChild *> (this);
    return gtk_flow_box_child_get_index (_peel_this);
  }

  bool
  is_selected () noexcept
  {
    ::GtkFlowBoxChild *_peel_this = reinterpret_cast<::GtkFlowBoxChild *> (this);
    gboolean _peel_return = gtk_flow_box_child_is_selected (_peel_this);
    return !!_peel_return;
  }

  void
  set_child (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkFlowBoxChild *_peel_this = reinterpret_cast<::GtkFlowBoxChild *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_flow_box_child_set_child (_peel_this, _peel_child);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FlowBoxChild, void ()>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (FlowBoxChild *), bool after = false) noexcept
  {
    return Signal<FlowBoxChild, void ()>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  void
  emit_activate () noexcept
  {
    return Signal<FlowBoxChild, void ()>::_peel_emit_by_name (this, "activate");
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<FlowBoxChild> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_activate () noexcept
  {
    ::GtkFlowBoxChildClass *_peel_class = reinterpret_cast<::GtkFlowBoxChildClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkFlowBoxChild *_peel_this = reinterpret_cast<::GtkFlowBoxChild *> (this);
    _peel_class->activate (_peel_this);
  }

public:
  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkFlowBoxChildClass) - sizeof (Widget::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_activate ()
    {
      ::GtkFlowBoxChildClass *klass = reinterpret_cast<::GtkFlowBoxChildClass *> (this);
      klass->activate = +[] (::GtkFlowBoxChild *child) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (child);
        _peel_this->DerivedClass::vfunc_activate ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkFlowBoxChildClass),
                 "FlowBoxChild::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkFlowBoxChildClass),
                 "FlowBoxChild::Class align mismatch");
}; /* class FlowBoxChild */

static_assert (sizeof (FlowBoxChild) == sizeof (::GtkFlowBoxChild),
               "FlowBoxChild size mismatch");
static_assert (alignof (FlowBoxChild) == alignof (::GtkFlowBoxChild),
               "FlowBoxChild align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
