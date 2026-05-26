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
#include <peel/GObject/Object.h>
#include <peel/Gio/File.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
class /* record */ Variant;
} /* namespace GLib */

namespace Gio
{
class Cancellable;
class /* interface */ File;
struct FileAttributeInfoList;
class /* record */ FileAttributeMatcher;
class FileInfo;
class /* interface */ Icon;
class Vfs;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::Vfs> ()
{
  return g_vfs_get_type ();
}


namespace Gio
{
class Vfs : public GObject::Object
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Vfs () = delete;
  Vfs (const Vfs &) = delete;
  Vfs (Vfs &&) = delete;
  Vfs &
  operator = (const Vfs &) = delete;
  Vfs &
  operator = (Vfs &&) = delete;
protected:
  ~Vfs () = default;
public:

  peel_returns_nonnull
  static Vfs *
  get_default () noexcept
  {
    ::GVfs *_peel_return = g_vfs_get_default ();
    peel_assume (_peel_return);
    return reinterpret_cast<Vfs *> (_peel_return);
  }

  peel_returns_nonnull
  static Vfs *
  get_local () noexcept
  {
    ::GVfs *_peel_return = g_vfs_get_local ();
    peel_assume (_peel_return);
    return reinterpret_cast<Vfs *> (_peel_return);
  }

