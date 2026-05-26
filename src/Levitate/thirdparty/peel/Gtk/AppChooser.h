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
#include <peel/GObject/TypeInterface.h>
#include <peel/Gtk/Widget.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class /* interface */ AppInfo;
} /* namespace Gio */

namespace Gtk
{
class /* interface */ AppChooser;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::AppChooser> ()
{
  return gtk_app_chooser_get_type ();
}


namespace Gtk
{
class /* interface */ AppChooser : public Widget
/* requires Widget */
{
private:
  AppChooser () = delete;
  AppChooser (const AppChooser &) = delete;
  AppChooser (AppChooser &&) = delete;

  AppChooser &
  operator = (const AppChooser &) = delete;
  AppChooser &
  operator = (AppChooser &&) = delete;

protected:
  ~AppChooser () = default;

public:

  peel::RefPtr<Gio::AppInfo>
  get_app_info () noexcept
  {
    ::GtkAppChooser *_peel_this = reinterpret_cast<::GtkAppChooser *> (this);
    ::GAppInfo *_peel_return = gtk_app_chooser_get_app_info (_peel_this);
    return peel::RefPtr<Gio::AppInfo>::adopt_ref (reinterpret_cast<Gio::AppInfo *> (_peel_return));
  }

  peel::String
  get_content_type () noexcept
  {
    ::GtkAppChooser *_peel_this = reinterpret_cast<::GtkAppChooser *> (this);
    char *_peel_return = gtk_app_chooser_get_content_type (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  void
  refresh () noexcept
  {
    ::GtkAppChooser *_peel_this = reinterpret_cast<::GtkAppChooser *> (this);
    gtk_app_chooser_refresh (_peel_this);
  }

  static peel::Property<const char *>
  prop_content_type ()
  {
    return peel::Property<const char *> { "content-type" };
  }
}; /* interface AppChooser */
static_assert (sizeof (AppChooser) == sizeof (Widget),
               "AppChooser size mismatch");
static_assert (alignof (AppChooser) == alignof (Widget),
               "AppChooser align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gio/AppInfo.h>
