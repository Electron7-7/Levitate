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
class /* interface */ File;
} /* namespace Gio */

namespace Gtk
{
enum class ContentFit : std::underlying_type<::GtkContentFit>::type;
class Picture;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Picture> ()
{
  return gtk_picture_get_type ();
}


namespace Gtk
{
class Picture : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Picture () = delete;
  Picture (const Picture &) = delete;
  Picture (Picture &&) = delete;
  Picture &
  operator = (const Picture &) = delete;
  Picture &
  operator = (Picture &&) = delete;
  ~Picture () = delete;
public:

  static peel::FloatPtr<Picture>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_picture_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<Picture> (reinterpret_cast<Picture *> (_peel_return));
  }

  static peel::FloatPtr<Picture>
  create_for_file (Gio::File *file) noexcept
  {
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    ::GtkWidget *_peel_return = gtk_picture_new_for_file (_peel_file);
    peel_assume (_peel_return);
    return peel::FloatPtr<Picture> (reinterpret_cast<Picture *> (_peel_return));
  }

  static peel::FloatPtr<Picture>
  create_for_filename (const char *filename) noexcept
  {
    ::GtkWidget *_peel_return = gtk_picture_new_for_filename (filename);
    peel_assume (_peel_return);
    return peel::FloatPtr<Picture> (reinterpret_cast<Picture *> (_peel_return));
  }

  static peel::FloatPtr<Picture>
  create_for_paintable (Gdk::Paintable *paintable) noexcept
  {
    ::GdkPaintable *_peel_paintable = reinterpret_cast<::GdkPaintable *> (paintable);
    ::GtkWidget *_peel_return = gtk_picture_new_for_paintable (_peel_paintable);
    peel_assume (_peel_return);
    return peel::FloatPtr<Picture> (reinterpret_cast<Picture *> (_peel_return));
  }

  static peel::FloatPtr<Picture>
  create_for_pixbuf (GdkPixbuf::Pixbuf *pixbuf) noexcept
  {
    ::GdkPixbuf *_peel_pixbuf = reinterpret_cast<::GdkPixbuf *> (pixbuf);
    ::GtkWidget *_peel_return = gtk_picture_new_for_pixbuf (_peel_pixbuf);
    peel_assume (_peel_return);
    return peel::FloatPtr<Picture> (reinterpret_cast<Picture *> (_peel_return));
  }

  static peel::FloatPtr<Picture>
  create_for_resource (const char *resource_path) noexcept
  {
    ::GtkWidget *_peel_return = gtk_picture_new_for_resource (resource_path);
    peel_assume (_peel_return);
    return peel::FloatPtr<Picture> (reinterpret_cast<Picture *> (_peel_return));
  }

  const char *
  get_alternative_text () noexcept
  {
    ::GtkPicture *_peel_this = reinterpret_cast<::GtkPicture *> (this);
    return gtk_picture_get_alternative_text (_peel_this);
  }

  bool
  get_can_shrink () noexcept
  {
    ::GtkPicture *_peel_this = reinterpret_cast<::GtkPicture *> (this);
    gboolean _peel_return = gtk_picture_get_can_shrink (_peel_this);
    return !!_peel_return;
  }

  ContentFit
  get_content_fit () noexcept
  {
    ::GtkPicture *_peel_this = reinterpret_cast<::GtkPicture *> (this);
    ::GtkContentFit _peel_return = gtk_picture_get_content_fit (_peel_this);
    return static_cast<ContentFit> (_peel_return);
  }

  Gio::File *
  get_file () noexcept
  {
    ::GtkPicture *_peel_this = reinterpret_cast<::GtkPicture *> (this);
    ::GFile *_peel_return = gtk_picture_get_file (_peel_this);
    return reinterpret_cast<Gio::File *> (_peel_return);
  }

  bool
  get_isolate_contents () noexcept
  {
    ::GtkPicture *_peel_this = reinterpret_cast<::GtkPicture *> (this);
    gboolean _peel_return = gtk_picture_get_isolate_contents (_peel_this);
    return !!_peel_return;
  }

  bool
  get_keep_aspect_ratio () noexcept
  {
    ::GtkPicture *_peel_this = reinterpret_cast<::GtkPicture *> (this);
    gboolean _peel_return = gtk_picture_get_keep_aspect_ratio (_peel_this);
    return !!_peel_return;
  }

