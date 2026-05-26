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
#include <peel/GLib/Quark.h>
#include <peel/Gdk/Paintable.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
struct Quark;
} /* namespace GLib */

namespace Gdk
{
class Surface;
} /* namespace Gdk */

namespace Gtk
{
class MediaStream;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::MediaStream> ()
{
  return gtk_media_stream_get_type ();
}


namespace Gtk
{
class MediaStream : public Gdk::Paintable
/* extends GObject::Object */
/* implements Gdk::Paintable */
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  MediaStream () = delete;
  MediaStream (const MediaStream &) = delete;
  MediaStream (MediaStream &&) = delete;
  MediaStream &
  operator = (const MediaStream &) = delete;
  MediaStream &
  operator = (MediaStream &&) = delete;
protected:
  ~MediaStream () = default;
public:

protected:
  void
  ended () noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gtk_media_stream_ended (_peel_this);
  }

  template<typename... Args>
  peel_nonnull_args (4)
  void
  error (GLib::Quark domain, int code, const char *format, Args ...args) noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gtk_media_stream_error (_peel_this, domain, code, format, args...);
  }

  peel_nonnull_args (4)
  void
  error_valist (GLib::Quark domain, int code, const char *format, va_list args) noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gtk_media_stream_error_valist (_peel_this, domain, code, format, args);
  }

  void
  gerror (peel::UniquePtr<GLib::Error> error) noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    ::GError *_peel_error = reinterpret_cast<::GError *> (std::move (error).release_ref ());
    gtk_media_stream_gerror (_peel_this, _peel_error);
  }

public:
  int64_t
  get_duration () noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    return gtk_media_stream_get_duration (_peel_this);
  }

  bool
  get_ended () noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gboolean _peel_return = gtk_media_stream_get_ended (_peel_this);
    return !!_peel_return;
  }

  const GLib::Error *
  get_error () noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    const ::GError *_peel_return = gtk_media_stream_get_error (_peel_this);
    return reinterpret_cast<const GLib::Error *> (_peel_return);
  }

  bool
  get_loop () noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gboolean _peel_return = gtk_media_stream_get_loop (_peel_this);
    return !!_peel_return;
  }

  bool
  get_muted () noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gboolean _peel_return = gtk_media_stream_get_muted (_peel_this);
    return !!_peel_return;
  }

  bool
  get_playing () noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gboolean _peel_return = gtk_media_stream_get_playing (_peel_this);
    return !!_peel_return;
  }

  int64_t
  get_timestamp () noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    return gtk_media_stream_get_timestamp (_peel_this);
  }

  double
  get_volume () noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    return gtk_media_stream_get_volume (_peel_this);
  }

  bool
  has_audio () noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gboolean _peel_return = gtk_media_stream_has_audio (_peel_this);
    return !!_peel_return;
  }

  bool
  has_video () noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gboolean _peel_return = gtk_media_stream_has_video (_peel_this);
    return !!_peel_return;
  }

  bool
  is_prepared () noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gboolean _peel_return = gtk_media_stream_is_prepared (_peel_this);
    return !!_peel_return;
  }

  bool
  is_seekable () noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gboolean _peel_return = gtk_media_stream_is_seekable (_peel_this);
    return !!_peel_return;
  }

  bool
  is_seeking () noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gboolean _peel_return = gtk_media_stream_is_seeking (_peel_this);
    return !!_peel_return;
  }

  void
  pause () noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gtk_media_stream_pause (_peel_this);
  }

  void
  play () noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gtk_media_stream_play (_peel_this);
  }

protected:
  void
  prepared (bool has_audio, bool has_video, bool seekable, int64_t duration) noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gboolean _peel_has_audio = static_cast<gboolean> (has_audio);
    gboolean _peel_has_video = static_cast<gboolean> (has_video);
    gboolean _peel_seekable = static_cast<gboolean> (seekable);
    gtk_media_stream_prepared (_peel_this, _peel_has_audio, _peel_has_video, _peel_seekable, duration);
  }

