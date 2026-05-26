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
class MultiSorter;
class Sorter;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::MultiSorter> ()
{
  return gtk_multi_sorter_get_type ();
}


namespace Gtk
{
class MultiSorter : public Sorter
/* non-derivable */
/* implements Gio::ListModel, Buildable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  MultiSorter () = delete;
  MultiSorter (const MultiSorter &) = delete;
  MultiSorter (MultiSorter &&) = delete;
  MultiSorter &
  operator = (const MultiSorter &) = delete;
  MultiSorter &
  operator = (MultiSorter &&) = delete;
  ~MultiSorter () = delete;
public:

  static peel::RefPtr<MultiSorter>
  create () noexcept
  {
    ::GtkMultiSorter *_peel_return = gtk_multi_sorter_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<MultiSorter>::adopt_ref (reinterpret_cast<MultiSorter *> (_peel_return));
  }

  void
  append (peel::RefPtr<Sorter> sorter) noexcept
  {
    ::GtkMultiSorter *_peel_this = reinterpret_cast<::GtkMultiSorter *> (this);
    ::GtkSorter *_peel_sorter = reinterpret_cast<::GtkSorter *> (std::move (sorter).release_ref ());
    gtk_multi_sorter_append (_peel_this, _peel_sorter);
  }

  void
  remove (unsigned position) noexcept
  {
    ::GtkMultiSorter *_peel_this = reinterpret_cast<::GtkMultiSorter *> (this);
    gtk_multi_sorter_remove (_peel_this, position);
  }

  static peel::Property<GObject::Type>
  prop_item_type ()
  {
    return peel::Property<GObject::Type> { "item-type" };
  }

  static peel::Property<unsigned>
  prop_n_items ()
  {
    return peel::Property<unsigned> { "n-items" };
  }

  class Class : public Sorter::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkMultiSorterClass),
                 "MultiSorter::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkMultiSorterClass),
                 "MultiSorter::Class align mismatch");
}; /* class MultiSorter */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
