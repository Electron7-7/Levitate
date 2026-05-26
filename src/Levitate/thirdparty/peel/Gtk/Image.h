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
#include <peel/Gtk/Widget.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class /* interface */ Paintable;
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
enum class IconSize : std::underlying_type<::GtkIconSize>::type;
class Image;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Image> ()
{
  return gtk_image_get_type ();
}


namespace Gtk
{
class Image : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Image () = delete;
  Image (const Image &) = delete;
  Image (Image &&) = delete;
  Image &
  operator = (const Image &) = delete;
  Image &
  operator = (Image &&) = delete;
  ~Image () = delete;
public:
  enum class Type : std::underlying_type<::GtkImageType>::type;

  static peel::FloatPtr<Image>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_image_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<Image> (reinterpret_cast<Image *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<Image>
  create_from_file (const char *filename) noexcept
  {
    ::GtkWidget *_peel_return = gtk_image_new_from_file (filename);
    peel_assume (_peel_return);
    return peel::FloatPtr<Image> (reinterpret_cast<Image *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<Image>
  create_from_gicon (Gio::Icon *icon) noexcept
  {
    ::GIcon *_peel_icon = reinterpret_cast<::GIcon *> (icon);
    ::GtkWidget *_peel_return = gtk_image_new_from_gicon (_peel_icon);
    peel_assume (_peel_return);
    return peel::FloatPtr<Image> (reinterpret_cast<Image *> (_peel_return));
  }

  static peel::FloatPtr<Image>
  create_from_icon_name (const char *icon_name) noexcept
  {
    ::GtkWidget *_peel_return = gtk_image_new_from_icon_name (icon_name);
    peel_assume (_peel_return);
    return peel::FloatPtr<Image> (reinterpret_cast<Image *> (_peel_return));
  }

  static peel::FloatPtr<Image>
  create_from_paintable (Gdk::Paintable *paintable) noexcept
  {
    ::GdkPaintable *_peel_paintable = reinterpret_cast<::GdkPaintable *> (paintable);
    ::GtkWidget *_peel_return = gtk_image_new_from_paintable (_peel_paintable);
    peel_assume (_peel_return);
    return peel::FloatPtr<Image> (reinterpret_cast<Image *> (_peel_return));
  }

  static peel::FloatPtr<Image>
  create_from_pixbuf (GdkPixbuf::Pixbuf *pixbuf) noexcept
  {
    ::GdkPixbuf *_peel_pixbuf = reinterpret_cast<::GdkPixbuf *> (pixbuf);
    ::GtkWidget *_peel_return = gtk_image_new_from_pixbuf (_peel_pixbuf);
    peel_assume (_peel_return);
    return peel::FloatPtr<Image> (reinterpret_cast<Image *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::FloatPtr<Image>
  create_from_resource (const char *resource_path) noexcept
  {
    ::GtkWidget *_peel_return = gtk_image_new_from_resource (resource_path);
    peel_assume (_peel_return);
    return peel::FloatPtr<Image> (reinterpret_cast<Image *> (_peel_return));
  }

  void
  clear () noexcept
  {
    ::GtkImage *_peel_this = reinterpret_cast<::GtkImage *> (this);
    gtk_image_clear (_peel_this);
  }

  Gio::Icon *
  get_gicon () noexcept
  {
    ::GtkImage *_peel_this = reinterpret_cast<::GtkImage *> (this);
    ::GIcon *_peel_return = gtk_image_get_gicon (_peel_this);
    return reinterpret_cast<Gio::Icon *> (_peel_return);
  }

  const char *
  get_icon_name () noexcept
  {
    ::GtkImage *_peel_this = reinterpret_cast<::GtkImage *> (this);
    return gtk_image_get_icon_name (_peel_this);
  }

  IconSize
  get_icon_size () noexcept
  {
    ::GtkImage *_peel_this = reinterpret_cast<::GtkImage *> (this);
    ::GtkIconSize _peel_return = gtk_image_get_icon_size (_peel_this);
    return static_cast<IconSize> (_peel_return);
  }

  Gdk::Paintable *
  get_paintable () noexcept
  {
    ::GtkImage *_peel_this = reinterpret_cast<::GtkImage *> (this);
    ::GdkPaintable *_peel_return = gtk_image_get_paintable (_peel_this);
    return reinterpret_cast<Gdk::Paintable *> (_peel_return);
  }

  int
  get_pixel_size () noexcept
  {
    ::GtkImage *_peel_this = reinterpret_cast<::GtkImage *> (this);
    return gtk_image_get_pixel_size (_peel_this);
  }

  Image::Type
  get_storage_type () noexcept
  {
    ::GtkImage *_peel_this = reinterpret_cast<::GtkImage *> (this);
    ::GtkImageType _peel_return = gtk_image_get_storage_type (_peel_this);
    return static_cast<Image::Type> (_peel_return);
  }

  void
  set_from_file (const char *filename) noexcept
  {
    ::GtkImage *_peel_this = reinterpret_cast<::GtkImage *> (this);
    gtk_image_set_from_file (_peel_this, filename);
  }

  peel_nonnull_args (2)
  void
  set_from_gicon (Gio::Icon *icon) noexcept
  {
    ::GtkImage *_peel_this = reinterpret_cast<::GtkImage *> (this);
    ::GIcon *_peel_icon = reinterpret_cast<::GIcon *> (icon);
    gtk_image_set_from_gicon (_peel_this, _peel_icon);
  }

  void
  set_from_icon_name (const char *icon_name) noexcept
  {
    ::GtkImage *_peel_this = reinterpret_cast<::GtkImage *> (this);
    gtk_image_set_from_icon_name (_peel_this, icon_name);
  }

  void
  set_from_paintable (Gdk::Paintable *paintable) noexcept
  {
    ::GtkImage *_peel_this = reinterpret_cast<::GtkImage *> (this);
    ::GdkPaintable *_peel_paintable = reinterpret_cast<::GdkPaintable *> (paintable);
    gtk_image_set_from_paintable (_peel_this, _peel_paintable);
  }

  void
  set_from_pixbuf (GdkPixbuf::Pixbuf *pixbuf) noexcept
  {
    ::GtkImage *_peel_this = reinterpret_cast<::GtkImage *> (this);
    ::GdkPixbuf *_peel_pixbuf = reinterpret_cast<::GdkPixbuf *> (pixbuf);
    gtk_image_set_from_pixbuf (_peel_this, _peel_pixbuf);
  }

  void
  set_from_resource (const char *resource_path) noexcept
  {
    ::GtkImage *_peel_this = reinterpret_cast<::GtkImage *> (this);
    gtk_image_set_from_resource (_peel_this, resource_path);
  }

  void
  set_icon_size (IconSize icon_size) noexcept
  {
    ::GtkImage *_peel_this = reinterpret_cast<::GtkImage *> (this);
    ::GtkIconSize _peel_icon_size = static_cast<::GtkIconSize> (icon_size);
    gtk_image_set_icon_size (_peel_this, _peel_icon_size);
  }

  void
  set_pixel_size (int pixel_size) noexcept
  {
    ::GtkImage *_peel_this = reinterpret_cast<::GtkImage *> (this);
    gtk_image_set_pixel_size (_peel_this, pixel_size);
  }

  static peel::Property<const char *>
  prop_file ()
  {
    return peel::Property<const char *> { "file" };
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

  static peel::Property<Gdk::Paintable>
  prop_paintable ()
  {
    return peel::Property<Gdk::Paintable> { "paintable" };
  }

  static peel::Property<int>
  prop_pixel_size ()
  {
    return peel::Property<int> { "pixel-size" };
  }

  static peel::Property<const char *>
  prop_resource ()
  {
    return peel::Property<const char *> { "resource" };
  }

  static peel::Property<Image::Type>
  prop_storage_type ()
  {
    return peel::Property<Image::Type> { "storage-type" };
  }

  static peel::Property<bool>
  prop_use_fallback ()
  {
    return peel::Property<bool> { "use-fallback" };
  }
}; /* class Image */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
