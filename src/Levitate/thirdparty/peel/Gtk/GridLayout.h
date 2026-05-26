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
#include <peel/Gtk/LayoutManager.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
enum class BaselinePosition : std::underlying_type<::GtkBaselinePosition>::type;
class GridLayout;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::GridLayout> ()
{
  return gtk_grid_layout_get_type ();
}


namespace Gtk
{
class GridLayout : public LayoutManager
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  GridLayout () = delete;
  GridLayout (const GridLayout &) = delete;
  GridLayout (GridLayout &&) = delete;
  GridLayout &
  operator = (const GridLayout &) = delete;
  GridLayout &
  operator = (GridLayout &&) = delete;
  ~GridLayout () = delete;
public:

  static peel::RefPtr<GridLayout>
  create () noexcept
  {
    ::GtkLayoutManager *_peel_return = gtk_grid_layout_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<GridLayout>::adopt_ref (reinterpret_cast<GridLayout *> (_peel_return));
  }

  int
  get_baseline_row () noexcept
  {
    ::GtkGridLayout *_peel_this = reinterpret_cast<::GtkGridLayout *> (this);
    return gtk_grid_layout_get_baseline_row (_peel_this);
  }

  bool
  get_column_homogeneous () noexcept
  {
    ::GtkGridLayout *_peel_this = reinterpret_cast<::GtkGridLayout *> (this);
    gboolean _peel_return = gtk_grid_layout_get_column_homogeneous (_peel_this);
    return !!_peel_return;
  }

  unsigned
  get_column_spacing () noexcept
  {
    ::GtkGridLayout *_peel_this = reinterpret_cast<::GtkGridLayout *> (this);
    return gtk_grid_layout_get_column_spacing (_peel_this);
  }

  BaselinePosition
  get_row_baseline_position (int row) noexcept
  {
    ::GtkGridLayout *_peel_this = reinterpret_cast<::GtkGridLayout *> (this);
    ::GtkBaselinePosition _peel_return = gtk_grid_layout_get_row_baseline_position (_peel_this, row);
    return static_cast<BaselinePosition> (_peel_return);
  }

  bool
  get_row_homogeneous () noexcept
  {
    ::GtkGridLayout *_peel_this = reinterpret_cast<::GtkGridLayout *> (this);
    gboolean _peel_return = gtk_grid_layout_get_row_homogeneous (_peel_this);
    return !!_peel_return;
  }

  unsigned
  get_row_spacing () noexcept
  {
    ::GtkGridLayout *_peel_this = reinterpret_cast<::GtkGridLayout *> (this);
    return gtk_grid_layout_get_row_spacing (_peel_this);
  }

  void
  set_baseline_row (int row) noexcept
  {
    ::GtkGridLayout *_peel_this = reinterpret_cast<::GtkGridLayout *> (this);
    gtk_grid_layout_set_baseline_row (_peel_this, row);
  }

  void
  set_column_homogeneous (bool homogeneous) noexcept
  {
    ::GtkGridLayout *_peel_this = reinterpret_cast<::GtkGridLayout *> (this);
    gboolean _peel_homogeneous = static_cast<gboolean> (homogeneous);
    gtk_grid_layout_set_column_homogeneous (_peel_this, _peel_homogeneous);
  }

  void
  set_column_spacing (unsigned spacing) noexcept
  {
    ::GtkGridLayout *_peel_this = reinterpret_cast<::GtkGridLayout *> (this);
    gtk_grid_layout_set_column_spacing (_peel_this, spacing);
  }

  void
  set_row_baseline_position (int row, BaselinePosition pos) noexcept
  {
    ::GtkGridLayout *_peel_this = reinterpret_cast<::GtkGridLayout *> (this);
    ::GtkBaselinePosition _peel_pos = static_cast<::GtkBaselinePosition> (pos);
    gtk_grid_layout_set_row_baseline_position (_peel_this, row, _peel_pos);
  }

  void
  set_row_homogeneous (bool homogeneous) noexcept
  {
    ::GtkGridLayout *_peel_this = reinterpret_cast<::GtkGridLayout *> (this);
    gboolean _peel_homogeneous = static_cast<gboolean> (homogeneous);
    gtk_grid_layout_set_row_homogeneous (_peel_this, _peel_homogeneous);
  }

  void
  set_row_spacing (unsigned spacing) noexcept
  {
    ::GtkGridLayout *_peel_this = reinterpret_cast<::GtkGridLayout *> (this);
    gtk_grid_layout_set_row_spacing (_peel_this, spacing);
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

  class Class : public LayoutManager::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkGridLayoutClass),
                 "GridLayout::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkGridLayoutClass),
                 "GridLayout::Class align mismatch");
}; /* class GridLayout */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
