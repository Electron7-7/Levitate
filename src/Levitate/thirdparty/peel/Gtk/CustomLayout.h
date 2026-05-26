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
class CustomLayout;
enum class Orientation : std::underlying_type<::GtkOrientation>::type;
enum class SizeRequestMode : std::underlying_type<::GtkSizeRequestMode>::type;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CustomLayout> ()
{
  return gtk_custom_layout_get_type ();
}


namespace Gtk
{
class CustomLayout : public LayoutManager
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CustomLayout () = delete;
  CustomLayout (const CustomLayout &) = delete;
  CustomLayout (CustomLayout &&) = delete;
  CustomLayout &
  operator = (const CustomLayout &) = delete;
  CustomLayout &
  operator = (CustomLayout &&) = delete;
  ~CustomLayout () = delete;
public:

  static peel::RefPtr<CustomLayout>
  create (::GtkCustomRequestModeFunc request_mode, ::GtkCustomMeasureFunc measure, ::GtkCustomAllocateFunc allocate) noexcept
  {
    ::GtkLayoutManager *_peel_return = gtk_custom_layout_new (request_mode, measure, allocate);
    peel_assume (_peel_return);
    return peel::RefPtr<CustomLayout>::adopt_ref (reinterpret_cast<CustomLayout *> (_peel_return));
  }

  class Class : public LayoutManager::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkCustomLayoutClass),
                 "CustomLayout::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkCustomLayoutClass),
                 "CustomLayout::Class align mismatch");
}; /* class CustomLayout */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
