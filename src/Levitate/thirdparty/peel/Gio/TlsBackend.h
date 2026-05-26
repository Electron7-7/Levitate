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
#include <peel/GObject/TypeInterface.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class /* interface */ TlsBackend;
class TlsDatabase;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::TlsBackend> ()
{
  return g_tls_backend_get_type ();
}


namespace Gio
{
class /* interface */ TlsBackend : public GObject::Object
/* requires GObject::Object */
{
private:
  TlsBackend () = delete;
  TlsBackend (const TlsBackend &) = delete;
  TlsBackend (TlsBackend &&) = delete;

  TlsBackend &
  operator = (const TlsBackend &) = delete;
  TlsBackend &
  operator = (TlsBackend &&) = delete;

protected:
  ~TlsBackend () = default;

public:

  peel_returns_nonnull
  static TlsBackend *
  get_default () noexcept
  {
    ::GTlsBackend *_peel_return = g_tls_backend_get_default ();
    peel_assume (_peel_return);
    return reinterpret_cast<TlsBackend *> (_peel_return);
  }

  GObject::Type
  get_certificate_type () noexcept
  {
    ::GTlsBackend *_peel_this = reinterpret_cast<::GTlsBackend *> (this);
    return g_tls_backend_get_certificate_type (_peel_this);
  }

  GObject::Type
  get_client_connection_type () noexcept
  {
    ::GTlsBackend *_peel_this = reinterpret_cast<::GTlsBackend *> (this);
    return g_tls_backend_get_client_connection_type (_peel_this);
  }

  peel::RefPtr<TlsDatabase>
  get_default_database () noexcept
  {
    ::GTlsBackend *_peel_this = reinterpret_cast<::GTlsBackend *> (this);
    ::GTlsDatabase *_peel_return = g_tls_backend_get_default_database (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<TlsDatabase>::adopt_ref (reinterpret_cast<TlsDatabase *> (_peel_return));
  }

  GObject::Type
  get_dtls_client_connection_type () noexcept
  {
    ::GTlsBackend *_peel_this = reinterpret_cast<::GTlsBackend *> (this);
    return g_tls_backend_get_dtls_client_connection_type (_peel_this);
  }

  GObject::Type
  get_dtls_server_connection_type () noexcept
  {
    ::GTlsBackend *_peel_this = reinterpret_cast<::GTlsBackend *> (this);
    return g_tls_backend_get_dtls_server_connection_type (_peel_this);
  }

  GObject::Type
  get_file_database_type () noexcept
  {
    ::GTlsBackend *_peel_this = reinterpret_cast<::GTlsBackend *> (this);
    return g_tls_backend_get_file_database_type (_peel_this);
  }

  GObject::Type
  get_server_connection_type () noexcept
  {
    ::GTlsBackend *_peel_this = reinterpret_cast<::GTlsBackend *> (this);
    return g_tls_backend_get_server_connection_type (_peel_this);
  }

  void
  set_default_database (TlsDatabase *database) noexcept
  {
    ::GTlsBackend *_peel_this = reinterpret_cast<::GTlsBackend *> (this);
    ::GTlsDatabase *_peel_database = reinterpret_cast<::GTlsDatabase *> (database);
    g_tls_backend_set_default_database (_peel_this, _peel_database);
  }

  bool
  supports_dtls () noexcept
  {
    ::GTlsBackend *_peel_this = reinterpret_cast<::GTlsBackend *> (this);
    gboolean _peel_return = g_tls_backend_supports_dtls (_peel_this);
    return !!_peel_return;
  }

  bool
  supports_tls () noexcept
  {
    ::GTlsBackend *_peel_this = reinterpret_cast<::GTlsBackend *> (this);
    gboolean _peel_return = g_tls_backend_supports_tls (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel::RefPtr<TlsDatabase>
  parent_vfunc_get_default_database () noexcept
  {
    ::GTlsBackendInterface *_peel_iface = reinterpret_cast<::GTlsBackendInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TlsBackend> ())->peek_parent ());
    ::GTlsBackend *_peel_this = reinterpret_cast<::GTlsBackend *> (this);
    ::GTlsDatabase *_peel_return = _peel_iface->get_default_database (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<TlsDatabase>::adopt_ref (reinterpret_cast<TlsDatabase *> (_peel_return));
  }

  peel::RefPtr<TlsDatabase>
  default_vfunc_get_default_database () noexcept
  {
    ::GTlsBackendInterface *_peel_iface = reinterpret_cast<::GTlsBackendInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TlsBackend> ()));
    ::GTlsBackend *_peel_this = reinterpret_cast<::GTlsBackend *> (this);
    ::GTlsDatabase *_peel_return = _peel_iface->get_default_database (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<TlsDatabase>::adopt_ref (reinterpret_cast<TlsDatabase *> (_peel_return));
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_supports_dtls () noexcept
  {
    ::GTlsBackendInterface *_peel_iface = reinterpret_cast<::GTlsBackendInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TlsBackend> ())->peek_parent ());
    ::GTlsBackend *_peel_this = reinterpret_cast<::GTlsBackend *> (this);
    gboolean _peel_return = _peel_iface->supports_dtls (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_supports_dtls () noexcept
  {
    ::GTlsBackendInterface *_peel_iface = reinterpret_cast<::GTlsBackendInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TlsBackend> ()));
    ::GTlsBackend *_peel_this = reinterpret_cast<::GTlsBackend *> (this);
    gboolean _peel_return = _peel_iface->supports_dtls (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_supports_tls () noexcept
  {
    ::GTlsBackendInterface *_peel_iface = reinterpret_cast<::GTlsBackendInterface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<TlsBackend> ())->peek_parent ());
    ::GTlsBackend *_peel_this = reinterpret_cast<::GTlsBackend *> (this);
    gboolean _peel_return = _peel_iface->supports_tls (_peel_this);
    return !!_peel_return;
  }

  bool
  default_vfunc_supports_tls () noexcept
  {
    ::GTlsBackendInterface *_peel_iface = reinterpret_cast<::GTlsBackendInterface *> (GObject::TypeInterface::peek_default (GObject::Type::of<TlsBackend> ()));
    ::GTlsBackend *_peel_this = reinterpret_cast<::GTlsBackend *> (this);
    gboolean _peel_return = _peel_iface->supports_tls (_peel_this);
    return !!_peel_return;
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GTlsBackendInterface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_get_default_database ()
    {
      ::GTlsBackendInterface *klass = reinterpret_cast<::GTlsBackendInterface *> (this);
      klass->get_default_database = +[] (::GTlsBackend *backend) -> ::GTlsDatabase *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (backend);
        peel::RefPtr<TlsDatabase> _peel_return = _peel_this->DerivedClass::vfunc_get_default_database ();
        return reinterpret_cast<::GTlsDatabase *> (std::move (_peel_return).release_ref ());
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_supports_dtls ()
    {
      ::GTlsBackendInterface *klass = reinterpret_cast<::GTlsBackendInterface *> (this);
      klass->supports_dtls = +[] (::GTlsBackend *backend) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (backend);
        bool _peel_return = _peel_this->DerivedClass::vfunc_supports_dtls ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_supports_tls ()
    {
      ::GTlsBackendInterface *klass = reinterpret_cast<::GTlsBackendInterface *> (this);
      klass->supports_tls = +[] (::GTlsBackend *backend) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (backend);
        bool _peel_return = _peel_this->DerivedClass::vfunc_supports_tls ();
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GTlsBackendInterface),
                 "TlsBackend::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GTlsBackendInterface),
                 "TlsBackend::Iface align mismatch");
}; /* interface TlsBackend */
static_assert (sizeof (TlsBackend) == sizeof (GObject::Object),
               "TlsBackend size mismatch");
static_assert (alignof (TlsBackend) == alignof (GObject::Object),
               "TlsBackend align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/Gio/TlsDatabase.h>
