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

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
struct Error;
} /* namespace GLib */

namespace Gio
{
class InputStream;
class /* record */ Resource;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::Resource> ()
{
  return g_resource_get_type ();
}
template<>
struct GObject::Value::Traits<Gio::Resource>
{
  typedef RefPtr<Gio::Resource> OwnedType;
  typedef Gio::Resource * UnownedType;

  static Gio::Resource *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gio::Resource *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gio::Resource * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gio::Resource>
  dup (const ::GValue *value)
  {
    return RefPtr<Gio::Resource>::adopt_ref (reinterpret_cast<Gio::Resource *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gio::Resource> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gio::Resource *
  cast_for_create (Gio::Resource * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gio::Resource>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gio::Resource> (), basics.flags);
  }
};

template<>
struct RefTraits<Gio::Resource, void>
{
  static void
  ref (Gio::Resource *ptr)
  {
    g_resource_ref (reinterpret_cast<::GResource *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gio::Resource *ptr)
  {
    g_resource_unref (reinterpret_cast<::GResource *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gio
{
class /* record */ Resource
{
private:
  Resource () = delete;
  Resource (const Resource &) = delete;
  Resource (Resource &&) = delete;
  ~Resource ();

public:
  enum class Error : std::underlying_type<::GResourceError>::type;
  enum class Flags : std::underlying_type<::GResourceFlags>::type;
  enum class LookupFlags : std::underlying_type<::GResourceLookupFlags>::type;

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<Resource>
  create_from_data (GLib::Bytes *data, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GBytes *_peel_data = reinterpret_cast<::GBytes *> (data);
    ::GError *_peel_error = nullptr;
    ::GResource *_peel_return = g_resource_new_from_data (_peel_data, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Resource>::adopt_ref (reinterpret_cast<Resource *> (_peel_return));
  }

  void
  _register () noexcept
  {
    ::GResource *_peel_this = reinterpret_cast<::GResource *> (this);
    g_resources_register (_peel_this);
  }

  void
  _unregister () noexcept
  {
    ::GResource *_peel_this = reinterpret_cast<::GResource *> (this);
    g_resources_unregister (_peel_this);
  }

  peel_nonnull_args (2)
  peel::Strv
  enumerate_children (const char *path, Resource::LookupFlags lookup_flags, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResource *_peel_this = reinterpret_cast<::GResource *> (this);
    ::GResourceLookupFlags _peel_lookup_flags = static_cast<::GResourceLookupFlags> (lookup_flags);
    ::GError *_peel_error = nullptr;
    char **_peel_return = g_resource_enumerate_children (_peel_this, path, _peel_lookup_flags, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel_arg_out (4) peel_arg_out (5) peel_nonnull_args (2)
  bool
  get_info (const char *path, Resource::LookupFlags lookup_flags, size_t *size, uint32_t *flags, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResource *_peel_this = reinterpret_cast<::GResource *> (this);
    ::GResourceLookupFlags _peel_lookup_flags = static_cast<::GResourceLookupFlags> (lookup_flags);
    gsize *_peel_size = reinterpret_cast<gsize *> (size);
    guint32 *_peel_flags = reinterpret_cast<guint32 *> (flags);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_resource_get_info (_peel_this, path, _peel_lookup_flags, _peel_size, _peel_flags, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  has_children (const char *path) noexcept
  {
    ::GResource *_peel_this = reinterpret_cast<::GResource *> (this);
    gboolean _peel_return = g_resource_has_children (_peel_this, path);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  peel::RefPtr<GLib::Bytes>
  lookup_data (const char *path, Resource::LookupFlags lookup_flags, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResource *_peel_this = reinterpret_cast<::GResource *> (this);
    ::GResourceLookupFlags _peel_lookup_flags = static_cast<::GResourceLookupFlags> (lookup_flags);
    ::GError *_peel_error = nullptr;
    ::GBytes *_peel_return = g_resource_lookup_data (_peel_this, path, _peel_lookup_flags, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  peel_nonnull_args (2)
  peel::RefPtr<InputStream>
  open_stream (const char *path, Resource::LookupFlags lookup_flags, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GResource *_peel_this = reinterpret_cast<::GResource *> (this);
    ::GResourceLookupFlags _peel_lookup_flags = static_cast<::GResourceLookupFlags> (lookup_flags);
    ::GError *_peel_error = nullptr;
    ::GInputStream *_peel_return = g_resource_open_stream (_peel_this, path, _peel_lookup_flags, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<InputStream>::adopt_ref (reinterpret_cast<InputStream *> (_peel_return));
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */

  peel_nonnull_args (1)
  static peel::RefPtr<Resource>
  load (const char *filename, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GResource *_peel_return = g_resource_load (filename, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<Resource>::adopt_ref (reinterpret_cast<Resource *> (_peel_return));
  }
}; /* record Resource */

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
#include <peel/GLib/Error.h>
#include <peel/Gio/InputStream.h>
