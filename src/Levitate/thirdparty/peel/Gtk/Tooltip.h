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
class /* interface */ Paintable;
struct Rectangle;
} /* namespace Gdk */

namespace Gio
{
class /* interface */ Icon;
} /* namespace Gio */

namespace Gtk
{
class Tooltip;
class Widget;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Tooltip> ()
{
  return gtk_tooltip_get_type ();
}


namespace Gtk
{
class Tooltip : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Tooltip () = delete;
  Tooltip (const Tooltip &) = delete;
  Tooltip (Tooltip &&) = delete;
  Tooltip &
  operator = (const Tooltip &) = delete;
  Tooltip &
  operator = (Tooltip &&) = delete;
  ~Tooltip () = delete;
public:

  void
  set_custom (Widget *custom_widget) noexcept
  {
    ::GtkTooltip *_peel_this = reinterpret_cast<::GtkTooltip *> (this);
    ::GtkWidget *_peel_custom_widget = reinterpret_cast<::GtkWidget *> (custom_widget);
    gtk_tooltip_set_custom (_peel_this, _peel_custom_widget);
  }

  void
  set_icon (Gdk::Paintable *paintable) noexcept
  {
    ::GtkTooltip *_peel_this = reinterpret_cast<::GtkTooltip *> (this);
    ::GdkPaintable *_peel_paintable = reinterpret_cast<::GdkPaintable *> (paintable);
    gtk_tooltip_set_icon (_peel_this, _peel_paintable);
  }

  void
  set_icon_from_gicon (Gio::Icon *gicon) noexcept
  {
    ::GtkTooltip *_peel_this = reinterpret_cast<::GtkTooltip *> (this);
    ::GIcon *_peel_gicon = reinterpret_cast<::GIcon *> (gicon);
    gtk_tooltip_set_icon_from_gicon (_peel_this, _peel_gicon);
  }

  void
  set_icon_from_icon_name (const char *icon_name) noexcept
  {
    ::GtkTooltip *_peel_this = reinterpret_cast<::GtkTooltip *> (this);
    gtk_tooltip_set_icon_from_icon_name (_peel_this, icon_name);
  }

  void
  set_markup (const char *markup) noexcept
  {
    ::GtkTooltip *_peel_this = reinterpret_cast<::GtkTooltip *> (this);
    gtk_tooltip_set_markup (_peel_this, markup);
  }

  void
  set_text (const char *text) noexcept
  {
    ::GtkTooltip *_peel_this = reinterpret_cast<::GtkTooltip *> (this);
    gtk_tooltip_set_text (_peel_this, text);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  set_tip_area (const Gdk::Rectangle *rect) noexcept
  {
    ::GtkTooltip *_peel_this = reinterpret_cast<::GtkTooltip *> (this);
    const ::GdkRectangle *_peel_rect = reinterpret_cast<const ::GdkRectangle *> (rect);
    gtk_tooltip_set_tip_area (_peel_this, _peel_rect);
  }
}; /* class Tooltip */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