  Gdk::Paintable *
  get_paintable () noexcept
  {
    ::GtkPicture *_peel_this = reinterpret_cast<::GtkPicture *> (this);
    ::GdkPaintable *_peel_return = gtk_picture_get_paintable (_peel_this);
    return reinterpret_cast<Gdk::Paintable *> (_peel_return);
  }

  void
  set_alternative_text (const char *alternative_text) noexcept
  {
    ::GtkPicture *_peel_this = reinterpret_cast<::GtkPicture *> (this);
    gtk_picture_set_alternative_text (_peel_this, alternative_text);
  }

  void
  set_can_shrink (bool can_shrink) noexcept
  {
    ::GtkPicture *_peel_this = reinterpret_cast<::GtkPicture *> (this);
    gboolean _peel_can_shrink = static_cast<gboolean> (can_shrink);
    gtk_picture_set_can_shrink (_peel_this, _peel_can_shrink);
  }

  void
  set_content_fit (ContentFit content_fit) noexcept
  {
    ::GtkPicture *_peel_this = reinterpret_cast<::GtkPicture *> (this);
    ::GtkContentFit _peel_content_fit = static_cast<::GtkContentFit> (content_fit);
    gtk_picture_set_content_fit (_peel_this, _peel_content_fit);
  }

  void
  set_file (Gio::File *file) noexcept
  {
    ::GtkPicture *_peel_this = reinterpret_cast<::GtkPicture *> (this);
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    gtk_picture_set_file (_peel_this, _peel_file);
  }

  void
  set_filename (const char *filename) noexcept
  {
    ::GtkPicture *_peel_this = reinterpret_cast<::GtkPicture *> (this);
    gtk_picture_set_filename (_peel_this, filename);
  }

  void
  set_isolate_contents (bool isolate_contents) noexcept
  {
    ::GtkPicture *_peel_this = reinterpret_cast<::GtkPicture *> (this);
    gboolean _peel_isolate_contents = static_cast<gboolean> (isolate_contents);
    gtk_picture_set_isolate_contents (_peel_this, _peel_isolate_contents);
  }

  void
  set_keep_aspect_ratio (bool keep_aspect_ratio) noexcept
  {
    ::GtkPicture *_peel_this = reinterpret_cast<::GtkPicture *> (this);
    gboolean _peel_keep_aspect_ratio = static_cast<gboolean> (keep_aspect_ratio);
    gtk_picture_set_keep_aspect_ratio (_peel_this, _peel_keep_aspect_ratio);
  }

  void
  set_paintable (Gdk::Paintable *paintable) noexcept
  {
    ::GtkPicture *_peel_this = reinterpret_cast<::GtkPicture *> (this);
    ::GdkPaintable *_peel_paintable = reinterpret_cast<::GdkPaintable *> (paintable);
    gtk_picture_set_paintable (_peel_this, _peel_paintable);
  }

  void
  set_pixbuf (GdkPixbuf::Pixbuf *pixbuf) noexcept
  {
    ::GtkPicture *_peel_this = reinterpret_cast<::GtkPicture *> (this);
    ::GdkPixbuf *_peel_pixbuf = reinterpret_cast<::GdkPixbuf *> (pixbuf);
    gtk_picture_set_pixbuf (_peel_this, _peel_pixbuf);
  }

  void
  set_resource (const char *resource_path) noexcept
  {
    ::GtkPicture *_peel_this = reinterpret_cast<::GtkPicture *> (this);
    gtk_picture_set_resource (_peel_this, resource_path);
  }

  static peel::Property<const char *>
  prop_alternative_text ()
  {
    return peel::Property<const char *> { "alternative-text" };
  }

  static peel::Property<bool>
  prop_can_shrink ()
  {
    return peel::Property<bool> { "can-shrink" };
  }

  static peel::Property<ContentFit>
  prop_content_fit ()
  {
    return peel::Property<ContentFit> { "content-fit" };
  }

  static peel::Property<Gio::File>
  prop_file ()
  {
    return peel::Property<Gio::File> { "file" };
  }

  static peel::Property<bool>
  prop_isolate_contents ()
  {
    return peel::Property<bool> { "isolate-contents" };
  }

  static peel::Property<bool>
  prop_keep_aspect_ratio ()
  {
    return peel::Property<bool> { "keep-aspect-ratio" };
  }

  static peel::Property<Gdk::Paintable>
  prop_paintable ()
  {
    return peel::Property<Gdk::Paintable> { "paintable" };
  }

  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkPictureClass),
                 "Picture::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkPictureClass),
                 "Picture::Class align mismatch");
}; /* class Picture */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
