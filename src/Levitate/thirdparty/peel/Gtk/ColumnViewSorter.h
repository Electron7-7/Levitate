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
#include <peel/Gtk/Sorter.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
enum class SortType : std::underlying_type<::GtkSortType>::type;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ColumnView::Sorter> ()
{
  return gtk_column_view_sorter_get_type ();
}


namespace Gtk
{
class ColumnView::Sorter : public Gtk::Sorter
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Sorter () = delete;
  Sorter (const Sorter &) = delete;
  Sorter (Sorter &&) = delete;
  Sorter &
  operator = (const Sorter &) = delete;
  Sorter &
  operator = (Sorter &&) = delete;
  ~Sorter () = delete;
public:

  unsigned
  get_n_sort_columns () noexcept
  {
    ::GtkColumnViewSorter *_peel_this = reinterpret_cast<::GtkColumnViewSorter *> (this);
    return gtk_column_view_sorter_get_n_sort_columns (_peel_this);
  }

  peel_arg_out (3) peel_nonnull_args (3)
  ColumnView::Column *
  get_nth_sort_column (unsigned position, SortType *sort_order) noexcept
  {
    ::GtkColumnViewSorter *_peel_this = reinterpret_cast<::GtkColumnViewSorter *> (this);
    ::GtkSortType *_peel_sort_order = reinterpret_cast<::GtkSortType *> (sort_order);
    ::GtkColumnViewColumn *_peel_return = gtk_column_view_sorter_get_nth_sort_column (_peel_this, position, _peel_sort_order);
    return reinterpret_cast<ColumnView::Column *> (_peel_return);
  }

  ColumnView::Column *
  get_primary_sort_column () noexcept
  {
    ::GtkColumnViewSorter *_peel_this = reinterpret_cast<::GtkColumnViewSorter *> (this);
    ::GtkColumnViewColumn *_peel_return = gtk_column_view_sorter_get_primary_sort_column (_peel_this);
    return reinterpret_cast<ColumnView::Column *> (_peel_return);
  }

  SortType
  get_primary_sort_order () noexcept
  {
    ::GtkColumnViewSorter *_peel_this = reinterpret_cast<::GtkColumnViewSorter *> (this);
    ::GtkSortType _peel_return = gtk_column_view_sorter_get_primary_sort_order (_peel_this);
    return static_cast<SortType> (_peel_return);
  }

  static peel::Property<ColumnView::Column>
  prop_primary_sort_column ()
  {
    return peel::Property<ColumnView::Column> { "primary-sort-column" };
  }

  static peel::Property<SortType>
  prop_primary_sort_order ()
  {
    return peel::Property<SortType> { "primary-sort-order" };
  }

  class Class : public Gtk::Sorter::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkColumnViewSorterClass),
                 "ColumnView::Sorter::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkColumnViewSorterClass),
                 "ColumnView::Sorter::Class align mismatch");
}; /* class ColumnView::Sorter */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
