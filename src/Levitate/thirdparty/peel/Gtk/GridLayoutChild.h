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
#include <peel/Gtk/LayoutChild.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class GridLayoutChild;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::GridLayoutChild> ()
{
  return gtk_grid_layout_child_get_type ();
}


namespace Gtk
{
class GridLayoutChild : public LayoutChild
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  GridLayoutChild () = delete;
  GridLayoutChild (const GridLayoutChild &) = delete;
  GridLayoutChild (GridLayoutChild &&) = delete;
  GridLayoutChild &
  operator = (const GridLayoutChild &) = delete;
  GridLayoutChild &
  operator = (GridLayoutChild &&) = delete;
  ~GridLayoutChild () = delete;
public:

  int
  get_column () noexcept
  {
    ::GtkGridLayoutChild *_peel_this = reinterpret_cast<::GtkGridLayoutChild *> (this);
    return gtk_grid_layout_child_get_column (_peel_this);
  }

  int
  get_column_span () noexcept
  {
    ::GtkGridLayoutChild *_peel_this = reinterpret_cast<::GtkGridLayoutChild *> (this);
    return gtk_grid_layout_child_get_column_span (_peel_this);
  }

  int
  get_row () noexcept
  {
    ::GtkGridLayoutChild *_peel_this = reinterpret_cast<::GtkGridLayoutChild *> (this);
    return gtk_grid_layout_child_get_row (_peel_this);
  }

  int
  get_row_span () noexcept
  {
    ::GtkGridLayoutChild *_peel_this = reinterpret_cast<::GtkGridLayoutChild *> (this);
    return gtk_grid_layout_child_get_row_span (_peel_this);
  }

  void
  set_column (int column) noexcept
  {
    ::GtkGridLayoutChild *_peel_this = reinterpret_cast<::GtkGridLayoutChild *> (this);
    gtk_grid_layout_child_set_column (_peel_this, column);
  }

  void
  set_column_span (int span) noexcept
  {
    ::GtkGridLayoutChild *_peel_this = reinterpret_cast<::GtkGridLayoutChild *> (this);
    gtk_grid_layout_child_set_column_span (_peel_this, span);
  }

  void
  set_row (int row) noexcept
  {
    ::GtkGridLayoutChild *_peel_this = reinterpret_cast<::GtkGridLayoutChild *> (this);
    gtk_grid_layout_child_set_row (_peel_this, row);
  }

  void
  set_row_span (int span) noexcept
  {
    ::GtkGridLayoutChild *_peel_this = reinterpret_cast<::GtkGridLayoutChild *> (this);
    gtk_grid_layout_child_set_row_span (_peel_this, span);
  }

  static peel::Property<int>
  prop_column ()
  {
    return peel::Property<int> { "column" };
  }

  static peel::Property<int>
  prop_column_span ()
  {
    return peel::Property<int> { "column-span" };
  }

  static peel::Property<int>
  prop_row ()
  {
    return peel::Property<int> { "row" };
  }

  static peel::Property<int>
  prop_row_span ()
  {
    return peel::Property<int> { "row-span" };
  }

  class Class : public LayoutChild::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkGridLayoutChildClass),
                 "GridLayoutChild::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkGridLayoutChildClass),
                 "GridLayoutChild::Class align mismatch");
}; /* class GridLayoutChild */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