public:
  peel_nonnull_args (2)
  void
  realize (Gdk::Surface *surface) noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    ::GdkSurface *_peel_surface = reinterpret_cast<::GdkSurface *> (surface);
    gtk_media_stream_realize (_peel_this, _peel_surface);
  }

  void
  seek (int64_t timestamp) noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gtk_media_stream_seek (_peel_this, timestamp);
  }

protected:
  void
  seek_failed () noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gtk_media_stream_seek_failed (_peel_this);
  }

  void
  seek_success () noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gtk_media_stream_seek_success (_peel_this);
  }

public:
  void
  set_loop (bool loop) noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gboolean _peel_loop = static_cast<gboolean> (loop);
    gtk_media_stream_set_loop (_peel_this, _peel_loop);
  }

  void
  set_muted (bool muted) noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gboolean _peel_muted = static_cast<gboolean> (muted);
    gtk_media_stream_set_muted (_peel_this, _peel_muted);
  }

  void
  set_playing (bool playing) noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gboolean _peel_playing = static_cast<gboolean> (playing);
    gtk_media_stream_set_playing (_peel_this, _peel_playing);
  }

  void
  set_volume (double volume) noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gtk_media_stream_set_volume (_peel_this, volume);
  }

  void
  stream_ended () noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gtk_media_stream_stream_ended (_peel_this);
  }

  void
  stream_prepared (bool has_audio, bool has_video, bool seekable, int64_t duration) noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gboolean _peel_has_audio = static_cast<gboolean> (has_audio);
    gboolean _peel_has_video = static_cast<gboolean> (has_video);
    gboolean _peel_seekable = static_cast<gboolean> (seekable);
    gtk_media_stream_stream_prepared (_peel_this, _peel_has_audio, _peel_has_video, _peel_seekable, duration);
  }

  void
  stream_unprepared () noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gtk_media_stream_stream_unprepared (_peel_this);
  }

protected:
  void
  unprepared () noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gtk_media_stream_unprepared (_peel_this);
  }

public:
  peel_nonnull_args (2)
  void
  unrealize (Gdk::Surface *surface) noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    ::GdkSurface *_peel_surface = reinterpret_cast<::GdkSurface *> (surface);
    gtk_media_stream_unrealize (_peel_this, _peel_surface);
  }

protected:
  void
  update (int64_t timestamp) noexcept
  {
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gtk_media_stream_update (_peel_this, timestamp);
  }

