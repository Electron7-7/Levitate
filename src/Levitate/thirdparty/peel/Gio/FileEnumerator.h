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
#include <peel/GLib/List.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gio
{
class /* interface */ AsyncResult;
class Cancellable;
class /* interface */ File;
class FileEnumerator;
class FileInfo;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::FileEnumerator> ()
{
  return g_file_enumerator_get_type ();
}


namespace Gio
{
class FileEnumerator : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GFileEnumerator) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FileEnumerator () = delete;
  FileEnumerator (const FileEnumerator &) = delete;
  FileEnumerator (FileEnumerator &&) = delete;
  FileEnumerator &
  operator = (const FileEnumerator &) = delete;
  FileEnumerator &
  operator = (FileEnumerator &&) = delete;
protected:
  ~FileEnumerator () = default;
public:

  bool
  close (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileEnumerator *_peel_this = reinterpret_cast<::GFileEnumerator *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_enumerator_close (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename AsyncReadyCallback>
  void
  close_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFileEnumerator *_peel_this = reinterpret_cast<::GFileEnumerator *> (this);
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
    g_file_enumerator_close_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  bool
  close_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileEnumerator *_peel_this = reinterpret_cast<::GFileEnumerator *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_enumerator_close_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  peel::RefPtr<File>
  get_child (FileInfo *info) noexcept
  {
    ::GFileEnumerator *_peel_this = reinterpret_cast<::GFileEnumerator *> (this);
    ::GFileInfo *_peel_info = reinterpret_cast<::GFileInfo *> (info);
    ::GFile *_peel_return = g_file_enumerator_get_child (_peel_this, _peel_info);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel_returns_nonnull
  File *
  get_container () noexcept
  {
    ::GFileEnumerator *_peel_this = reinterpret_cast<::GFileEnumerator *> (this);
    ::GFile *_peel_return = g_file_enumerator_get_container (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<File *> (_peel_return);
  }

  bool
  has_pending () noexcept
  {
    ::GFileEnumerator *_peel_this = reinterpret_cast<::GFileEnumerator *> (this);
    gboolean _peel_return = g_file_enumerator_has_pending (_peel_this);
    return !!_peel_return;
  }

  bool
  is_closed () noexcept
  {
    ::GFileEnumerator *_peel_this = reinterpret_cast<::GFileEnumerator *> (this);
    gboolean _peel_return = g_file_enumerator_is_closed (_peel_this);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3)
  bool
  iterate (FileInfo **out_info, File **out_child, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileEnumerator *_peel_this = reinterpret_cast<::GFileEnumerator *> (this);
    ::GFileInfo **_peel_out_info = reinterpret_cast<::GFileInfo **> (out_info);
    ::GFile **_peel_out_child = reinterpret_cast<::GFile **> (out_child);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_file_enumerator_iterate (_peel_this, _peel_out_info, _peel_out_child, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel::RefPtr<FileInfo>
  next_file (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileEnumerator *_peel_this = reinterpret_cast<::GFileEnumerator *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileInfo *_peel_return = g_file_enumerator_next_file (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_return));
  }

  template<typename AsyncReadyCallback>
  void
  next_files_async (int num_files, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    gpointer _peel_user_data;
    ::GFileEnumerator *_peel_this = reinterpret_cast<::GFileEnumerator *> (this);
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
    g_file_enumerator_next_files_async (_peel_this, num_files, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  peel_nonnull_args (2)
  GLib::List<peel::RefPtr<FileInfo>>
  next_files_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileEnumerator *_peel_this = reinterpret_cast<::GFileEnumerator *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = g_file_enumerator_next_files_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<peel::RefPtr<FileInfo>>::adopt_list (_peel_return);
  }

  void
  set_pending (bool pending) noexcept
  {
    ::GFileEnumerator *_peel_this = reinterpret_cast<::GFileEnumerator *> (this);
    gboolean _peel_pending = static_cast<gboolean> (pending);
    g_file_enumerator_set_pending (_peel_this, _peel_pending);
  }

  static peel::Property<File>
  prop_container ()
  {
    return peel::Property<File> { "container" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<FileEnumerator> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_close_async (int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileEnumeratorClass *_peel_class = reinterpret_cast<::GFileEnumeratorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GFileEnumerator *_peel_this = reinterpret_cast<::GFileEnumerator *> (this);
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
    _peel_class->close_async (_peel_this, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_close_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileEnumeratorClass *_peel_class = reinterpret_cast<::GFileEnumeratorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GFileEnumerator *_peel_this = reinterpret_cast<::GFileEnumerator *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->close_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_close_fn (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileEnumeratorClass *_peel_class = reinterpret_cast<::GFileEnumeratorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GFileEnumerator *_peel_this = reinterpret_cast<::GFileEnumerator *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->close_fn (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel::RefPtr<FileInfo>
  parent_vfunc_next_file (Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileEnumeratorClass *_peel_class = reinterpret_cast<::GFileEnumeratorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GFileEnumerator *_peel_this = reinterpret_cast<::GFileEnumerator *> (this);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    ::GFileInfo *_peel_return = _peel_class->next_file (_peel_this, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<FileInfo>::adopt_ref (reinterpret_cast<FileInfo *> (_peel_return));
  }

  template<typename DerivedClass, typename AsyncReadyCallback>
  void
  parent_vfunc_next_files_async (int num_files, int io_priority, Cancellable *cancellable, AsyncReadyCallback &&callback) noexcept
  {
    ::GFileEnumeratorClass *_peel_class = reinterpret_cast<::GFileEnumeratorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gpointer _peel_user_data;
    ::GFileEnumerator *_peel_this = reinterpret_cast<::GFileEnumerator *> (this);
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
    _peel_class->next_files_async (_peel_this, num_files, io_priority, _peel_cancellable, _peel_callback, _peel_user_data);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  GLib::List<peel::RefPtr<FileInfo>>
  parent_vfunc_next_files_finish (AsyncResult *result, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GFileEnumeratorClass *_peel_class = reinterpret_cast<::GFileEnumeratorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GFileEnumerator *_peel_this = reinterpret_cast<::GFileEnumerator *> (this);
    ::GAsyncResult *_peel_result = reinterpret_cast<::GAsyncResult *> (result);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = _peel_class->next_files_finish (_peel_this, _peel_result, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<peel::RefPtr<FileInfo>>::adopt_list (_peel_return);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GFileEnumeratorClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    /* Unsupported for now: close_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_close_finish ()
    {
      ::GFileEnumeratorClass *klass = reinterpret_cast<::GFileEnumeratorClass *> (this);
      klass->close_finish = +[] (::GFileEnumerator *enumerator, ::GAsyncResult *result, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (enumerator);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_close_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_close_fn ()
    {
      ::GFileEnumeratorClass *klass = reinterpret_cast<::GFileEnumeratorClass *> (this);
      klass->close_fn = +[] (::GFileEnumerator *enumerator, ::GCancellable *cancellable, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (enumerator);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_close_fn (_peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_next_file ()
    {
      ::GFileEnumeratorClass *klass = reinterpret_cast<::GFileEnumeratorClass *> (this);
      klass->next_file = +[] (::GFileEnumerator *enumerator, ::GCancellable *cancellable, ::GError **error) -> ::GFileInfo *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (enumerator);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        peel::RefPtr<FileInfo> _peel_return = _peel_this->DerivedClass::vfunc_next_file (_peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return reinterpret_cast<::GFileInfo *> (std::move (_peel_return).release_ref ());
      };
    }

    /* Unsupported for now: next_files_async: casting callback from C to C++ */

    template<typename DerivedClass>
    void
    override_vfunc_next_files_finish ()
    {
      ::GFileEnumeratorClass *klass = reinterpret_cast<::GFileEnumeratorClass *> (this);
      klass->next_files_finish = +[] (::GFileEnumerator *enumerator, ::GAsyncResult *result, ::GError **error) -> GList *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (enumerator);
        AsyncResult *_peel_result = reinterpret_cast<AsyncResult *> (result);
        peel::UniquePtr<GLib::Error> _peel_error;
        GLib::List<peel::RefPtr<FileInfo>> _peel_return = _peel_this->DerivedClass::vfunc_next_files_finish (_peel_result, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return std::move (_peel_return).release_list ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GFileEnumeratorClass),
                 "FileEnumerator::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GFileEnumeratorClass),
                 "FileEnumerator::Class align mismatch");
}; /* class FileEnumerator */

static_assert (sizeof (FileEnumerator) == sizeof (::GFileEnumerator),
               "FileEnumerator size mismatch");
static_assert (alignof (FileEnumerator) == alignof (::GFileEnumerator),
               "FileEnumerator align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gio/File.h>
#include <peel/Gio/FileInfo.h>
