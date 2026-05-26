#pragma once

/* Auto-generated, do not modify */
/* Package gio-2.0 */

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
#include <gio/gio.h>
#include <peel/Gio/IOStream.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
enum class SeekType : std::underlying_type<::GSeekType>::type;
} /* namespace GLib */

namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gio
{
class /* interface */ AsyncResult;
class Cancellable;
class FileIOStream;
class FileInfo;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::FileIOStream> ()
{
  return g_file_io_stream_get_type ();
}


namespace Gio
{
class FileIOStream : public IOStream
/* implements Seekable */
{
private:
  unsigned char _placeholder[sizeof (::GFileIOStream) - sizeof (IOStream)] peel_no_warn_unused;
  using IOStream::splice_finish;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FileIOStream () = delete;
  FileIOStream (const FileIOStream &) = delete;
  FileIOStream (FileIOStream &&) = delete;
  FileIOStream &
  operator = (const FileIOStream &) = delete;
  FileIOStream &
  operator = (FileIOStream &&) = delete;
protected:
  ~FileIOStream () = default;
public:

  peel::String
  get_etag () noexcept
  {
    ::GFileIOStream *_peel_this = reinterpret_cast<::GFileIOStream *> (this);
    char *_peel_return = g_file_io_stream_get_etag (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileInfo>
  query_info (const char *attributes, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIOStream *_peel_this = reinterpret_cast<::GFileIOStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileInfo *_peel_return = g_file_io_stream_query_info (_peel_this, attributes, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  query_info_async (const char *attributes, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFileIOStream *_peel_this = reinterpret_cast<::GFileIOStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    g_file_io_stream_query_info_async (_peel_this, attributes, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  peel::RefPtr<FileInfo>
  query_info_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIOStream *_peel_this = reinterpret_cast<::GFileIOStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GFileInfo *_peel_return = g_file_io_stream_query_info_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_return));
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<FileIOStream> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_can_seek () noexcept
  {
    ::GFileIOStreamClass *_peel_class = reinterpret_cast<::GFileIOStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GFileIOStream *_peel_this = reinterpret_cast<::GFileIOStream *> (this);
    gboolean _peel_return = _peel_class->can_seek (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_can_truncate () noexcept
  {
    ::GFileIOStreamClass *_peel_class = reinterpret_cast<::GFileIOStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GFileIOStream *_peel_this = reinterpret_cast<::GFileIOStream *> (this);
    gboolean _peel_return = _peel_class->can_truncate (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel::String
  parent_vfunc_get_etag () noexcept
  {
    ::GFileIOStreamClass *_peel_class = reinterpret_cast<::GFileIOStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GFileIOStream *_peel_this = reinterpret_cast<::GFileIOStream *> (this);
    char *_peel_return = _peel_class->get_etag (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<FileInfo>
  parent_vfunc_query_info (const char *attributes, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIOStreamClass *_peel_class = reinterpret_cast<::GFileIOStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GFileIOStream *_peel_this = reinterpret_cast<::GFileIOStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileInfo *_peel_return = _peel_class->query_info (_peel_this, attributes, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  peel_nonnull_args (2)
  void
  parent_vfunc_query_info_async (const char *attributes, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileIOStreamClass *_peel_class = reinterpret_cast<::GFileIOStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GFileIOStream *_peel_this = reinterpret_cast<::GFileIOStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GAsyncReadyCallback _peel_callback = peel::internals::CallbackHelper<void, ::GObject *, ::GAsyncResult *>::wrap_async_callback (
      static_cast<AsyncReadyCallback &&> (callback),
      [] (::GObject *source_object, ::GAsyncResult *res, gpointer data) -> void
      {
        AsyncReadyCallback &_peel_captured_callback = *reinterpret_cast<typename std::remove_reference<AsyncReadyCallback>::type *> (data);
        GObject::Object *_peel_source_object = reinterpret_cast<GObject::Object *> (source_object);
        AsyncResult *_peel_res = reinterpret_cast<AsyncResult *> (res);
        peel::internals::invoke_if_nonnull<void> (static_cast<AsyncReadyCallback &&> (_peel_captured_callback)) (_peel_source_object, _peel_res);
      },
      &_peel_user_data);
    _peel_class->query_info_async (_peel_this, attributes, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<FileInfo>
  parent_vfunc_query_info_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIOStreamClass *_peel_class = reinterpret_cast<::GFileIOStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GFileIOStream *_peel_this = reinterpret_cast<::GFileIOStream *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    ::GFileInfo *_peel_return = _peel_class->query_info_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_return));
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_seek (int64_t offset, GLib::SeekType type, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIOStreamClass *_peel_class = reinterpret_cast<::GFileIOStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GFileIOStream *_peel_this = reinterpret_cast<::GFileIOStream *> (this);
    ::GSeekType _peel_type = static_cast<::GSeekType> (type);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->seek (_peel_this, offset, _peel_type, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  int64_t
  parent_vfunc_tell () noexcept
  {
    ::GFileIOStreamClass *_peel_class = reinterpret_cast<::GFileIOStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GFileIOStream *_peel_this = reinterpret_cast<::GFileIOStream *> (this);
    return _peel_class->tell (_peel_this);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_truncate_fn (int64_t size, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileIOStreamClass *_peel_class = reinterpret_cast<::GFileIOStreamClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GFileIOStream *_peel_this = reinterpret_cast<::GFileIOStream *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->truncate_fn (_peel_this, size, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

public:
  class Class : public IOStream::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GFileIOStreamClass) - sizeof (IOStream::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_can_seek ()
    {
      ::GFileIOStreamClass *klass = reinterpret_cast<::GFileIOStreamClass *> (this);
      klass->can_seek = +[] (::GFileIOStream *stream) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        bool _peel_return = _peel_this->DerivedClass::vfunc_can_seek ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_can_truncate ()
    {
      ::GFileIOStreamClass *klass = reinterpret_cast<::GFileIOStreamClass *> (this);
      klass->can_truncate = +[] (::GFileIOStream *stream) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        bool _peel_return = _peel_this->DerivedClass::vfunc_can_truncate ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_etag ()
    {
      ::GFileIOStreamClass *klass = reinterpret_cast<::GFileIOStreamClass *> (this);
      klass->get_etag = +[] (::GFileIOStream *stream) -> char *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        peel::String _peel_return = _peel_this->DerivedClass::vfunc_get_etag ();
        return std::move (_peel_return).release_string ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_query_info ()
    {
      ::GFileIOStreamClass *klass = reinterpret_cast<::GFileIOStreamClass *> (this);
      klass->query_info = +[] (::GFileIOStream *stream, const char *attributes, ::GCancellable *cancellable, ::GError **error) -> ::GFileInfo *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileInfo> _peel_return = _peel_this->DerivedClass::vfunc_query_info (attributes, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileInfo *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: query_info_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_query_info_finish ()
    {
      ::GFileIOStreamClass *klass = reinterpret_cast<::GFileIOStreamClass *> (this);
      klass->query_info_finish = +[] (::GFileIOStream *stream, ::GAsyncResult *result, ::GError **error) -> ::GFileInfo *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileInfo> _peel_return = _peel_this->DerivedClass::vfunc_query_info_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileInfo *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_seek ()
    {
      ::GFileIOStreamClass *klass = reinterpret_cast<::GFileIOStreamClass *> (this);
      klass->seek = +[] (::GFileIOStream *stream, goffset offset, ::GSeekType type, ::GCancellable *cancellable, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        GLib::SeekType _peel_type = static_cast<GLib::SeekType> (type);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_seek (offset, _peel_type, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_tell ()
    {
      ::GFileIOStreamClass *klass = reinterpret_cast<::GFileIOStreamClass *> (this);
      klass->tell = +[] (::GFileIOStream *stream) -> goffset
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        return _peel_this->DerivedClass::vfunc_tell ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_truncate_fn ()
    {
      ::GFileIOStreamClass *klass = reinterpret_cast<::GFileIOStreamClass *> (this);
      klass->truncate_fn = +[] (::GFileIOStream *stream, goffset size, ::GCancellable *cancellable, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (stream);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_truncate_fn (size, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GFileIOStreamClass),
                 "FileIOStream::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GFileIOStreamClass),
                 "FileIOStream::Class align mismatch");
}; /* class FileIOStream */

static_assert (sizeof (FileIOStream) == sizeof (::GFileIOStream),
               "FileIOStream size mismatch");
static_assert (alignof (FileIOStream) == alignof (::GFileIOStream),
               "FileIOStream align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gio/FileInfo.h>
