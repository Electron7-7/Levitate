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
#include <peel/Gtk/Actionable.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class ListBoxRow;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ListBoxRow> ()
{
  return gtk_list_box_row_get_type ();
}


namespace Gtk
{
class ListBoxRow : public Actionable
/* extends Widget */
/* implements Accessible, Actionable, Buildable, Constraint::Target */
{
private:
  using Actionable::get_default_direction;
  using Actionable::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ListBoxRow () = delete;
  ListBoxRow (const ListBoxRow &) = delete;
  ListBoxRow (ListBoxRow &&) = delete;
  ListBoxRow &
  operator = (const ListBoxRow &) = delete;
  ListBoxRow &
  operator = (ListBoxRow &&) = delete;
protected:
  ~ListBoxRow () = default;
public:

  static peel::FloatPtr<ListBoxRow>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_list_box_row_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<ListBoxRow> (reinterpret_cast<ListBoxRow *> (_peel_return));
  }

  void
  changed () noexcept
  {
    ::GtkListBoxRow *_peel_this = reinterpret_cast<::GtkListBoxRow *> (this);
    gtk_list_box_row_changed (_peel_this);
  }

  bool
  get_activatable () noexcept
  {
    ::GtkListBoxRow *_peel_this = reinterpret_cast<::GtkListBoxRow *> (this);
    gboolean _peel_return = gtk_list_box_row_get_activatable (_peel_this);
    return !!_peel_return;
  }

  Widget *
  get_child () noexcept
  {
    ::GtkListBoxRow *_peel_this = reinterpret_cast<::GtkListBoxRow *> (this);
    ::GtkWidget *_peel_return = gtk_list_box_row_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  Widget *
  get_header () noexcept
  {
    ::GtkListBoxRow *_peel_this = reinterpret_cast<::GtkListBoxRow *> (this);
    ::GtkWidget *_peel_return = gtk_list_box_row_get_header (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  int
  get_index () noexcept
  {
    ::GtkListBoxRow *_peel_this = reinterpret_cast<::GtkListBoxRow *> (this);
    return gtk_list_box_row_get_index (_peel_this);
  }

  bool
  get_selectable () noexcept
  {
    ::GtkListBoxRow *_peel_this = reinterpret_cast<::GtkListBoxRow *> (this);
    gboolean _peel_return = gtk_list_box_row_get_selectable (_peel_this);
    return !!_peel_return;
  }

  bool
  is_selected () noexcept
  {
    ::GtkListBoxRow *_peel_this = reinterpret_cast<::GtkListBoxRow *> (this);
    gboolean _peel_return = gtk_list_box_row_is_selected (_peel_this);
    return !!_peel_return;
  }

  void
  set_activatable (bool activatable) noexcept
  {
    ::GtkListBoxRow *_peel_this = reinterpret_cast<::GtkListBoxRow *> (this);
    gboolean _peel_activatable = static_cast<gboolean> (activatable);
    gtk_list_box_row_set_activatable (_peel_this, _peel_activatable);
  }

  void
  set_child (Widget *child) noexcept
  {
    ::GtkListBoxRow *_peel_this = reinterpret_cast<::GtkListBoxRow *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_list_box_row_set_child (_peel_this, _peel_child);
  }

  void
  set_header (peel::FloatPtr<Widget> header) noexcept
  {
    ::GtkListBoxRow *_peel_this = reinterpret_cast<::GtkListBoxRow *> (this);
    ::GtkWidget *_peel_header = reinterpret_cast<::GtkWidget *> (std::move (header).release_floating_ptr ());
    gtk_list_box_row_set_header (_peel_this, _peel_header);
  }

  void
  set_selectable (bool selectable) noexcept
  {
    ::GtkListBoxRow *_peel_this = reinterpret_cast<::GtkListBoxRow *> (this);
    gboolean _peel_selectable = static_cast<gboolean> (selectable);
    gtk_list_box_row_set_selectable (_peel_this, _peel_selectable);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_activate (Handler &&handler, bool after = false) noexcept
  {
    return Signal<ListBoxRow, void ()>::_peel_connect_by_name (this, "activate", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_activate (HandlerObject *object, void (HandlerObject::*handler_method) (ListBoxRow *), bool after = false) noexcept
  {
    return Signal<ListBoxRow, void ()>::_peel_connect_by_name (this, "activate", object, handler_method, after);
  }

  void
  emit_activate () noexcept
  {
    return Signal<ListBoxRow, void ()>::_peel_emit_by_name (this, "activate");
  }

  static peel::Property<bool>
  prop_activatable ()
  {
    return peel::Property<bool> { "activatable" };
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<bool>
  prop_selectable ()
  {
    return peel::Property<bool> { "selectable" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<ListBoxRow> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_activate () noexcept
  {
    ::GtkListBoxRowClass *_peel_class = reinterpret_cast<::GtkListBoxRowClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkListBoxRow *_peel_this = reinterpret_cast<::GtkListBoxRow *> (this);
    _peel_class->activate (_peel_this);
  }

public:
  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkListBoxRowClass) - sizeof (Widget::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_activate ()
    {
      ::GtkListBoxRowClass *klass = reinterpret_cast<::GtkListBoxRowClass *> (this);
      klass->activate = +[] (::GtkListBoxRow *row) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (row);
        _peel_this->DerivedClass::vfunc_activate ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkListBoxRowClass),
                 "ListBoxRow::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkListBoxRowClass),
                 "ListBoxRow::Class align mismatch");
}; /* class ListBoxRow */

static_assert (sizeof (ListBoxRow) == sizeof (::GtkListBoxRow),
               "ListBoxRow size mismatch");
static_assert (alignof (ListBoxRow) == alignof (::GtkListBoxRow),
               "ListBoxRow align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Widget.h>
