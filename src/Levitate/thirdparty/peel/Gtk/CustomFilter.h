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
namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gtk
{
class CustomFilter;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CustomFilter> ()
{
  return gtk_custom_filter_get_type ();
}


namespace Gtk
{
class CustomFilter : public Filter
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CustomFilter () = delete;
  CustomFilter (const CustomFilter &) = delete;
  CustomFilter (CustomFilter &&) = delete;
  CustomFilter &
  operator = (const CustomFilter &) = delete;
  CustomFilter &
  operator = (CustomFilter &&) = delete;
  ~CustomFilter () = delete;
public:

  template<typename CustomFilterFunc>
  static peel::RefPtr<CustomFilter>
  create (CustomFilterFunc &&match_func) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_user_destroy;
    ::GtkCustomFilterFunc _peel_match_func = peel::internals::CallbackHelper<gboolean, ::gpointer>::wrap_notified_callback (
      static_cast<CustomFilterFunc &&> (match_func),
      [] (::gpointer item, gpointer user_data) -> gboolean
      {
        CustomFilterFunc &_peel_captured_match_func = *reinterpret_cast<typename std::remove_reference<CustomFilterFunc>::type *> (user_data);
        GObject::Object *_peel_item = reinterpret_cast<GObject::Object *> (item);
        bool _peel_return = peel::internals::invoke_if_nonnull<bool> (_peel_captured_match_func) (_peel_item);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, &_peel_user_destroy, peel::internals::is_const_invocable<CustomFilterFunc, void, GObject::Object *>::value);
    ::GtkCustomFilter *_peel_return = gtk_custom_filter_new (_peel_match_func, _peel_user_data, _peel_user_destroy);
    peel_assume (_peel_return);
    return peel::RefPtr<CustomFilter>::adopt_ref (reinterpret_cast<CustomFilter *> (_peel_return));
  }

  template<typename CustomFilterFunc>
  void
  set_filter_func (CustomFilterFunc &&match_func) noexcept
  {
    gpointer _peel_user_data;
    ::GDestroyNotify _peel_user_destroy;
    ::GtkCustomFilter *_peel_this = reinterpret_cast<::GtkCustomFilter *> (this);
    ::GtkCustomFilterFunc _peel_match_func = peel::internals::CallbackHelper<gboolean, ::gpointer>::wrap_notified_callback (
      static_cast<CustomFilterFunc &&> (match_func),
      [] (::gpointer item, gpointer user_data) -> gboolean
      {
        CustomFilterFunc &_peel_captured_match_func = *reinterpret_cast<typename std::remove_reference<CustomFilterFunc>::type *> (user_data);
        GObject::Object *_peel_item = reinterpret_cast<GObject::Object *> (item);
        bool _peel_return = peel::internals::invoke_if_nonnull<bool> (_peel_captured_match_func) (_peel_item);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_user_data, &_peel_user_destroy, peel::internals::is_const_invocable<CustomFilterFunc, void, GObject::Object *>::value);
    gtk_custom_filter_set_filter_func (_peel_this, _peel_match_func, _peel_user_data, _peel_user_destroy);
  }

  class Class : public Filter::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkCustomFilterClass),
                 "CustomFilter::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkCustomFilterClass),
                 "CustomFilter::Class align mismatch");
}; /* class CustomFilter */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
