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
#include <peel/Gtk/CellRenderer.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class Texture;
} /* namespace Gdk */

namespace GdkPixbuf
{
class Pixbuf;
} /* namespace GdkPixbuf */

namespace Gio
{
class /* interface */ Icon;
} /* namespace Gio */

namespace Gtk
{
class CellRendererPixbuf;
enum class IconSize : std::underlying_type<::GtkIconSize>::type;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::CellRendererPixbuf> ()
{
  return gtk_cell_renderer_pixbuf_get_type ();
}


namespace Gtk
{
class CellRendererPixbuf : public CellRenderer
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CellRendererPixbuf () = delete;
  CellRendererPixbuf (const CellRendererPixbuf &) = delete;
  CellRendererPixbuf (CellRendererPixbuf &&) = delete;
  CellRendererPixbuf &
  operator = (const CellRendererPixbuf &) = delete;
  CellRendererPixbuf &
  operator = (CellRendererPixbuf &&) = delete;
  ~CellRendererPixbuf () = delete;
public:

  static peel::FloatPtr<CellRendererPixbuf>
  create () noexcept
  {
    ::GtkCellRenderer *_peel_return = gtk_cell_renderer_pixbuf_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<CellRendererPixbuf> (reinterpret_cast<CellRendererPixbuf *> (_peel_return));
  }

  static peel::Property<Gio::Icon>
  prop_gicon ()
  {
    return peel::Property<Gio::Icon> { "gicon" };
  }

  static peel::Property<const char *>
  prop_icon_name ()
  {
    return peel::Property<const char *> { "icon-name" };
  }

  static peel::Property<IconSize>
  prop_icon_size ()
  {
    return peel::Property<IconSize> { "icon-size" };
  }

  static peel::Property<GdkPixbuf::Pixbuf>
  prop_pixbuf ()
  {
    return peel::Property<GdkPixbuf::Pixbuf> { "pixbuf" };
  }

  static peel::Property<GdkPixbuf::Pixbuf>
  prop_pixbuf_expander_closed ()
  {
    return peel::Property<GdkPixbuf::Pixbuf> { "pixbuf-expander-closed" };
  }

  static peel::Property<GdkPixbuf::Pixbuf>
  prop_pixbuf_expander_open ()
  {
    return peel::Property<GdkPixbuf::Pixbuf> { "pixbuf-expander-open" };
  }

  static peel::Property<Gdk::Texture>
  prop_texture ()
  {
    return peel::Property<Gdk::Texture> { "texture" };
  }
}; /* class CellRendererPixbuf */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