  peel_nonnull_args (2)
  peel::RefPtr<File>
  get_file_for_path (const char *path) noexcept
  {
    ::GVfs *_peel_this = reinterpret_cast<::GVfs *> (this);
    ::GFile *_peel_return = g_vfs_get_file_for_path (_peel_this, path);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<File>
  get_file_for_uri (const char *uri) noexcept
  {
    ::GVfs *_peel_this = reinterpret_cast<::GVfs *> (this);
    ::GFile *_peel_return = g_vfs_get_file_for_uri (_peel_this, uri);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  peel::StrvRef
  get_supported_uri_schemes () noexcept
  {
    ::GVfs *_peel_this = reinterpret_cast<::GVfs *> (this);
    const gchar* const *_peel_return = g_vfs_get_supported_uri_schemes (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (_peel_return));
  }

  bool
  is_active () noexcept
  {
    ::GVfs *_peel_this = reinterpret_cast<::GVfs *> (this);
    gboolean _peel_return = g_vfs_is_active (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  peel::RefPtr<File>
  parse_name (const char *parse_name) noexcept
  {
    ::GVfs *_peel_this = reinterpret_cast<::GVfs *> (this);
    ::GFile *_peel_return = g_vfs_parse_name (_peel_this, parse_name);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  /* Unsupported for now: register_uri_scheme: explicitly skipped */
  static void
  register_uri_scheme (UnsupportedForNowToken);

  peel_nonnull_args (2)
  bool
  unregister_uri_scheme (const char *scheme) noexcept
  {
    ::GVfs *_peel_this = reinterpret_cast<::GVfs *> (this);
    gboolean _peel_return = g_vfs_unregister_uri_scheme (_peel_this, scheme);
    return !!_peel_return;
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Vfs> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  void
  parent_vfunc_add_writable_namespaces (FileAttributeInfoList *list) noexcept
  {
    ::GVfsClass *_peel_class = reinterpret_cast<::GVfsClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVfs *_peel_this = reinterpret_cast<::GVfs *> (this);
    ::GFileAttributeInfoList *_peel_list = reinterpret_cast<::GFileAttributeInfoList *> (list);
    _peel_class->add_writable_namespaces (_peel_this, _peel_list);
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2) peel_returns_nonnull
  Icon *
  parent_vfunc_deserialize_icon (GLib::Variant *value) noexcept
  {
    ::GVfsClass *_peel_class = reinterpret_cast<::GVfsClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVfs *_peel_this = reinterpret_cast<::GVfs *> (this);
    ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (value);
    ::GIcon *_peel_return = _peel_class->deserialize_icon (_peel_this, _peel_value);
    peel_assume (_peel_return);
    return reinterpret_cast<Icon *> (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<File>
  parent_vfunc_get_file_for_path (const char *path) noexcept
  {
    ::GVfsClass *_peel_class = reinterpret_cast<::GVfsClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVfs *_peel_this = reinterpret_cast<::GVfs *> (this);
    ::GFile *_peel_return = _peel_class->get_file_for_path (_peel_this, path);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<File>
  parent_vfunc_get_file_for_uri (const char *uri) noexcept
  {
    ::GVfsClass *_peel_class = reinterpret_cast<::GVfsClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVfs *_peel_this = reinterpret_cast<::GVfs *> (this);
    ::GFile *_peel_return = _peel_class->get_file_for_uri (_peel_this, uri);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

  template<typename DerivedClass>
  peel::StrvRef
  parent_vfunc_get_supported_uri_schemes () noexcept
  {
    ::GVfsClass *_peel_class = reinterpret_cast<::GVfsClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVfs *_peel_this = reinterpret_cast<::GVfs *> (this);
    const gchar* const *_peel_return = _peel_class->get_supported_uri_schemes (_peel_this);
    peel_assume (_peel_return);
    return peel::ZTArrayRef<const char * const>::adopt (reinterpret_cast<const char * const *> (_peel_return));
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_is_active () noexcept
  {
    ::GVfsClass *_peel_class = reinterpret_cast<::GVfsClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVfs *_peel_this = reinterpret_cast<::GVfs *> (this);
    gboolean _peel_return = _peel_class->is_active (_peel_this);
    return !!_peel_return;
  }

  /* Unsupported for now: local_file_add_info: explicitly skipped */

  template<typename DerivedClass>
  peel_nonnull_args (2, 3)
  void
  parent_vfunc_local_file_moved (const char *source, const char *dest) noexcept
  {
    ::GVfsClass *_peel_class = reinterpret_cast<::GVfsClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVfs *_peel_this = reinterpret_cast<::GVfs *> (this);
    _peel_class->local_file_moved (_peel_this, source, dest);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_local_file_removed (const char *filename) noexcept
  {
    ::GVfsClass *_peel_class = reinterpret_cast<::GVfsClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVfs *_peel_this = reinterpret_cast<::GVfs *> (this);
    _peel_class->local_file_removed (_peel_this, filename);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3)
  bool
  parent_vfunc_local_file_set_attributes (const char *filename, FileInfo *info, File::QueryInfoFlags flags, Cancellable *cancellable, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GVfsClass *_peel_class = reinterpret_cast<::GVfsClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVfs *_peel_this = reinterpret_cast<::GVfs *> (this);
    ::GFileInfo *_peel_info = reinterpret_cast<::GFileInfo *> (info);
    ::GFileQueryInfoFlags _peel_flags = static_cast<::GFileQueryInfoFlags> (flags);
    ::GCancellable *_peel_cancellable = reinterpret_cast<::GCancellable *> (cancellable);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = _peel_class->local_file_set_attributes (_peel_this, filename, _peel_info, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  peel::RefPtr<File>
  parent_vfunc_parse_name (const char *parse_name) noexcept
  {
    ::GVfsClass *_peel_class = reinterpret_cast<::GVfsClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GVfs *_peel_this = reinterpret_cast<::GVfs *> (this);
    ::GFile *_peel_return = _peel_class->parse_name (_peel_this, parse_name);
    peel_assume (_peel_return);
    return peel::RefPtr<File>::adopt_ref (reinterpret_cast<File *> (_peel_return));
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GVfsClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_add_writable_namespaces ()
    {
      ::GVfsClass *klass = reinterpret_cast<::GVfsClass *> (this);
      klass->add_writable_namespaces = +[] (::GVfs *vfs, ::GFileAttributeInfoList *list) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (vfs);
        FileAttributeInfoList *_peel_list = reinterpret_cast<FileAttributeInfoList *> (list);
        _peel_this->DerivedClass::vfunc_add_writable_namespaces (_peel_list);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_deserialize_icon ()
    {
      ::GVfsClass *klass = reinterpret_cast<::GVfsClass *> (this);
      klass->deserialize_icon = +[] (::GVfs *vfs, ::GVariant *value) -> ::GIcon *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (vfs);
        GLib::Variant *_peel_value = reinterpret_cast<GLib::Variant *> (value);
        Icon *_peel_return = _peel_this->DerivedClass::vfunc_deserialize_icon (_peel_value);
        return reinterpret_cast<::GIcon *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_file_for_path ()
    {
      ::GVfsClass *klass = reinterpret_cast<::GVfsClass *> (this);
      klass->get_file_for_path = +[] (::GVfs *vfs, const char *path) -> ::GFile *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (vfs);
        peel::RefPtr<File> _peel_return = _peel_this->DerivedClass::vfunc_get_file_for_path (path);
        return reinterpret_cast<::GFile *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_file_for_uri ()
    {
      ::GVfsClass *klass = reinterpret_cast<::GVfsClass *> (this);
      klass->get_file_for_uri = +[] (::GVfs *vfs, const char *uri) -> ::GFile *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (vfs);
        peel::RefPtr<File> _peel_return = _peel_this->DerivedClass::vfunc_get_file_for_uri (uri);
        return reinterpret_cast<::GFile *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_supported_uri_schemes ()
    {
      ::GVfsClass *klass = reinterpret_cast<::GVfsClass *> (this);
      klass->get_supported_uri_schemes = +[] (::GVfs *vfs) -> const gchar* const *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (vfs);
        peel::StrvRef _peel_return = _peel_this->DerivedClass::vfunc_get_supported_uri_schemes ();
        return reinterpret_cast<const gchar* const *> (_peel_return.data ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_is_active ()
    {
      ::GVfsClass *klass = reinterpret_cast<::GVfsClass *> (this);
      klass->is_active = +[] (::GVfs *vfs) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (vfs);
        bool _peel_return = _peel_this->DerivedClass::vfunc_is_active ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    /* Unsupported for now: local_file_add_info: explicitly skipped */

    template<typename DerivedClass>
    void
    override_vfunc_local_file_moved ()
    {
      ::GVfsClass *klass = reinterpret_cast<::GVfsClass *> (this);
      klass->local_file_moved = +[] (::GVfs *vfs, const char *source, const char *dest) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (vfs);
        _peel_this->DerivedClass::vfunc_local_file_moved (source, dest);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_local_file_removed ()
    {
      ::GVfsClass *klass = reinterpret_cast<::GVfsClass *> (this);
      klass->local_file_removed = +[] (::GVfs *vfs, const char *filename) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (vfs);
        _peel_this->DerivedClass::vfunc_local_file_removed (filename);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_local_file_set_attributes ()
    {
      ::GVfsClass *klass = reinterpret_cast<::GVfsClass *> (this);
      klass->local_file_set_attributes = +[] (::GVfs *vfs, const char *filename, ::GFileInfo *info, ::GFileQueryInfoFlags flags, ::GCancellable *cancellable, ::GError **error) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (vfs);
        FileInfo *_peel_info = reinterpret_cast<FileInfo *> (info);
        File::QueryInfoFlags _peel_flags = static_cast<File::QueryInfoFlags> (flags);
        Cancellable *_peel_cancellable = reinterpret_cast<Cancellable *> (cancellable);
        peel::UniquePtr<GLib::Error> _peel_error;
        bool _peel_return = _peel_this->DerivedClass::vfunc_local_file_set_attributes (filename, _peel_info, _peel_flags, _peel_cancellable, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_parse_name ()
    {
      ::GVfsClass *klass = reinterpret_cast<::GVfsClass *> (this);
      klass->parse_name = +[] (::GVfs *vfs, const char *parse_name) -> ::GFile *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (vfs);
        peel::RefPtr<File> _peel_return = _peel_this->DerivedClass::vfunc_parse_name (parse_name);
        return reinterpret_cast<::GFile *> (std::move (_peel_return).release_ref ());
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GVfsClass),
                 "Vfs::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GVfsClass),
                 "Vfs::Class align mismatch");
}; /* class Vfs */

static_assert (sizeof (Vfs) == sizeof (::GVfs),
               "Vfs size mismatch");
static_assert (alignof (Vfs) == alignof (::GVfs),
               "Vfs align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
