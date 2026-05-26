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
#include <peel/Gtk/ColumnView.h>
#include <peel/Gtk/ListItem.h>

peel_begin_header

namespace peel
{
namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gtk
{
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ColumnView::Cell> ()
{
  return gtk_column_view_cell_get_type ();
}


namespace Gtk
{
class ColumnView::Cell : public ListItem
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Cell () = delete;
  Cell (const Cell &) = delete;
  Cell (Cell &&) = delete;
  Cell &
  operator = (const Cell &) = delete;
  Cell &
  operator = (Cell &&) = delete;
  ~Cell () = delete;
public:

  Widget *
  get_child () noexcept
  {
    ::GtkColumnViewCell *_peel_this = reinterpret_cast<::GtkColumnViewCell *> (this);
    ::GtkWidget *_peel_return = gtk_column_view_cell_get_child (_peel_this);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_focusable () noexcept
  {
    ::GtkColumnViewCell *_peel_this = reinterpret_cast<::GtkColumnViewCell *> (this);
    gboolean _peel_return = gtk_column_view_cell_get_focusable (_peel_this);
    return !!_peel_return;
  }

  GObject::Object *
  get_item () noexcept
  {
    ::GtkColumnViewCell *_peel_this = reinterpret_cast<::GtkColumnViewCell *> (this);
    ::gpointer _peel_return = gtk_column_view_cell_get_item (_peel_this);
    return reinterpret_cast<GObject::Object *> (_peel_return);
  }

  unsigned
  get_position () noexcept
  {
    ::GtkColumnViewCell *_peel_this = reinterpret_cast<::GtkColumnViewCell *> (this);
    return gtk_column_view_cell_get_position (_peel_this);
  }

  bool
  get_selected () noexcept
  {
    ::GtkColumnViewCell *_peel_this = reinterpret_cast<::GtkColumnViewCell *> (this);
    gboolean _peel_return = gtk_column_view_cell_get_selected (_peel_this);
    return !!_peel_return;
  }

  void
  set_child (peel::FloatPtr<Widget> child) noexcept
  {
    ::GtkColumnViewCell *_peel_this = reinterpret_cast<::GtkColumnViewCell *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_column_view_cell_set_child (_peel_this, _peel_child);
  }

  void
  set_focusable (bool focusable) noexcept
  {
    ::GtkColumnViewCell *_peel_this = reinterpret_cast<::GtkColumnViewCell *> (this);
    gboolean _peel_focusable = static_cast<gboolean> (focusable);
    gtk_column_view_cell_set_focusable (_peel_this, _peel_focusable);
  }

  static peel::Property<Widget>
  prop_child ()
  {
    return peel::Property<Widget> { "child" };
  }

  static peel::Property<bool>
  prop_focusable ()
  {
    return peel::Property<bool> { "focusable" };
  }

  static peel::Property<GObject::Object>
  prop_item ()
  {
    return peel::Property<GObject::Object> { "item" };
  }

  static peel::Property<unsigned>
  prop_position ()
  {
    return peel::Property<unsigned> { "position" };
  }

  static peel::Property<bool>
  prop_selected ()
  {
    return peel::Property<bool> { "selected" };
  }

  class Class : public ListItem::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class ColumnView::Cell */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/Widget.h>
