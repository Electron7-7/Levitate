#pragma once

/* Auto-generated, do not modify */
/* Package glib-2.0 */

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
#include <glib.h>
#include <peel/GLib/Quark.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
struct Quark;
} /* namespace GLib */

template<>
inline GObject::Type
GObject::Type::of<GLib::Error> ()
{
  return g_error_get_type ();
}
template<>
struct GObject::Value::Traits<GLib::Error>
{
  typedef UniquePtr<GLib::Error> OwnedType;
  typedef const GLib::Error * UnownedType;

  static const GLib::Error *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const GLib::Error *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const GLib::Error * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<GLib::Error>
  dup (const ::GValue *value)
  {
    return UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<GLib::Error> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const GLib::Error *
  cast_for_create (const GLib::Error * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GLib::Error>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GLib::Error> (), basics.flags);
  }
};

template<>
struct UniqueTraits<GLib::Error>
{
  static void
  free (GLib::Error *ptr)
  {
    g_error_free (reinterpret_cast<::GError *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GLib
{
struct Error
{
private:
  Error () = delete;
  Error (const Error &) = delete;
  Error (Error &&) = delete;
  ~Error ();

public:
  Quark domain;
  int code;
  const char *message;

  template<typename... Args>
  peel_nonnull_args (3)
  static peel::UniquePtr<Error>
  create (Quark domain, int code, const char *format, Args ...args) noexcept
  {
    ::GError *_peel_return = g_error_new (domain, code, format, args...);
    peel_assume (_peel_return);
    return peel::UniquePtr<Error>::adopt_ref (reinterpret_cast<Error *> (_peel_return));
  }

  peel_nonnull_args (3)
  static peel::UniquePtr<Error>
  create_literal (Quark domain, int code, const char *message) noexcept
  {
    ::GError *_peel_return = g_error_new_literal (domain, code, message);
    peel_assume (_peel_return);
    return peel::UniquePtr<Error>::adopt_ref (reinterpret_cast<Error *> (_peel_return));
  }

  peel_nonnull_args (3)
  static peel::UniquePtr<Error>
  create_valist (Quark domain, int code, const char *format, va_list args) noexcept
  {
    ::GError *_peel_return = g_error_new_valist (domain, code, format, args);
    peel_assume (_peel_return);
    return peel::UniquePtr<Error>::adopt_ref (reinterpret_cast<Error *> (_peel_return));
  }

  peel::UniquePtr<Error>
  copy () const noexcept
  {
    const ::GError *_peel_this = reinterpret_cast<const ::GError *> (this);
    ::GError *_peel_return = g_error_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<Error>::adopt_ref (reinterpret_cast<Error *> (_peel_return));
  }

  /* free bound as UniqueTraits */

  bool
  matches (Quark domain, int code) const noexcept
  {
    const ::GError *_peel_this = reinterpret_cast<const ::GError *> (this);
    gboolean _peel_return = g_error_matches (_peel_this, domain, code);
    return !!_peel_return;
  }

  peel_nonnull_args (1)
  static Quark
  domain_register (const char *error_type_name, size_t error_type_private_size, ::GErrorInitFunc error_type_init, ::GErrorCopyFunc error_type_copy, ::GErrorClearFunc error_type_clear) noexcept
  {
    ::GQuark _peel_return = g_error_domain_register (error_type_name, error_type_private_size, error_type_init, error_type_copy, error_type_clear);
    return static_cast<Quark> (_peel_return);
  }

  peel_nonnull_args (1)
  static Quark
  domain_register_static (const char *error_type_name, size_t error_type_private_size, ::GErrorInitFunc error_type_init, ::GErrorCopyFunc error_type_copy, ::GErrorClearFunc error_type_clear) noexcept
  {
    ::GQuark _peel_return = g_error_domain_register_static (error_type_name, error_type_private_size, error_type_init, error_type_copy, error_type_clear);
    return static_cast<Quark> (_peel_return);
  }
}; /* record Error */

static_assert (sizeof (Error) == sizeof (::GError),
               "Error size mismatch");
static_assert (alignof (Error) == alignof (::GError),
               "Error align mismatch");

} /* namespace GLib */
} /* namespace peel */

peel_end_header
