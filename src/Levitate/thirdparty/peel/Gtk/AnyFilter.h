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
#include <peel/Gtk/MultiFilter.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
class AnyFilter;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::AnyFilter> ()
{
  return gtk_any_filter_get_type ();
}


namespace Gtk
{
class AnyFilter : public MultiFilter
/* non-derivable */
/* implements Gio::ListModel, Buildable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  AnyFilter () = delete;
  AnyFilter (const AnyFilter &) = delete;
  AnyFilter (AnyFilter &&) = delete;
  AnyFilter &
  operator = (const AnyFilter &) = delete;
  AnyFilter &
  operator = (AnyFilter &&) = delete;
  ~AnyFilter () = delete;
public:

  static peel::RefPtr<AnyFilter>
  create () noexcept
  {
    ::GtkAnyFilter *_peel_return = gtk_any_filter_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<AnyFilter>::adopt_ref (reinterpret_cast<AnyFilter *> (_peel_return));
  }

  class Class : public MultiFilter::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class AnyFilter */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
