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
#include <peel/GLib/Variant.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Tree;
class /* record */ Variant;
} /* namespace GLib */

namespace Gio
{
class Permission;
class SettingsBackend;
} /* namespace Gio */

#ifdef G_SETTINGS_ENABLE_BACKEND
template<>
inline GObject::Type
GObject::Type::of<Gio::SettingsBackend> ()
{
  return g_settings_backend_get_type ();
}
#endif /* G_SETTINGS_ENABLE_BACKEND */


namespace Gio
{
#ifdef G_SETTINGS_ENABLE_BACKEND
class SettingsBackend : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GSettingsBackend) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  SettingsBackend () = delete;
  SettingsBackend (const SettingsBackend &) = delete;
  SettingsBackend (SettingsBackend &&) = delete;
  SettingsBackend &
  operator = (const SettingsBackend &) = delete;
  SettingsBackend &
  operator = (SettingsBackend &&) = delete;
protected:
  ~SettingsBackend () = default;
public:

  peel_arg_in (1) peel_arg_out (2) peel_nonnull_args (1, 2)
  static void
  flatten_tree (GLib::Tree *tree, peel::String *path, peel::ZTUniquePtr<const char *[]> *keys, peel::ZTUniquePtr<GLib::Variant *[]> *values) noexcept
  {
    ::GTree *_peel_tree = reinterpret_cast<::GTree *> (tree);
    gchar *_peel_path;
    const gchar **_peel_keys;
    ::GVariant **_peel_values;
    g_settings_backend_flatten_tree (_peel_tree, &_peel_path, &_peel_keys, values ? &_peel_values : nullptr);
    *path = peel::String::adopt_string (_peel_path);
    *keys = peel::ZTUniquePtr<const char *[]>::adopt_ref (reinterpret_cast<const char **> (_peel_keys));
    if (values)
      *values = peel::ZTUniquePtr<GLib::Variant *[]>::adopt_ref (reinterpret_cast<GLib::Variant **> (_peel_values));
  }

  static peel::RefPtr<SettingsBackend>
  get_default () noexcept
  {
    ::GSettingsBackend *_peel_return = g_settings_backend_get_default ();
    peel_assume (_peel_return);
    return peel::RefPtr<SettingsBackend>::adopt_ref (reinterpret_cast<SettingsBackend *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  changed (const char *key, void *origin_tag) noexcept
  {
    ::GSettingsBackend *_peel_this = reinterpret_cast<::GSettingsBackend *> (this);
    g_settings_backend_changed (_peel_this, key, origin_tag);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  changed_tree (GLib::Tree *tree, void *origin_tag) noexcept
  {
    ::GSettingsBackend *_peel_this = reinterpret_cast<::GSettingsBackend *> (this);
    ::GTree *_peel_tree = reinterpret_cast<::GTree *> (tree);
    g_settings_backend_changed_tree (_peel_this, _peel_tree, origin_tag);
  }

  peel_nonnull_args (2)
  void
  keys_changed (const char *path, peel::StrvRef items, void *origin_tag) noexcept
  {
    ::GSettingsBackend *_peel_this = reinterpret_cast<::GSettingsBackend *> (this);
    const gchar* const *_peel_items = reinterpret_cast<const gchar* const *> (items.data ());
    g_settings_backend_keys_changed (_peel_this, path, _peel_items, origin_tag);
  }

  peel_nonnull_args (2)
  void
  path_changed (const char *path, void *origin_tag) noexcept
  {
    ::GSettingsBackend *_peel_this = reinterpret_cast<::GSettingsBackend *> (this);
    g_settings_backend_path_changed (_peel_this, path, origin_tag);
  }

  peel_nonnull_args (2)
  void
  path_writable_changed (const char *path) noexcept
  {
    ::GSettingsBackend *_peel_this = reinterpret_cast<::GSettingsBackend *> (this);
    g_settings_backend_path_writable_changed (_peel_this, path);
  }

  peel_nonnull_args (2)
  void
  writable_changed (const char *key) noexcept
  {
    ::GSettingsBackend *_peel_this = reinterpret_cast<::GSettingsBackend *> (this);
    g_settings_backend_writable_changed (_peel_this, key);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<SettingsBackend> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2) peel_returns_nonnull
  Permission *
  parent_vfunc_get_permission (const char *path) noexcept
  {
    ::GSettingsBackendClass *_peel_class = reinterpret_cast<::GSettingsBackendClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSettingsBackend *_peel_this = reinterpret_cast<::GSettingsBackend *> (this);
    ::GPermission *_peel_return = _peel_class->get_permission (_peel_this, path);
    peel_assume (_peel_return);
    return reinterpret_cast<Permission *> (_peel_return);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  bool
  parent_vfunc_get_writable (const char *key) noexcept
  {
    ::GSettingsBackendClass *_peel_class = reinterpret_cast<::GSettingsBackendClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSettingsBackend *_peel_this = reinterpret_cast<::GSettingsBackend *> (this);
    gboolean _peel_return = _peel_class->get_writable (_peel_this, key);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_in (3) peel_nonnull_args (2, 3)
  peel::RefPtr<GLib::Variant>
  parent_vfunc_read (const char *key, const GLib::Variant::Type *expected_type, bool default_value) noexcept
  {
    ::GSettingsBackendClass *_peel_class = reinterpret_cast<::GSettingsBackendClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSettingsBackend *_peel_this = reinterpret_cast<::GSettingsBackend *> (this);
    const ::GVariantType *_peel_expected_type = reinterpret_cast<const ::GVariantType *> (expected_type);
    gboolean _peel_default_value = static_cast<gboolean> (default_value);
    ::GVariant *_peel_return = _peel_class->read (_peel_this, key, _peel_expected_type, _peel_default_value);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_arg_in (3) peel_nonnull_args (2, 3)
  peel::RefPtr<GLib::Variant>
  parent_vfunc_read_user_value (const char *key, const GLib::Variant::Type *expected_type) noexcept
  {
    ::GSettingsBackendClass *_peel_class = reinterpret_cast<::GSettingsBackendClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSettingsBackend *_peel_this = reinterpret_cast<::GSettingsBackend *> (this);
    const ::GVariantType *_peel_expected_type = reinterpret_cast<const ::GVariantType *> (expected_type);
    ::GVariant *_peel_return = _peel_class->read_user_value (_peel_this, key, _peel_expected_type);
    peel_assume (_peel_return);
    return peel::RefPtr<GLib::Variant>::adopt_ref (reinterpret_cast<GLib::Variant *> (_peel_return));
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_reset (const char *key, void *origin_tag) noexcept
  {
    ::GSettingsBackendClass *_peel_class = reinterpret_cast<::GSettingsBackendClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSettingsBackend *_peel_this = reinterpret_cast<::GSettingsBackend *> (this);
    _peel_class->reset (_peel_this, key, origin_tag);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_subscribe (const char *name) noexcept
  {
    ::GSettingsBackendClass *_peel_class = reinterpret_cast<::GSettingsBackendClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSettingsBackend *_peel_this = reinterpret_cast<::GSettingsBackend *> (this);
    _peel_class->subscribe (_peel_this, name);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_sync () noexcept
  {
    ::GSettingsBackendClass *_peel_class = reinterpret_cast<::GSettingsBackendClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSettingsBackend *_peel_this = reinterpret_cast<::GSettingsBackend *> (this);
    _peel_class->sync (_peel_this);
  }

  template<typename DerivedClass>
  peel_nonnull_args (2)
  void
  parent_vfunc_unsubscribe (const char *name) noexcept
  {
    ::GSettingsBackendClass *_peel_class = reinterpret_cast<::GSettingsBackendClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSettingsBackend *_peel_this = reinterpret_cast<::GSettingsBackend *> (this);
    _peel_class->unsubscribe (_peel_this, name);
  }

  template<typename DerivedClass>
  peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  parent_vfunc_write (const char *key, GLib::Variant *value, void *origin_tag) noexcept
  {
    ::GSettingsBackendClass *_peel_class = reinterpret_cast<::GSettingsBackendClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSettingsBackend *_peel_this = reinterpret_cast<::GSettingsBackend *> (this);
    ::GVariant *_peel_value = reinterpret_cast<::GVariant *> (value);
    gboolean _peel_return = _peel_class->write (_peel_this, key, _peel_value, origin_tag);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_arg_in (2) peel_nonnull_args (2)
  bool
  parent_vfunc_write_tree (GLib::Tree *tree, void *origin_tag) noexcept
  {
    ::GSettingsBackendClass *_peel_class = reinterpret_cast<::GSettingsBackendClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GSettingsBackend *_peel_this = reinterpret_cast<::GSettingsBackend *> (this);
    ::GTree *_peel_tree = reinterpret_cast<::GTree *> (tree);
    gboolean _peel_return = _peel_class->write_tree (_peel_this, _peel_tree, origin_tag);
    return !!_peel_return;
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GSettingsBackendClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_get_permission ()
    {
      ::GSettingsBackendClass *klass = reinterpret_cast<::GSettingsBackendClass *> (this);
      klass->get_permission = +[] (::GSettingsBackend *backend, const gchar *path) -> ::GPermission *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (backend);
        Permission *_peel_return = _peel_this->DerivedClass::vfunc_get_permission (path);
        return reinterpret_cast<::GPermission *> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_writable ()
    {
      ::GSettingsBackendClass *klass = reinterpret_cast<::GSettingsBackendClass *> (this);
      klass->get_writable = +[] (::GSettingsBackend *backend, const gchar *key) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (backend);
        bool _peel_return = _peel_this->DerivedClass::vfunc_get_writable (key);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_read ()
    {
      ::GSettingsBackendClass *klass = reinterpret_cast<::GSettingsBackendClass *> (this);
      klass->read = +[] (::GSettingsBackend *backend, const gchar *key, const ::GVariantType *expected_type, gboolean default_value) -> ::GVariant *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (backend);
        const GLib::Variant::Type *_peel_expected_type = reinterpret_cast<const GLib::Variant::Type *> (expected_type);
        bool _peel_default_value = !!default_value;
        peel::RefPtr<GLib::Variant> _peel_return = _peel_this->DerivedClass::vfunc_read (key, _peel_expected_type, _peel_default_value);
        return reinterpret_cast<::GVariant *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_read_user_value ()
    {
      ::GSettingsBackendClass *klass = reinterpret_cast<::GSettingsBackendClass *> (this);
      klass->read_user_value = +[] (::GSettingsBackend *backend, const gchar *key, const ::GVariantType *expected_type) -> ::GVariant *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (backend);
        const GLib::Variant::Type *_peel_expected_type = reinterpret_cast<const GLib::Variant::Type *> (expected_type);
        peel::RefPtr<GLib::Variant> _peel_return = _peel_this->DerivedClass::vfunc_read_user_value (key, _peel_expected_type);
        return reinterpret_cast<::GVariant *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_reset ()
    {
      ::GSettingsBackendClass *klass = reinterpret_cast<::GSettingsBackendClass *> (this);
      klass->reset = +[] (::GSettingsBackend *backend, const gchar *key, gpointer origin_tag) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (backend);
        _peel_this->DerivedClass::vfunc_reset (key, origin_tag);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_subscribe ()
    {
      ::GSettingsBackendClass *klass = reinterpret_cast<::GSettingsBackendClass *> (this);
      klass->subscribe = +[] (::GSettingsBackend *backend, const gchar *name) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (backend);
        _peel_this->DerivedClass::vfunc_subscribe (name);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_sync ()
    {
      ::GSettingsBackendClass *klass = reinterpret_cast<::GSettingsBackendClass *> (this);
      klass->sync = +[] (::GSettingsBackend *backend) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (backend);
        _peel_this->DerivedClass::vfunc_sync ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_unsubscribe ()
    {
      ::GSettingsBackendClass *klass = reinterpret_cast<::GSettingsBackendClass *> (this);
      klass->unsubscribe = +[] (::GSettingsBackend *backend, const gchar *name) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (backend);
        _peel_this->DerivedClass::vfunc_unsubscribe (name);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_write ()
    {
      ::GSettingsBackendClass *klass = reinterpret_cast<::GSettingsBackendClass *> (this);
      klass->write = +[] (::GSettingsBackend *backend, const gchar *key, ::GVariant *value, gpointer origin_tag) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (backend);
        GLib::Variant *_peel_value = reinterpret_cast<GLib::Variant *> (value);
        bool _peel_return = _peel_this->DerivedClass::vfunc_write (key, _peel_value, origin_tag);
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_write_tree ()
    {
      ::GSettingsBackendClass *klass = reinterpret_cast<::GSettingsBackendClass *> (this);
      klass->write_tree = +[] (::GSettingsBackend *backend, ::GTree *tree, gpointer origin_tag) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (backend);
        GLib::Tree *_peel_tree = reinterpret_cast<GLib::Tree *> (tree);
        bool _peel_return = _peel_this->DerivedClass::vfunc_write_tree (_peel_tree, origin_tag);
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GSettingsBackendClass),
                 "SettingsBackend::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GSettingsBackendClass),
                 "SettingsBackend::Class align mismatch");
}; /* class SettingsBackend */

static_assert (sizeof (SettingsBackend) == sizeof (::GSettingsBackend),
               "SettingsBackend size mismatch");
static_assert (alignof (SettingsBackend) == alignof (::GSettingsBackend),
               "SettingsBackend align mismatch");
#endif /* G_SETTINGS_ENABLE_BACKEND */

} /* namespace Gio */
} /* namespace peel */

peel_end_header
