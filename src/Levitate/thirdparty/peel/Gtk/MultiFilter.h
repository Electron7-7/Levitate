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
#include <peel/Gtk/Filter.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class Filter;
class MultiFilter;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::MultiFilter> ()
{
  return gtk_multi_filter_get_type ();
}


namespace Gtk
{
class MultiFilter : public Filter
/* non-derivable */
/* implements Gio::ListModel, Buildable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  MultiFilter () = delete;
  MultiFilter (const MultiFilter &) = delete;
  MultiFilter (MultiFilter &&) = delete;
  MultiFilter &
  operator = (const MultiFilter &) = delete;
  MultiFilter &
  operator = (MultiFilter &&) = delete;
  ~MultiFilter () = delete;
public:

  void
  append (peel::RefPtr<Filter> filter) noexcept
  {
    ::GtkMultiFilter *_peel_this = reinterpret_cast<::GtkMultiFilter *> (this);
    ::GtkFilter *_peel_filter = reinterpret_cast<::GtkFilter *> (std::move (filter).release_ref ());
    gtk_multi_filter_append (_peel_this, _peel_filter);
  }

  void
  remove (unsigned position) noexcept
  {
    ::GtkMultiFilter *_peel_this = reinterpret_cast<::GtkMultiFilter *> (this);
    gtk_multi_filter_remove (_peel_this, position);
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

  class Class : public Filter::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class MultiFilter */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
