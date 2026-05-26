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
namespace Gtk
{
class MediaControls;
class MediaStream;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::MediaControls> ()
{
  return gtk_media_controls_get_type ();
}


namespace Gtk
{
class MediaControls : public Widget
/* non-derivable */
/* implements Accessible, Buildable, Constraint::Target */
{
private:
  using Widget::get_default_direction;
  using Widget::set_default_direction;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  MediaControls () = delete;
  MediaControls (const MediaControls &) = delete;
  MediaControls (MediaControls &&) = delete;
  MediaControls &
  operator = (const MediaControls &) = delete;
  MediaControls &
  operator = (MediaControls &&) = delete;
  ~MediaControls () = delete;
public:

  static peel::FloatPtr<MediaControls>
  create (MediaStream *stream) noexcept
  {
    ::GtkMediaStream *_peel_stream = reinterpret_cast<::GtkMediaStream *> (stream);
    ::GtkWidget *_peel_return = gtk_media_controls_new (_peel_stream);
    peel_assume (_peel_return);
    return peel::FloatPtr<MediaControls> (reinterpret_cast<MediaControls *> (_peel_return));
  }

  MediaStream *
  get_media_stream () noexcept
  {
    ::GtkMediaControls *_peel_this = reinterpret_cast<::GtkMediaControls *> (this);
    ::GtkMediaStream *_peel_return = gtk_media_controls_get_media_stream (_peel_this);
    return reinterpret_cast<MediaStream *> (_peel_return);
  }

  void
  set_media_stream (MediaStream *stream) noexcept
  {
    ::GtkMediaControls *_peel_this = reinterpret_cast<::GtkMediaControls *> (this);
    ::GtkMediaStream *_peel_stream = reinterpret_cast<::GtkMediaStream *> (stream);
    gtk_media_controls_set_media_stream (_peel_this, _peel_stream);
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

  static_assert (sizeof (Class) == sizeof (::GtkMediaControlsClass),
                 "MediaControls::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkMediaControlsClass),
                 "MediaControls::Class align mismatch");
}; /* class MediaControls */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
