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
#include <peel/Gtk/GraphicsOffload.h>
#include <peel/Gtk/Widget.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class /* interface */ File;
} /* namespace Gio */

namespace Gtk
{
class MediaStream;
class Video;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Video> ()
{
  return gtk_video_get_type ();
}


namespace Gtk
{
class Video : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Video () = delete;
  Video (const Video &) = delete;
  Video (Video &&) = delete;
  Video &
  operator = (const Video &) = delete;
  Video &
  operator = (Video &&) = delete;
  ~Video () = delete;
public:

  static peel::FloatPtr<Video>
  create () noexcept
  {
    ::GtkWidget *_peel_return = gtk_video_new ();
    peel_assume (_peel_return);
    return peel::FloatPtr<Video> (reinterpret_cast<Video *> (_peel_return));
  }

  static peel::FloatPtr<Video>
  create_for_file (Gio::File *file) noexcept
  {
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    ::GtkWidget *_peel_return = gtk_video_new_for_file (_peel_file);
    peel_assume (_peel_return);
    return peel::FloatPtr<Video> (reinterpret_cast<Video *> (_peel_return));
  }

  static peel::FloatPtr<Video>
  create_for_filename (const char *filename) noexcept
  {
    ::GtkWidget *_peel_return = gtk_video_new_for_filename (filename);
    peel_assume (_peel_return);
    return peel::FloatPtr<Video> (reinterpret_cast<Video *> (_peel_return));
  }

  static peel::FloatPtr<Video>
  create_for_media_stream (MediaStream *stream) noexcept
  {
    ::GtkMediaStream *_peel_stream = reinterpret_cast<::GtkMediaStream *> (stream);
    ::GtkWidget *_peel_return = gtk_video_new_for_media_stream (_peel_stream);
    peel_assume (_peel_return);
    return peel::FloatPtr<Video> (reinterpret_cast<Video *> (_peel_return));
  }

  static peel::FloatPtr<Video>
  create_for_resource (const char *resource_path) noexcept
  {
    ::GtkWidget *_peel_return = gtk_video_new_for_resource (resource_path);
    peel_assume (_peel_return);
    return peel::FloatPtr<Video> (reinterpret_cast<Video *> (_peel_return));
  }

  bool
  get_autoplay () noexcept
  {
    ::GtkVideo *_peel_this = reinterpret_cast<::GtkVideo *> (this);
    gboolean _peel_return = gtk_video_get_autoplay (_peel_this);
    return !!_peel_return;
  }

  Gio::File *
  get_file () noexcept
  {
    ::GtkVideo *_peel_this = reinterpret_cast<::GtkVideo *> (this);
    ::GFile *_peel_return = gtk_video_get_file (_peel_this);
    return reinterpret_cast<Gio::File *> (_peel_return);
  }

  GraphicsOffload::Enabled
  get_graphics_offload () noexcept
  {
    ::GtkVideo *_peel_this = reinterpret_cast<::GtkVideo *> (this);
    ::GtkGraphicsOffloadEnabled _peel_return = gtk_video_get_graphics_offload (_peel_this);
    return static_cast<GraphicsOffload::Enabled> (_peel_return);
  }

  bool
  get_loop () noexcept
  {
    ::GtkVideo *_peel_this = reinterpret_cast<::GtkVideo *> (this);
    gboolean _peel_return = gtk_video_get_loop (_peel_this);
    return !!_peel_return;
  }

  MediaStream *
  get_media_stream () noexcept
  {
    ::GtkVideo *_peel_this = reinterpret_cast<::GtkVideo *> (this);
    ::GtkMediaStream *_peel_return = gtk_video_get_media_stream (_peel_this);
    return reinterpret_cast<MediaStream *> (_peel_return);
  }

  void
  set_autoplay (bool autoplay) noexcept
  {
    ::GtkVideo *_peel_this = reinterpret_cast<::GtkVideo *> (this);
    gboolean _peel_autoplay = static_cast<gboolean> (autoplay);
    gtk_video_set_autoplay (_peel_this, _peel_autoplay);
  }

  void
  set_file (Gio::File *file) noexcept
  {
    ::GtkVideo *_peel_this = reinterpret_cast<::GtkVideo *> (this);
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    gtk_video_set_file (_peel_this, _peel_file);
  }

  void
  set_filename (const char *filename) noexcept
  {
    ::GtkVideo *_peel_this = reinterpret_cast<::GtkVideo *> (this);
    gtk_video_set_filename (_peel_this, filename);
  }

  void
  set_graphics_offload (GraphicsOffload::Enabled enabled) noexcept
  {
    ::GtkVideo *_peel_this = reinterpret_cast<::GtkVideo *> (this);
    ::GtkGraphicsOffloadEnabled _peel_enabled = static_cast<::GtkGraphicsOffloadEnabled> (enabled);
    gtk_video_set_graphics_offload (_peel_this, _peel_enabled);
  }

  void
  set_loop (bool loop) noexcept
  {
    ::GtkVideo *_peel_this = reinterpret_cast<::GtkVideo *> (this);
    gboolean _peel_loop = static_cast<gboolean> (loop);
    gtk_video_set_loop (_peel_this, _peel_loop);
  }

  void
  set_media_stream (MediaStream *stream) noexcept
  {
    ::GtkVideo *_peel_this = reinterpret_cast<::GtkVideo *> (this);
    ::GtkMediaStream *_peel_stream = reinterpret_cast<::GtkMediaStream *> (stream);
    gtk_video_set_media_stream (_peel_this, _peel_stream);
  }

  void
  set_resource (const char *resource_path) noexcept
  {
    ::GtkVideo *_peel_this = reinterpret_cast<::GtkVideo *> (this);
    gtk_video_set_resource (_peel_this, resource_path);
  }

  static peel::Property<bool>
  prop_autoplay ()
  {
    return peel::Property<bool> { "autoplay" };
  }

  static peel::Property<Gio::File>
  prop_file ()
  {
    return peel::Property<Gio::File> { "file" };
  }

  static peel::Property<GraphicsOffload::Enabled>
  prop_graphics_offload ()
  {
    return peel::Property<GraphicsOffload::Enabled> { "graphics-offload" };
  }

  static peel::Property<bool>
  prop_loop ()
  {
    return peel::Property<bool> { "loop" };
  }

  static peel::Property<MediaStream>
  prop_media_stream ()
  {
    return peel::Property<MediaStream> { "media-stream" };
  }

  class Class : public Widget::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkVideoClass),
                 "Video::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkVideoClass),
                 "Video::Class align mismatch");
}; /* class Video */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
