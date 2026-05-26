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
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class Display;
} /* namespace Gdk */

namespace Gio
{
class /* interface */ Icon;
} /* namespace Gio */

namespace Gtk
{
enum class IconLookupFlags : std::underlying_type<::GtkIconLookupFlags>::type;
class IconPaintable;
class IconTheme;
enum class TextDirection : std::underlying_type<::GtkTextDirection>::type;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::IconTheme> ()
{
  return gtk_icon_theme_get_type ();
}


namespace Gtk
{
class IconTheme : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  IconTheme () = delete;
  IconTheme (const IconTheme &) = delete;
  IconTheme (IconTheme &&) = delete;
  IconTheme &
  operator = (const IconTheme &) = delete;
  IconTheme &
  operator = (IconTheme &&) = delete;
  ~IconTheme () = delete;
public:
  enum class Error : std::underlying_type<::GtkIconThemeError>::type;

  static peel::RefPtr<IconTheme>
  create () noexcept
  {
    ::GtkIconTheme *_peel_return = gtk_icon_theme_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<IconTheme>::adopt_ref (reinterpret_cast<IconTheme *> (_peel_return));
  }

  peel_nonnull_args (1) peel_returns_nonnull
  static IconTheme *
  get_for_display (Gdk::Display *display) noexcept
  {
    ::GdkDisplay *_peel_display = reinterpret_cast<::GdkDisplay *> (display);
    ::GtkIconTheme *_peel_return = gtk_icon_theme_get_for_display (_peel_display);
    peel_assume (_peel_return);
    return reinterpret_cast<IconTheme *> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  add_resource_path (const char *path) noexcept
  {
    ::GtkIconTheme *_peel_this = reinterpret_cast<::GtkIconTheme *> (this);
    gtk_icon_theme_add_resource_path (_peel_this, path);
  }

  peel_nonnull_args (2)
  void
  add_search_path (const char *path) noexcept
  {
    ::GtkIconTheme *_peel_this = reinterpret_cast<::GtkIconTheme *> (this);
    gtk_icon_theme_add_search_path (_peel_this, path);
  }

  Gdk::Display *
  get_display () noexcept
  {
    ::GtkIconTheme *_peel_this = reinterpret_cast<::GtkIconTheme *> (this);
    ::GdkDisplay *_peel_return = gtk_icon_theme_get_display (_peel_this);
    return reinterpret_cast<Gdk::Display *> (_peel_return);
  }

  peel::Strv
  get_icon_names () noexcept
  {
    ::GtkIconTheme *_peel_this = reinterpret_cast<::GtkIconTheme *> (this);
    char **_peel_return = gtk_icon_theme_get_icon_names (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::ZTUniquePtr<int[]>
  get_icon_sizes (const char *icon_name) noexcept
  {
    ::GtkIconTheme *_peel_this = reinterpret_cast<::GtkIconTheme *> (this);
    int *_peel_return = gtk_icon_theme_get_icon_sizes (_peel_this, icon_name);
    peel_assume (_peel_return);
    return peel::ZTUniquePtr<int[]>::adopt_ref (_peel_return);
  }

  peel::Strv
  get_resource_path () noexcept
  {
    ::GtkIconTheme *_peel_this = reinterpret_cast<::GtkIconTheme *> (this);
    char **_peel_return = gtk_icon_theme_get_resource_path (_peel_this);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel::Strv
  get_search_path () noexcept
  {
    ::GtkIconTheme *_peel_this = reinterpret_cast<::GtkIconTheme *> (this);
    char **_peel_return = gtk_icon_theme_get_search_path (_peel_this);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel::String
  get_theme_name () noexcept
  {
    ::GtkIconTheme *_peel_this = reinterpret_cast<::GtkIconTheme *> (this);
    char *_peel_return = gtk_icon_theme_get_theme_name (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2)
  bool
  has_gicon (Gio::Icon *gicon) noexcept
  {
    ::GtkIconTheme *_peel_this = reinterpret_cast<::GtkIconTheme *> (this);
    ::GIcon *_peel_gicon = reinterpret_cast<::GIcon *> (gicon);
    gboolean _peel_return = gtk_icon_theme_has_gicon (_peel_this, _peel_gicon);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  has_icon (const char *icon_name) noexcept
  {
    ::GtkIconTheme *_peel_this = reinterpret_cast<::GtkIconTheme *> (this);
    gboolean _peel_return = gtk_icon_theme_has_icon (_peel_this, icon_name);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  peel::RefPtr<IconPaintable>
  lookup_by_gicon (Gio::Icon *icon, int size, int scale, TextDirection direction, IconLookupFlags flags) noexcept
  {
    ::GtkIconTheme *_peel_this = reinterpret_cast<::GtkIconTheme *> (this);
    ::GIcon *_peel_icon = reinterpret_cast<::GIcon *> (icon);
    ::GtkTextDirection _peel_direction = static_cast<::GtkTextDirection> (direction);
    ::GtkIconLookupFlags _peel_flags = static_cast<::GtkIconLookupFlags> (flags);
    ::GtkIconPaintable *_peel_return = gtk_icon_theme_lookup_by_gicon (_peel_this, _peel_icon, size, scale, _peel_direction, _peel_flags);
    peel_assume (_peel_return);
    return peel::RefPtr<IconPaintable>::adopt_ref (reinterpret_cast<IconPaintable *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<IconPaintable>
  lookup_icon (const char *icon_name, peel::StrvRef fallbacks, int size, int scale, TextDirection direction, IconLookupFlags flags) noexcept
  {
    ::GtkIconTheme *_peel_this = reinterpret_cast<::GtkIconTheme *> (this);
    const char **_peel_fallbacks = const_cast<const char **> (fallbacks.data ());
    ::GtkTextDirection _peel_direction = static_cast<::GtkTextDirection> (direction);
    ::GtkIconLookupFlags _peel_flags = static_cast<::GtkIconLookupFlags> (flags);
    ::GtkIconPaintable *_peel_return = gtk_icon_theme_lookup_icon (_peel_this, icon_name, _peel_fallbacks, size, scale, _peel_direction, _peel_flags);
    peel_assume (_peel_return);
    return peel::RefPtr<IconPaintable>::adopt_ref (reinterpret_cast<IconPaintable *> (_peel_return));
  }

  void
  set_resource_path (peel::StrvRef path) noexcept
  {
    ::GtkIconTheme *_peel_this = reinterpret_cast<::GtkIconTheme *> (this);
    const char* const *_peel_path = reinterpret_cast<const char* const *> (path.data ());
    gtk_icon_theme_set_resource_path (_peel_this, _peel_path);
  }

  void
  set_search_path (peel::StrvRef path) noexcept
  {
    ::GtkIconTheme *_peel_this = reinterpret_cast<::GtkIconTheme *> (this);
    const char* const *_peel_path = reinterpret_cast<const char* const *> (path.data ());
    gtk_icon_theme_set_search_path (_peel_this, _peel_path);
  }

  void
  set_theme_name (const char *theme_name) noexcept
  {
    ::GtkIconTheme *_peel_this = reinterpret_cast<::GtkIconTheme *> (this);
    gtk_icon_theme_set_theme_name (_peel_this, theme_name);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<IconTheme, void ()>::_peel_connect_by_name (this, "changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_changed (HandlerObject *object, void (HandlerObject::*handler_method) (IconTheme *), bool after = false) noexcept
  {
    return Signal<IconTheme, void ()>::_peel_connect_by_name (this, "changed", object, handler_method, after);
  }

  static peel::Property<Gdk::Display>
  prop_display ()
  {
    return peel::Property<Gdk::Display> { "display" };
  }

  static peel::Property<peel::Strv>
  prop_icon_names ()
  {
    return peel::Property<peel::Strv> { "icon-names" };
  }

  static peel::Property<peel::Strv>
  prop_resource_path ()
  {
    return peel::Property<peel::Strv> { "resource-path" };
  }

  static peel::Property<peel::Strv>
  prop_search_path ()
  {
    return peel::Property<peel::Strv> { "search-path" };
  }

  static peel::Property<const char *>
  prop_theme_name ()
  {
    return peel::Property<const char *> { "theme-name" };
  }
}; /* class IconTheme */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/Gtk/IconPaintable.h>