public:
  static peel::Property<int64_t>
  prop_duration ()
  {
    return peel::Property<int64_t> { "duration" };
  }

  static peel::Property<bool>
  prop_ended ()
  {
    return peel::Property<bool> { "ended" };
  }

  static peel::Property<GLib::Error>
  prop_error ()
  {
    return peel::Property<GLib::Error> { "error" };
  }

  static peel::Property<bool>
  prop_has_audio ()
  {
    return peel::Property<bool> { "has-audio" };
  }

  static peel::Property<bool>
  prop_has_video ()
  {
    return peel::Property<bool> { "has-video" };
  }

  static peel::Property<bool>
  prop_loop ()
  {
    return peel::Property<bool> { "loop" };
  }

  static peel::Property<bool>
  prop_muted ()
  {
    return peel::Property<bool> { "muted" };
  }

  static peel::Property<bool>
  prop_playing ()
  {
    return peel::Property<bool> { "playing" };
  }

  static peel::Property<bool>
  prop_prepared ()
  {
    return peel::Property<bool> { "prepared" };
  }

  static peel::Property<bool>
  prop_seekable ()
  {
    return peel::Property<bool> { "seekable" };
  }

  static peel::Property<bool>
  prop_seeking ()
  {
    return peel::Property<bool> { "seeking" };
  }

  static peel::Property<int64_t>
  prop_timestamp ()
  {
    return peel::Property<int64_t> { "timestamp" };
  }

  static peel::Property<double>
  prop_volume ()
  {
    return peel::Property<double> { "volume" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<MediaStream> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_pause () noexcept
  {
    ::GtkMediaStreamClass *_peel_class = reinterpret_cast<::GtkMediaStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    _peel_class->pause (_peel_this);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_play () noexcept
  {
    ::GtkMediaStreamClass *_peel_class = reinterpret_cast<::GtkMediaStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gboolean _peel_return = _peel_class->play (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_realize (Gdk::Surface *surface) noexcept
  {
    ::GtkMediaStreamClass *_peel_class = reinterpret_cast<::GtkMediaStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    ::GdkSurface *_peel_surface = reinterpret_cast<::GdkSurface *> (surface);
    _peel_class->realize (_peel_this, _peel_surface);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_seek (int64_t timestamp) noexcept
  {
    ::GtkMediaStreamClass *_peel_class = reinterpret_cast<::GtkMediaStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    _peel_class->seek (_peel_this, timestamp);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_unrealize (Gdk::Surface *surface) noexcept
  {
    ::GtkMediaStreamClass *_peel_class = reinterpret_cast<::GtkMediaStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    ::GdkSurface *_peel_surface = reinterpret_cast<::GdkSurface *> (surface);
    _peel_class->unrealize (_peel_this, _peel_surface);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_update_audio (bool muted, double volume) noexcept
  {
    ::GtkMediaStreamClass *_peel_class = reinterpret_cast<::GtkMediaStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkMediaStream *_peel_this = reinterpret_cast<::GtkMediaStream *> (this);
    gboolean _peel_muted = static_cast<gboolean> (muted);
    _peel_class->update_audio (_peel_this, _peel_muted, volume);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkMediaStreamClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_pause ()
    {
      ::GtkMediaStreamClass *klass = reinterpret_cast<::GtkMediaStreamClass *> (this);
      klass->pause = +[] (::GtkMediaStream *self) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        _peel_this->DerivedClass::vfunc_pause ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_play ()
    {
      ::GtkMediaStreamClass *klass = reinterpret_cast<::GtkMediaStreamClass *> (this);
      klass->play = +[] (::GtkMediaStream *self) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        bool _peel_return = _peel_this->DerivedClass::vfunc_play ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_realize ()
    {
      ::GtkMediaStreamClass *klass = reinterpret_cast<::GtkMediaStreamClass *> (this);
      klass->realize = +[] (::GtkMediaStream *self, ::GdkSurface *surface) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        Gdk::Surface *_peel_surface = reinterpret_cast<Gdk::Surface *> (surface);
        _peel_this->DerivedClass::vfunc_realize (_peel_surface);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_seek ()
    {
      ::GtkMediaStreamClass *klass = reinterpret_cast<::GtkMediaStreamClass *> (this);
      klass->seek = +[] (::GtkMediaStream *self, gint64 timestamp) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        _peel_this->DerivedClass::vfunc_seek (timestamp);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_unrealize ()
    {
      ::GtkMediaStreamClass *klass = reinterpret_cast<::GtkMediaStreamClass *> (this);
      klass->unrealize = +[] (::GtkMediaStream *self, ::GdkSurface *surface) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        Gdk::Surface *_peel_surface = reinterpret_cast<Gdk::Surface *> (surface);
        _peel_this->DerivedClass::vfunc_unrealize (_peel_surface);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_update_audio ()
    {
      ::GtkMediaStreamClass *klass = reinterpret_cast<::GtkMediaStreamClass *> (this);
      klass->update_audio = +[] (::GtkMediaStream *self, gboolean muted, double volume) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        bool _peel_muted = !!muted;
        _peel_this->DerivedClass::vfunc_update_audio (_peel_muted, volume);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkMediaStreamClass),
                 "MediaStream::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkMediaStreamClass),
                 "MediaStream::Class align mismatch");
}; /* class MediaStream */

static_assert (sizeof (MediaStream) == sizeof (::GtkMediaStream),
               "MediaStream size mismatch");
static_assert (alignof (MediaStream) == alignof (::GtkMediaStream),
               "MediaStream align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
