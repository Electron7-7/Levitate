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
#include <peel/Gtk/Sorter.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class Sorter;
class TreeListRowSorter;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TreeListRowSorter> ()
{
  return gtk_tree_list_row_sorter_get_type ();
}


namespace Gtk
{
class TreeListRowSorter : public Sorter
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TreeListRowSorter () = delete;
  TreeListRowSorter (const TreeListRowSorter &) = delete;
  TreeListRowSorter (TreeListRowSorter &&) = delete;
  TreeListRowSorter &
  operator = (const TreeListRowSorter &) = delete;
  TreeListRowSorter &
  operator = (TreeListRowSorter &&) = delete;
  ~TreeListRowSorter () = delete;
public:

  static peel::RefPtr<TreeListRowSorter>
  create (peel::RefPtr<Sorter> sorter) noexcept
  {
    ::GtkSorter *_peel_sorter = reinterpret_cast<::GtkSorter *> (std::move (sorter).release_ref ());
    ::GtkTreeListRowSorter *_peel_return = gtk_tree_list_row_sorter_new (_peel_sorter);
    peel_assume (_peel_return);
    return peel::RefPtr<TreeListRowSorter>::adopt_ref (reinterpret_cast<TreeListRowSorter *> (_peel_return));
  }

  Sorter *
  get_sorter () noexcept
  {
    ::GtkTreeListRowSorter *_peel_this = reinterpret_cast<::GtkTreeListRowSorter *> (this);
    ::GtkSorter *_peel_return = gtk_tree_list_row_sorter_get_sorter (_peel_this);
    return reinterpret_cast<Sorter *> (_peel_return);
  }

  void
  set_sorter (Sorter *sorter) noexcept
  {
    ::GtkTreeListRowSorter *_peel_this = reinterpret_cast<::GtkTreeListRowSorter *> (this);
    ::GtkSorter *_peel_sorter = reinterpret_cast<::GtkSorter *> (sorter);
    gtk_tree_list_row_sorter_set_sorter (_peel_this, _peel_sorter);
  }

  static peel::Property<Sorter>
  prop_sorter ()
  {
    return peel::Property<Sorter> { "sorter" };
  }

  class Class : public Sorter::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkTreeListRowSorterClass),
                 "TreeListRowSorter::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkTreeListRowSorterClass),
                 "TreeListRowSorter::Class align mismatch");
}; /* class TreeListRowSorter */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
