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
namespace Gio
{
class TlsPassword;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::TlsPassword> ()
{
  return g_tls_password_get_type ();
}


namespace Gio
{
class TlsPassword : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GTlsPassword) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  TlsPassword () = delete;
  TlsPassword (const TlsPassword &) = delete;
  TlsPassword (TlsPassword &&) = delete;
  TlsPassword &
  operator = (const TlsPassword &) = delete;
  TlsPassword &
  operator = (TlsPassword &&) = delete;
protected:
  ~TlsPassword () = default;
public:
  enum class Flags : std::underlying_type<::GTlsPasswordFlags>::type;

  peel_nonnull_args (2)
  static peel::RefPtr<TlsPassword>
  create (TlsPassword::Flags flags, const char *description) noexcept
  {
    ::GTlsPasswordFlags _peel_flags = static_cast<::GTlsPasswordFlags> (flags);
    ::GTlsPassword *_peel_return = g_tls_password_new (_peel_flags, description);
    peel_assume (_peel_return);
    return peel::RefPtr<TlsPassword>::adopt_ref (reinterpret_cast<TlsPassword *> (_peel_return));
  }

  peel_returns_nonnull
  const char *
  get_description () noexcept
  {
    ::GTlsPassword *_peel_this = reinterpret_cast<::GTlsPassword *> (this);
    return g_tls_password_get_description (_peel_this);
  }

  TlsPassword::Flags
  get_flags () noexcept
  {
    ::GTlsPassword *_peel_this = reinterpret_cast<::GTlsPassword *> (this);
    ::GTlsPasswordFlags _peel_return = g_tls_password_get_flags (_peel_this);
    return static_cast<TlsPassword::Flags> (_peel_return);
  }

  peel::ArrayRef<const uint8_t>
  get_value () noexcept
  {
    gsize _peel_length;
    ::GTlsPassword *_peel_this = reinterpret_cast<::GTlsPassword *> (this);
    const guchar *_peel_return = g_tls_password_get_value (_peel_this, &_peel_length);
    peel_assume (_peel_return);
    return peel::ArrayRef<const uint8_t> (reinterpret_cast<const uint8_t *> (_peel_return), _peel_length);
  }

  peel_returns_nonnull
  const char *
  get_warning () noexcept
  {
    ::GTlsPassword *_peel_this = reinterpret_cast<::GTlsPassword *> (this);
    return g_tls_password_get_warning (_peel_this);
  }

  peel_nonnull_args (2)
  void
  set_description (const char *description) noexcept
  {
    ::GTlsPassword *_peel_this = reinterpret_cast<::GTlsPassword *> (this);
    g_tls_password_set_description (_peel_this, description);
  }

  void
  set_flags (TlsPassword::Flags flags) noexcept
  {
    ::GTlsPassword *_peel_this = reinterpret_cast<::GTlsPassword *> (this);
    ::GTlsPasswordFlags _peel_flags = static_cast<::GTlsPasswordFlags> (flags);
    g_tls_password_set_flags (_peel_this, _peel_flags);
  }

  void
  set_value (peel::ArrayRef<const uint8_t> value) noexcept
  {
    gssize _peel_length;
    ::GTlsPassword *_peel_this = reinterpret_cast<::GTlsPassword *> (this);
    const guchar *_peel_value = (_peel_length = value.size (), reinterpret_cast<const guchar *> (value.data ()));
    g_tls_password_set_value (_peel_this, _peel_value, _peel_length);
  }

  void
  set_value_full (peel::ArrayRef<uint8_t> value, ::GDestroyNotify destroy) noexcept
  {
    gssize _peel_length;
    ::GTlsPassword *_peel_this = reinterpret_cast<::GTlsPassword *> (this);
    guchar *_peel_value = (_peel_length = value.size (), reinterpret_cast<guchar *> (value.data ()));
    g_tls_password_set_value_full (_peel_this, _peel_value, _peel_length, destroy);
  }

