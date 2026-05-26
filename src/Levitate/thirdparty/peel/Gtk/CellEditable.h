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
#include <peel/GObject/TypeInterface.h>
#include <peel/Gtk/Widget.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class Event;
} /* namespace Gdk */

namespace Gtk
{
class /* interface */ CellEditable;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CellEditable> ()
{
  return gtk_cell_editable_get_type ();
}


namespace Gtk
{
class /* interface */ CellEditable : public Widget
/* requires Widget */
{
private:
  CellEditable () = delete;
  CellEditable (const CellEditable &) = delete;
  CellEditable (CellEditable &&) = delete;

  CellEditable &
  operator = (const CellEditable &) = delete;
  CellEditable &
  operator = (CellEditable &&) = delete;

protected:
  ~CellEditable () = default;

public:

  void
  editing_done () noexcept
  {
    ::GtkCellEditable *_peel_this = reinterpret_cast<::GtkCellEditable *> (this);
    gtk_cell_editable_editing_done (_peel_this);
  }

  void
  remove_widget () noexcept
  {
    ::GtkCellEditable *_peel_this = reinterpret_cast<::GtkCellEditable *> (this);
    gtk_cell_editable_remove_widget (_peel_this);
  }

  void
  start_editing (Gdk::Event *event) noexcept
  {
    ::GtkCellEditable *_peel_this = reinterpret_cast<::GtkCellEditable *> (this);
    ::GdkEvent *_peel_event = reinterpret_cast<::GdkEvent *> (event);
    gtk_cell_editable_start_editing (_peel_this, _peel_event);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_editing_done (Handler &&handler, bool after = false) noexcept
  {
    return Signal<CellEditable, void ()>::_peel_connect_by_name (this, "editing-done", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_editing_done (HandlerObject *object, void (HandlerObject::*handler_method) (CellEditable *), bool after = false) noexcept
  {
    return Signal<CellEditable, void ()>::_peel_connect_by_name (this, "editing-done", object, handler_method, after);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_remove_widget (Handler &&handler, bool after = false) noexcept
  {
    return Signal<CellEditable, void ()>::_peel_connect_by_name (this, "remove-widget", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_remove_widget (HandlerObject *object, void (HandlerObject::*handler_method) (CellEditable *), bool after = false) noexcept
  {
    return Signal<CellEditable, void ()>::_peel_connect_by_name (this, "remove-widget", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_editing_canceled ()
  {
    return peel::Property<bool> { "editing-canceled" };
  }

  template<typename DerivedClass>
  void
  parent_vfunc_editing_done () noexcept
  {
    ::GtkCellEditableIface *_peel_iface = reinterpret_cast<::GtkCellEditableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<CellEditable> ())->peek_parent ());
    ::GtkCellEditable *_peel_this = reinterpret_cast<::GtkCellEditable *> (this);
    _peel_iface->editing_done (_peel_this);
  }

  void
  default_vfunc_editing_done () noexcept
  {
    ::GtkCellEditableIface *_peel_iface = reinterpret_cast<::GtkCellEditableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<CellEditable> ()));
    ::GtkCellEditable *_peel_this = reinterpret_cast<::GtkCellEditable *> (this);
    _peel_iface->editing_done (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_remove_widget () noexcept
  {
    ::GtkCellEditableIface *_peel_iface = reinterpret_cast<::GtkCellEditableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<CellEditable> ())->peek_parent ());
    ::GtkCellEditable *_peel_this = reinterpret_cast<::GtkCellEditable *> (this);
    _peel_iface->remove_widget (_peel_this);
  }

  void
  default_vfunc_remove_widget () noexcept
  {
    ::GtkCellEditableIface *_peel_iface = reinterpret_cast<::GtkCellEditableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<CellEditable> ()));
    ::GtkCellEditable *_peel_this = reinterpret_cast<::GtkCellEditable *> (this);
    _peel_iface->remove_widget (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_start_editing (Gdk::Event *event) noexcept
  {
    ::GtkCellEditableIface *_peel_iface = reinterpret_cast<::GtkCellEditableIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<CellEditable> ())->peek_parent ());
    ::GtkCellEditable *_peel_this = reinterpret_cast<::GtkCellEditable *> (this);
    ::GdkEvent *_peel_event = reinterpret_cast<::GdkEvent *> (event);
    _peel_iface->start_editing (_peel_this, _peel_event);
  }

  void
  default_vfunc_start_editing (Gdk::Event *event) noexcept
  {
    ::GtkCellEditableIface *_peel_iface = reinterpret_cast<::GtkCellEditableIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<CellEditable> ()));
    ::GtkCellEditable *_peel_this = reinterpret_cast<::GtkCellEditable *> (this);
    ::GdkEvent *_peel_event = reinterpret_cast<::GdkEvent *> (event);
    _peel_iface->start_editing (_peel_this, _peel_event);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GtkCellEditableIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_editing_done ()
    {
      ::GtkCellEditableIface *klass = reinterpret_cast<::GtkCellEditableIface *> (this);
      klass->editing_done = +[] (::GtkCellEditable *cell_editable) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell_editable);
        _peel_this->DerivedClass::vfunc_editing_done ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_remove_widget ()
    {
      ::GtkCellEditableIface *klass = reinterpret_cast<::GtkCellEditableIface *> (this);
      klass->remove_widget = +[] (::GtkCellEditable *cell_editable) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell_editable);
        _peel_this->DerivedClass::vfunc_remove_widget ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_start_editing ()
    {
      ::GtkCellEditableIface *klass = reinterpret_cast<::GtkCellEditableIface *> (this);
      klass->start_editing = +[] (::GtkCellEditable *cell_editable, ::GdkEvent *event) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cell_editable);
        Gdk::Event *_peel_event = reinterpret_cast<Gdk::Event *> (event);
        _peel_this->DerivedClass::vfunc_start_editing (_peel_event);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GtkCellEditableIface),
                 "CellEditable::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GtkCellEditableIface),
                 "CellEditable::Iface align mismatch");
}; /* interface CellEditable */
static_assert (sizeof (CellEditable) == sizeof (Widget),
               "CellEditable size mismatch");
static_assert (alignof (CellEditable) == alignof (Widget),
               "CellEditable align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
