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

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace Gio
{
class Credentials;
enum class CredentialsType : std::underlying_type<::GCredentialsType>::type;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::Credentials> ()
{
  return g_credentials_get_type ();
}


namespace Gio
{
class Credentials : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Credentials () = delete;
  Credentials (const Credentials &) = delete;
  Credentials (Credentials &&) = delete;
  Credentials &
  operator = (const Credentials &) = delete;
  Credentials &
  operator = (Credentials &&) = delete;
  ~Credentials () = delete;
public:

  static peel::RefPtr<Credentials>
  create () noexcept
  {
    ::GCredentials *_peel_return = g_credentials_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<Credentials>::adopt_ref (reinterpret_cast<Credentials *> (_peel_return));
  }

  void *
  get_native (CredentialsType native_type) noexcept
  {
    ::GCredentials *_peel_this = reinterpret_cast<::GCredentials *> (this);
    ::GCredentialsType _peel_native_type = static_cast<::GCredentialsType> (native_type);
    return g_credentials_get_native (_peel_this, _peel_native_type);
  }

#ifdef G_OS_UNIX
  pid_t
  get_unix_pid (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GCredentials *_peel_this = reinterpret_cast<::GCredentials *> (this);
    ::GError *_peel_error = nullptr;
    pid_t _peel_return = g_credentials_get_unix_pid (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }
#endif /* G_OS_UNIX */

#ifdef G_OS_UNIX
  uid_t
  get_unix_user (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GCredentials *_peel_this = reinterpret_cast<::GCredentials *> (this);
    ::GError *_peel_error = nullptr;
    uid_t _peel_return = g_credentials_get_unix_user (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }
#endif /* G_OS_UNIX */

  peel_nonnull_args (2)
  bool
  is_same_user (Credentials *other_credentials, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GCredentials *_peel_this = reinterpret_cast<::GCredentials *> (this);
    ::GCredentials *_peel_other_credentials = reinterpret_cast<::GCredentials *> (other_credentials);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_credentials_is_same_user (_peel_this, _peel_other_credentials, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  void
  set_native (CredentialsType native_type, void *native) noexcept
  {
    ::GCredentials *_peel_this = reinterpret_cast<::GCredentials *> (this);
    ::GCredentialsType _peel_native_type = static_cast<::GCredentialsType> (native_type);
    g_credentials_set_native (_peel_this, _peel_native_type, native);
  }

#ifdef G_OS_UNIX
  bool
  set_unix_user (uid_t uid, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GCredentials *_peel_this = reinterpret_cast<::GCredentials *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = g_credentials_set_unix_user (_peel_this, uid, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }
#endif /* G_OS_UNIX */

  peel::String
  to_string () noexcept
  {
    ::GCredentials *_peel_this = reinterpret_cast<::GCredentials *> (this);
    gchar *_peel_return = g_credentials_to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class Credentials */

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
