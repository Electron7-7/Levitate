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
class CustomSorter;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CustomSorter> ()
{
  return gtk_custom_sorter_get_type ();
}


namespace Gtk
{
class CustomSorter : public Sorter
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CustomSorter () = delete;
  CustomSorter (const CustomSorter &) = delete;
  CustomSorter (CustomSorter &&) = delete;
  CustomSorter &
  operator = (const CustomSorter &) = delete;
  CustomSorter &
  operator = (CustomSorter &&) = delete;
  ~CustomSorter () = delete;
public:

  template<typename CompareDataFunc>
  static peel::RefPtr<CustomSorter>
  create (CompareDataFunc &&sort_func) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_user_destroy;
    ::GCompareDataFunc _peel_sort_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_notified_callback (
      static_cast<CompareDataFunc &&> (sort_func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_sort_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return peel::internals::invoke_if_nonnull<int> (_peel_captured_sort_func) (a, b);
      },
      &_peel_user_data, &_peel_user_destroy, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    ::GtkCustomSorter *_peel_return = gtk_custom_sorter_new (_peel_sort_func, _peel_user_data, _peel_user_destroy);
    peel_assume (_peel_return);
    return peel::RefPtr<CustomSorter>::adopt_ref (reinterpret_cast<CustomSorter *> (_peel_return));
  }

  template<typename CompareDataFunc>
  void
  set_sort_func (CompareDataFunc &&sort_func) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_user_destroy;
    ::GtkCustomSorter *_peel_this = reinterpret_cast<::GtkCustomSorter *> (this);
    ::GCompareDataFunc _peel_sort_func = peel::internals::CallbackHelper<gint, gconstpointer, gconstpointer>::wrap_notified_callback (
      static_cast<CompareDataFunc &&> (sort_func),
      [] (gconstpointer a, gconstpointer b, gpointer user_data) -> gint
      {
        CompareDataFunc &_peel_captured_sort_func = *reinterpret_cast<typename std::remove_reference<CompareDataFunc>::type *> (user_data);
        return peel::internals::invoke_if_nonnull<int> (_peel_captured_sort_func) (a, b);
      },
      &_peel_user_data, &_peel_user_destroy, peel::internals::is_const_invocable<CompareDataFunc, void, const void *, const void *>::value);
    gtk_custom_sorter_set_sort_func (_peel_this, _peel_sort_func, _peel_user_data, _peel_user_destroy);
  }

  class Class : public Sorter::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkCustomSorterClass),
                 "CustomSorter::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkCustomSorterClass),
                 "CustomSorter::Class align mismatch");
}; /* class CustomSorter */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
