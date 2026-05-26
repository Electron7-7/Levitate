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
enum class BaselinePosition : std::underlying_type<::GtkBaselinePosition>::type;
class Grid;
enum class PositionType : std::underlying_type<::GtkPositionType>::type;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Grid> ()
{
  return gtk_grid_get_type ();
}


namespace Gtk
{
class Grid : public Widget
/* implements Accessible, Buildable, Constraint::Target, Orientable */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Grid () = delete;
  Grid (const Grid &) = delete;
  Grid (Grid &&) = delete;
  Grid &
  operator = (const Grid &) = delete;
  Grid &
  operator = (Grid &&) = delete;
protected:
  ~Grid () = default;
public:

  static peel::FloatPtr<Grid>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_grid_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<Grid> (reinterpret_cast<Grid *> (_peel_return));
  }

  void
  attach (peel::FloatPtr<Widget> child, int column, int row, int width, int height) noexcept
  {
    ::GtkGrid *_peel_this = reinterpret_cast<::GtkGrid *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    gtk_grid_attach (_peel_this, _peel_child, column, row, width, height);
  }

  void
  attach_next_to (peel::FloatPtr<Widget> child, Widget *sibling, PositionType side, int width, int height) noexcept
  {
    ::GtkGrid *_peel_this = reinterpret_cast<::GtkGrid *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (std::move (child).release_floating_ptr ());
    ::GtkWidget *_peel_sibling = reinterpret_cast<::GtkWidget *> (sibling);
    ::GtkPositionType _peel_side = static_cast<::GtkPositionType> (side);
    gtk_grid_attach_next_to (_peel_this, _peel_child, _peel_sibling, _peel_side, width, height);
  }

  int
  get_baseline_row () noexcept
  {
    ::GtkGrid *_peel_this = reinterpret_cast<::GtkGrid *> (this);
    return gtk_grid_get_baseline_row (_peel_this);
  }

  Widget *
  get_child_at (int column, int row) noexcept
  {
    ::GtkGrid *_peel_this = reinterpret_cast<::GtkGrid *> (this);
    ::GtkWidget *_peel_return = gtk_grid_get_child_at (_peel_this, column, row);
    return reinterpret_cast<Widget *> (_peel_return);
  }

  bool
  get_column_homogeneous () noexcept
  {
    ::GtkGrid *_peel_this = reinterpret_cast<::GtkGrid *> (this);
    gboolean _peel_return = gtk_grid_get_column_homogeneous (_peel_this);
    return !!_peel_return;
  }

  unsigned
  get_column_spacing () noexcept
  {
    ::GtkGrid *_peel_this = reinterpret_cast<::GtkGrid *> (this);
    return gtk_grid_get_column_spacing (_peel_this);
  }

  BaselinePosition
  get_row_baseline_position (int row) noexcept
  {
    ::GtkGrid *_peel_this = reinterpret_cast<::GtkGrid *> (this);
    ::GtkBaselinePosition _peel_return = gtk_grid_get_row_baseline_position (_peel_this, row);
    return static_cast<BaselinePosition> (_peel_return);
  }

  bool
  get_row_homogeneous () noexcept
  {
    ::GtkGrid *_peel_this = reinterpret_cast<::GtkGrid *> (this);
    gboolean _peel_return = gtk_grid_get_row_homogeneous (_peel_this);
    return !!_peel_return;
  }

  unsigned
  get_row_spacing () noexcept
  {
    ::GtkGrid *_peel_this = reinterpret_cast<::GtkGrid *> (this);
    return gtk_grid_get_row_spacing (_peel_this);
  }

  void
  insert_column (int position) noexcept
  {
    ::GtkGrid *_peel_this = reinterpret_cast<::GtkGrid *> (this);
    gtk_grid_insert_column (_peel_this, position);
  }

  peel_nonnull_args (2)
  void
  insert_next_to (Widget *sibling, PositionType side) noexcept
  {
    ::GtkGrid *_peel_this = reinterpret_cast<::GtkGrid *> (this);
    ::GtkWidget *_peel_sibling = reinterpret_cast<::GtkWidget *> (sibling);
    ::GtkPositionType _peel_side = static_cast<::GtkPositionType> (side);
    gtk_grid_insert_next_to (_peel_this, _peel_sibling, _peel_side);
  }

  void
  insert_row (int position) noexcept
  {
    ::GtkGrid *_peel_this = reinterpret_cast<::GtkGrid *> (this);
    gtk_grid_insert_row (_peel_this, position);
  }

  peel_arg_out (3) peel_arg_out (4) peel_arg_out (5) peel_arg_out (6) peel_nonnull_args (2)
  void
  query_child (Widget *child, int *column, int *row, int *width, int *height) noexcept
  {
    ::GtkGrid *_peel_this = reinterpret_cast<::GtkGrid *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_grid_query_child (_peel_this, _peel_child, column, row, width, height);
  }

  peel_nonnull_args (2)
  void
  remove (Widget *child) noexcept
  {
    ::GtkGrid *_peel_this = reinterpret_cast<::GtkGrid *> (this);
    ::GtkWidget *_peel_child = reinterpret_cast<::GtkWidget *> (child);
    gtk_grid_remove (_peel_this, _peel_child);
  }

  void
  remove_column (int position) noexcept
  {
    ::GtkGrid *_peel_this = reinterpret_cast<::GtkGrid *> (this);
    gtk_grid_remove_column (_peel_this, position);
  }

  void
  remove_row (int position) noexcept
  {
    ::GtkGrid *_peel_this = reinterpret_cast<::GtkGrid *> (this);
    gtk_grid_remove_row (_peel_this, position);
  }

  void
  set_baseline_row (int row) noexcept
  {
    ::GtkGrid *_peel_this = reinterpret_cast<::GtkGrid *> (this);
    gtk_grid_set_baseline_row (_peel_this, row);
  }

  void
  set_column_homogeneous (bool homogeneous) noexcept
  {
    ::GtkGrid *_peel_this = reinterpret_cast<::GtkGrid *> (this);
    gboolean _peel_homogeneous = static_cast<gboolean> (homogeneous);
    gtk_grid_set_column_homogeneous (_peel_this, _peel_homogeneous);
  }

  void
  set_column_spacing (unsigned spacing) noexcept
  {
    ::GtkGrid *_peel_this = reinterpret_cast<::GtkGrid *> (this);
    gtk_grid_set_column_spacing (_peel_this, spacing);
  }

  void
  set_row_baseline_position (int row, BaselinePosition pos) noexcept
  {
    ::GtkGrid *_peel_this = reinterpret_cast<::GtkGrid *> (this);
    ::GtkBaselinePosition _peel_pos = static_cast<::GtkBaselinePosition> (pos);
    gtk_grid_set_row_baseline_position (_peel_this, row, _peel_pos);
  }

  void
  set_row_homogeneous (bool homogeneous) noexcept
  {
    ::GtkGrid *_peel_this = reinterpret_cast<::GtkGrid *> (this);
    gboolean _peel_homogeneous = static_cast<gboolean> (homogeneous);
    gtk_grid_set_row_homogeneous (_peel_this, _peel_homogeneous);
  }

  void
  set_row_spacing (unsigned spacing) noexcept
  {
    ::GtkGrid *_peel_this = reinterpret_cast<::GtkGrid *> (this);
    gtk_grid_set_row_spacing (_peel_this, spacing);
  }

  static peel::Property<int>
  prop_baseline_row ()
  {
    return peel::Property<int> { "baseline-row" };
  }

  static peel::Property<bool>
  prop_column_homogeneous ()
  {
    return peel::Property<bool> { "column-homogeneous" };
  }

  static peel::Property<int>
  prop_column_spacing ()
  {
    return peel::Property<int> { "column-spacing" };
  }

  static peel::Property<bool>
  prop_row_homogeneous ()
  {
    return peel::Property<bool> { "row-homogeneous" };
  }

  static peel::Property<int>
  prop_row_spacing ()
  {
    return peel::Property<int> { "row-spacing" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Grid> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkGridClass) - sizeof (Widget::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GtkGridClass),
                 "Grid::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkGridClass),
                 "Grid::Class align mismatch");
}; /* class Grid */

static_assert (sizeof (Grid) == sizeof (::GtkGrid),
               "Grid size mismatch");
static_assert (alignof (Grid) == alignof (::GtkGrid),
               "Grid align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
