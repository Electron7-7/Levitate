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
#include <peel/Gtk/MediaStream.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class /* interface */ File;
class InputStream;
} /* namespace Gio */

namespace Gtk
{
class MediaFile;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::MediaFile> ()
{
  return gtk_media_file_get_type ();
}


namespace Gtk
{
class MediaFile : public MediaStream
/* implements Gdk::Paintable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  MediaFile () = delete;
  MediaFile (const MediaFile &) = delete;
  MediaFile (MediaFile &&) = delete;
  MediaFile &
  operator = (const MediaFile &) = delete;
  MediaFile &
  operator = (MediaFile &&) = delete;
protected:
  ~MediaFile () = default;
public:

  static peel::RefPtr<MediaFile>
  create () noexcept
  {
    ::GtkMediaStream *_peel_return = gtk_media_file_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<MediaFile>::adopt_ref (reinterpret_cast<MediaFile *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<MediaFile>
  create_for_file (Gio::File *file) noexcept
  {
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    ::GtkMediaStream *_peel_return = gtk_media_file_new_for_file (_peel_file);
    peel_assume (_peel_return);
    return peel::RefPtr<MediaFile>::adopt_ref (reinterpret_cast<MediaFile *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<MediaFile>
  create_for_filename (const char *filename) noexcept
  {
    ::GtkMediaStream *_peel_return = gtk_media_file_new_for_filename (filename);
    peel_assume (_peel_return);
    return peel::RefPtr<MediaFile>::adopt_ref (reinterpret_cast<MediaFile *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<MediaFile>
  create_for_input_stream (Gio::InputStream *stream) noexcept
  {
    ::GInputStream *_peel_stream = reinterpret_cast<::GInputStream *> (stream);
    ::GtkMediaStream *_peel_return = gtk_media_file_new_for_input_stream (_peel_stream);
    peel_assume (_peel_return);
    return peel::RefPtr<MediaFile>::adopt_ref (reinterpret_cast<MediaFile *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<MediaFile>
  create_for_resource (const char *resource_path) noexcept
  {
    ::GtkMediaStream *_peel_return = gtk_media_file_new_for_resource (resource_path);
    peel_assume (_peel_return);
    return peel::RefPtr<MediaFile>::adopt_ref (reinterpret_cast<MediaFile *> (_peel_return));
  }

  void
  clear () noexcept
  {
    ::GtkMediaFile *_peel_this = reinterpret_cast<::GtkMediaFile *> (this);
    gtk_media_file_clear (_peel_this);
  }

  Gio::File *
  get_file () noexcept
  {
    ::GtkMediaFile *_peel_this = reinterpret_cast<::GtkMediaFile *> (this);
    ::GFile *_peel_return = gtk_media_file_get_file (_peel_this);
    return reinterpret_cast<Gio::File *> (_peel_return);
  }

  Gio::InputStream *
  get_input_stream () noexcept
  {
    ::GtkMediaFile *_peel_this = reinterpret_cast<::GtkMediaFile *> (this);
    ::GInputStream *_peel_return = gtk_media_file_get_input_stream (_peel_this);
    return reinterpret_cast<Gio::InputStream *> (_peel_return);
  }

  void
  set_file (Gio::File *file) noexcept
  {
    ::GtkMediaFile *_peel_this = reinterpret_cast<::GtkMediaFile *> (this);
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    gtk_media_file_set_file (_peel_this, _peel_file);
  }

  void
  set_filename (const char *filename) noexcept
  {
    ::GtkMediaFile *_peel_this = reinterpret_cast<::GtkMediaFile *> (this);
    gtk_media_file_set_filename (_peel_this, filename);
  }

  void
  set_input_stream (Gio::InputStream *stream) noexcept
  {
    ::GtkMediaFile *_peel_this = reinterpret_cast<::GtkMediaFile *> (this);
    ::GInputStream *_peel_stream = reinterpret_cast<::GInputStream *> (stream);
    gtk_media_file_set_input_stream (_peel_this, _peel_stream);
  }

  void
  set_resource (const char *resource_path) noexcept
  {
    ::GtkMediaFile *_peel_this = reinterpret_cast<::GtkMediaFile *> (this);
    gtk_media_file_set_resource (_peel_this, resource_path);
  }

  static peel::Property<Gio::File>
  prop_file ()
  {
    return peel::Property<Gio::File> { "file" };
  }

  static peel::Property<Gio::InputStream>
  prop_input_stream ()
  {
    return peel::Property<Gio::InputStream> { "input-stream" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<MediaFile> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_close () noexcept
  {
    ::GtkMediaFileClass *_peel_class = reinterpret_cast<::GtkMediaFileClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkMediaFile *_peel_this = reinterpret_cast<::GtkMediaFile *> (this);
    _peel_class->close (_peel_this);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_open () noexcept
  {
    ::GtkMediaFileClass *_peel_class = reinterpret_cast<::GtkMediaFileClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkMediaFile *_peel_this = reinterpret_cast<::GtkMediaFile *> (this);
    _peel_class->open (_peel_this);
  }

public:
  class Class : public MediaStream::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkMediaFileClass) - sizeof (MediaStream::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_close ()
    {
      ::GtkMediaFileClass *klass = reinterpret_cast<::GtkMediaFileClass *> (this);
      klass->close = +[] (::GtkMediaFile *self) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        _peel_this->DerivedClass::vfunc_close ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_open ()
    {
      ::GtkMediaFileClass *klass = reinterpret_cast<::GtkMediaFileClass *> (this);
      klass->open = +[] (::GtkMediaFile *self) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        _peel_this->DerivedClass::vfunc_open ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkMediaFileClass),
                 "MediaFile::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkMediaFileClass),
                 "MediaFile::Class align mismatch");
}; /* class MediaFile */

static_assert (sizeof (MediaFile) == sizeof (::GtkMediaFile),
               "MediaFile size mismatch");
static_assert (alignof (MediaFile) == alignof (::GtkMediaFile),
               "MediaFile align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