  peel_nonnull_args (2)
  void
  set_warning (const char *warning) noexcept
  {
    ::GTlsPassword *_peel_this = reinterpret_cast<::GTlsPassword *> (this);
    g_tls_password_set_warning (_peel_this, warning);
  }

  static peel::Property<const char *>
  prop_description ()
  {
    return peel::Property<const char *> { "description" };
  }

  static peel::Property<TlsPassword::Flags>
  prop_flags ()
  {
    return peel::Property<TlsPassword::Flags> { "flags" };
  }

  static peel::Property<const char *>
  prop_warning ()
  {
    return peel::Property<const char *> { "warning" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<TlsPassword> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  peel_returns_nonnull
  const char *
  parent_vfunc_get_default_warning () noexcept
  {
    ::GTlsPasswordClass *_peel_class = reinterpret_cast<::GTlsPasswordClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GTlsPassword *_peel_this = reinterpret_cast<::GTlsPassword *> (this);
    return _peel_class->get_default_warning (_peel_this);
  }

  template<typename DerivedClass>
  peel::ArrayRef<const uint8_t>
  parent_vfunc_get_value () noexcept
  {
    ::GTlsPasswordClass *_peel_class = reinterpret_cast<::GTlsPasswordClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gsize _peel_length;
    ::GTlsPassword *_peel_this = reinterpret_cast<::GTlsPassword *> (this);
    const guchar *_peel_return = _peel_class->get_value (_peel_this, &_peel_length);
    peel_assume (_peel_return);
    return peel::ArrayRef<const uint8_t> (reinterpret_cast<const uint8_t *> (_peel_return), _peel_length);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_set_value (peel::ArrayRef<uint8_t> value, ::GDestroyNotify destroy) noexcept
  {
    ::GTlsPasswordClass *_peel_class = reinterpret_cast<::GTlsPasswordClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    gssize _peel_length;
    ::GTlsPassword *_peel_this = reinterpret_cast<::GTlsPassword *> (this);
    guchar *_peel_value = (_peel_length = value.size (), reinterpret_cast<guchar *> (value.data ()));
    _peel_class->set_value (_peel_this, _peel_value, _peel_length, destroy);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GTlsPasswordClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_get_default_warning ()
    {
      ::GTlsPasswordClass *klass = reinterpret_cast<::GTlsPasswordClass *> (this);
      klass->get_default_warning = +[] (::GTlsPassword *password) -> const gchar *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (password);
        return _peel_this->DerivedClass::vfunc_get_default_warning ();
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_get_value ()
    {
      ::GTlsPasswordClass *klass = reinterpret_cast<::GTlsPasswordClass *> (this);
      klass->get_value = +[] (::GTlsPassword *password, gsize *length) -> const guchar *
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (password);
        peel::ArrayRef<const uint8_t> _peel_return = _peel_this->DerivedClass::vfunc_get_value ();
        return ((length ? (*length = _peel_return.size ()) : 0), reinterpret_cast<const guchar *> (_peel_return.data ()));
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_set_value ()
    {
      ::GTlsPasswordClass *klass = reinterpret_cast<::GTlsPasswordClass *> (this);
      klass->set_value = +[] (::GTlsPassword *password, guchar *value, gssize length, ::GDestroyNotify destroy) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (password);
        peel::ArrayRef<uint8_t> _peel_value = peel::ArrayRef<uint8_t> (reinterpret_cast<uint8_t *> (value), length);
        _peel_this->DerivedClass::vfunc_set_value (_peel_value, destroy);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GTlsPasswordClass),
                 "TlsPassword::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GTlsPasswordClass),
                 "TlsPassword::Class align mismatch");
}; /* class TlsPassword */

static_assert (sizeof (TlsPassword) == sizeof (::GTlsPassword),
               "TlsPassword size mismatch");
static_assert (alignof (TlsPassword) == alignof (::GTlsPassword),
               "TlsPassword align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
