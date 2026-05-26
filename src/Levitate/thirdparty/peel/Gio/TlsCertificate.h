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
struct ByteArray;
class /* record */ DateTime;
struct Error;
struct PtrArray;
} /* namespace GLib */

namespace Gio
{
class /* interface */ SocketConnectable;
class TlsCertificate;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::TlsCertificate> ()
{
  return g_tls_certificate_get_type ();
}


namespace Gio
{
class TlsCertificate : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GTlsCertificate) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TlsCertificate () = delete;
  TlsCertificate (const TlsCertificate &) = delete;
  TlsCertificate (TlsCertificate &&) = delete;
  TlsCertificate &
  operator = (const TlsCertificate &) = delete;
  TlsCertificate &
  operator = (TlsCertificate &&) = delete;
protected:
  ~TlsCertificate () = default;
public:
  enum class Flags : std::underlying_type<::GTlsCertificateFlags>::type;
  enum class RequestFlags : std::underlying_type<::GTlsCertificateRequestFlags>::type;

  peel_nonnull_args (1)
  static peel::RefPtr<TlsCertificate>
  create_from_file (const char *file, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GTlsCertificate *_peel_return = g_tls_certificate_new_from_file (file, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<TlsCertificate>::adopt_ref (reinterpret_cast<TlsCertificate *> (_peel_return));
  }

  peel_nonnull_args (1, 2)
  static peel::RefPtr<TlsCertificate>
  create_from_file_with_password (const char *file, const char *password, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GTlsCertificate *_peel_return = g_tls_certificate_new_from_file_with_password (file, password, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<TlsCertificate>::adopt_ref (reinterpret_cast<TlsCertificate *> (_peel_return));
  }

  peel_nonnull_args (1, 2)
  static peel::RefPtr<TlsCertificate>
  create_from_files (const char *cert_file, const char *key_file, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GTlsCertificate *_peel_return = g_tls_certificate_new_from_files (cert_file, key_file, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<TlsCertificate>::adopt_ref (reinterpret_cast<TlsCertificate *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<TlsCertificate>
  create_from_pem (const char *data, gssize length, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GTlsCertificate *_peel_return = g_tls_certificate_new_from_pem (data, length, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<TlsCertificate>::adopt_ref (reinterpret_cast<TlsCertificate *> (_peel_return));
  }

  peel_nonnull_args (1)
  static peel::RefPtr<TlsCertificate>
  create_from_pkcs11_uris (const char *pkcs11_uri, const char *private_key_pkcs11_uri, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GTlsCertificate *_peel_return = g_tls_certificate_new_from_pkcs11_uris (pkcs11_uri, private_key_pkcs11_uri, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<TlsCertificate>::adopt_ref (reinterpret_cast<TlsCertificate *> (_peel_return));
  }

  static peel::RefPtr<TlsCertificate>
  create_from_pkcs12 (peel::ArrayRef<const uint8_t> data, const char *password, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_length;
    const guint8 *_peel_data = (_peel_length = data.size (), reinterpret_cast<const guint8 *> (data.data ()));
    ::GError *_peel_error = nullptr;
    ::GTlsCertificate *_peel_return = g_tls_certificate_new_from_pkcs12 (_peel_data, _peel_length, password, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<TlsCertificate>::adopt_ref (reinterpret_cast<TlsCertificate *> (_peel_return));
  }

  peel_nonnull_args (1)
  static GLib::List<peel::RefPtr<TlsCertificate>>
  list_new_from_file (const char *file, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    GList *_peel_return = g_tls_certificate_list_new_from_file (file, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<peel::RefPtr<TlsCertificate>>::adopt_list (_peel_return);
  }

  /* Unsupported for now: get_dns_names: transfer container, but not an array or a list */
  static void
  get_dns_names (UnsupportedForNowToken);

  /* Unsupported for now: get_ip_addresses: transfer container, but not an array or a list */
  static void
  get_ip_addresses (UnsupportedForNowToken);

  TlsCertificate *
  get_issuer () noexcept
  {
    ::GTlsCertificate *_peel_this = reinterpret_cast<::GTlsCertificate *> (this);
    ::GTlsCertificate *_peel_return = g_tls_certificate_get_issuer (_peel_this);
    return reinterpret_cast<TlsCertificate *> (_peel_return);
  }

  peel::String
  get_issuer_name () noexcept
  {
    ::GTlsCertificate *_peel_this = reinterpret_cast<::GTlsCertificate *> (this);
    gchar *_peel_return = g_tls_certificate_get_issuer_name (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::RefPtr<GLib::DateTime>
  get_not_valid_after () noexcept
  {
    ::GTlsCertificate *_peel_this = reinterpret_cast<::GTlsCertificate *> (this);
    ::GDateTime *_peel_return = g_tls_certificate_get_not_valid_after (_peel_this);
    return peel::RefPtr<GLib::DateTime>::adopt_ref (reinterpret_cast<GLib::DateTime *> (_peel_return));
  }

  peel::RefPtr<GLib::DateTime>
  get_not_valid_before () noexcept
  {
    ::GTlsCertificate *_peel_this = reinterpret_cast<::GTlsCertificate *> (this);
    ::GDateTime *_peel_return = g_tls_certificate_get_not_valid_before (_peel_this);
    return peel::RefPtr<GLib::DateTime>::adopt_ref (reinterpret_cast<GLib::DateTime *> (_peel_return));
  }

  peel::String
  get_subject_name () noexcept
  {
    ::GTlsCertificate *_peel_this = reinterpret_cast<::GTlsCertificate *> (this);
    gchar *_peel_return = g_tls_certificate_get_subject_name (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (2)
  bool
  is_same (TlsCertificate *cert_two) noexcept
  {
    ::GTlsCertificate *_peel_this = reinterpret_cast<::GTlsCertificate *> (this);
    ::GTlsCertificate *_peel_cert_two = reinterpret_cast<::GTlsCertificate *> (cert_two);
    gboolean _peel_return = g_tls_certificate_is_same (_peel_this, _peel_cert_two);
    return !!_peel_return;
  }

  TlsCertificate::Flags
  verify (SocketConnectable *identity, TlsCertificate *trusted_ca) noexcept
  {
    ::GTlsCertificate *_peel_this = reinterpret_cast<::GTlsCertificate *> (this);
    ::GSocketConnectable *_peel_identity = reinterpret_cast<::GSocketConnectable *> (identity);
    ::GTlsCertificate *_peel_trusted_ca = reinterpret_cast<::GTlsCertificate *> (trusted_ca);
    ::GTlsCertificateFlags _peel_return = g_tls_certificate_verify (_peel_this, _peel_identity, _peel_trusted_ca);
    return static_cast<TlsCertificate::Flags> (_peel_return);
  }

  static peel::Property<GLib::ByteArray>
  prop_certificate ()
  {
    return peel::Property<GLib::ByteArray> { "certificate" };
  }

  static peel::Property<const char *>
  prop_certificate_pem ()
  {
    return peel::Property<const char *> { "certificate-pem" };
  }

  static peel::Property<GLib::PtrArray>
  prop_dns_names ()
  {
    return peel::Property<GLib::PtrArray> { "dns-names" };
  }

  static peel::Property<GLib::PtrArray>
  prop_ip_addresses ()
  {
    return peel::Property<GLib::PtrArray> { "ip-addresses" };
  }

  static peel::Property<TlsCertificate>
  prop_issuer ()
  {
    return peel::Property<TlsCertificate> { "issuer" };
  }

  static peel::Property<const char *>
  prop_issuer_name ()
  {
    return peel::Property<const char *> { "issuer-name" };
  }

  static peel::Property<GLib::DateTime>
  prop_not_valid_after ()
  {
    return peel::Property<GLib::DateTime> { "not-valid-after" };
  }

  static peel::Property<GLib::DateTime>
  prop_not_valid_before ()
  {
    return peel::Property<GLib::DateTime> { "not-valid-before" };
  }

  static peel::Property<const char *>
  prop_password ()
  {
    return peel::Property<const char *> { "password" };
  }

  static peel::Property<const char *>
  prop_pkcs11_uri ()
  {
    return peel::Property<const char *> { "pkcs11-uri" };
  }

  static peel::Property<GLib::ByteArray>
  prop_pkcs12_data ()
  {
    return peel::Property<GLib::ByteArray> { "pkcs12-data" };
  }

  static peel::Property<GLib::ByteArray>
  prop_private_key ()
  {
    return peel::Property<GLib::ByteArray> { "private-key" };
  }

  static peel::Property<const char *>
  prop_private_key_pem ()
  {
    return peel::Property<const char *> { "private-key-pem" };
  }

  static peel::Property<const char *>
  prop_private_key_pkcs11_uri ()
  {
    return peel::Property<const char *> { "private-key-pkcs11-uri" };
  }

  static peel::Property<const char *>
  prop_subject_name ()
  {
    return peel::Property<const char *> { "subject-name" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<TlsCertificate> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  TlsCertificate::Flags
  parent_vfunc_verify (SocketConnectable *identity, TlsCertificate *trusted_ca) noexcept
  {
    ::GTlsCertificateClass *_peel_class = reinterpret_cast<::GTlsCertificateClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GTlsCertificate *_peel_this = reinterpret_cast<::GTlsCertificate *> (this);
    ::GSocketConnectable *_peel_identity = reinterpret_cast<::GSocketConnectable *> (identity);
    ::GTlsCertificate *_peel_trusted_ca = reinterpret_cast<::GTlsCertificate *> (trusted_ca);
    ::GTlsCertificateFlags _peel_return = _peel_class->verify (_peel_this, _peel_identity, _peel_trusted_ca);
    return static_cast<TlsCertificate::Flags> (_peel_return);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GTlsCertificateClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_verify ()
    {
      ::GTlsCertificateClass *klass = reinterpret_cast<::GTlsCertificateClass *> (this);
      klass->verify = +[] (::GTlsCertificate *cert, ::GSocketConnectable *identity, ::GTlsCertificate *trusted_ca) -> ::GTlsCertificateFlags
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (cert);
        SocketConnectable *_peel_identity = reinterpret_cast<SocketConnectable *> (identity);
        TlsCertificate *_peel_trusted_ca = reinterpret_cast<TlsCertificate *> (trusted_ca);
        TlsCertificate::Flags _peel_return = _peel_this->DerivedClass::vfunc_verify (_peel_identity, _peel_trusted_ca);
        return static_cast<::GTlsCertificateFlags> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GTlsCertificateClass),
                 "TlsCertificate::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GTlsCertificateClass),
                 "TlsCertificate::Class align mismatch");
}; /* class TlsCertificate */

static_assert (sizeof (TlsCertificate) == sizeof (::GTlsCertificate),
               "TlsCertificate size mismatch");
static_assert (alignof (TlsCertificate) == alignof (::GTlsCertificate),
               "TlsCertificate align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/DateTime.h>
#include <peel/GLib/Error.h>
#include <peel/GLib/PtrArray.h>
