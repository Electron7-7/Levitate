#pragma once

/* Auto-generated, do not modify */
/* Package gdk-pixbuf-2.0 */

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
#include <gdk-pixbuf/gdk-pixbuf.h>

peel_begin_header

namespace peel
{
namespace GdkPixbuf
{
struct PixbufFormat;
struct PixbufModulePattern;
} /* namespace GdkPixbuf */

template<>
inline GObject::Type
GObject::Type::of<GdkPixbuf::PixbufFormat> ()
{
  return gdk_pixbuf_format_get_type ();
}
template<>
struct GObject::Value::Traits<GdkPixbuf::PixbufFormat>
{
  typedef UniquePtr<GdkPixbuf::PixbufFormat> OwnedType;
  typedef const GdkPixbuf::PixbufFormat * UnownedType;

  static const GdkPixbuf::PixbufFormat *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const GdkPixbuf::PixbufFormat *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const GdkPixbuf::PixbufFormat * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<GdkPixbuf::PixbufFormat>
  dup (const ::GValue *value)
  {
    return UniquePtr<GdkPixbuf::PixbufFormat>::adopt_ref (reinterpret_cast<GdkPixbuf::PixbufFormat *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<GdkPixbuf::PixbufFormat> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const GdkPixbuf::PixbufFormat *
  cast_for_create (const GdkPixbuf::PixbufFormat * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<GdkPixbuf::PixbufFormat>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<GdkPixbuf::PixbufFormat> (), basics.flags);
  }
};

template<>
struct UniqueTraits<GdkPixbuf::PixbufFormat>
{
  static void
  free (GdkPixbuf::PixbufFormat *ptr)
  {
    gdk_pixbuf_format_free (reinterpret_cast<::GdkPixbufFormat *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace GdkPixbuf
{
struct PixbufFormat
{
private:
#ifdef GDK_PIXBUF_ENABLE_BACKEND
#endif /* GDK_PIXBUF_ENABLE_BACKEND */
  PixbufFormat () = delete;
  PixbufFormat (const PixbufFormat &) = delete;
  PixbufFormat (PixbufFormat &&) = delete;
  ~PixbufFormat ();

public:
  const char *name;
  PixbufModulePattern *signature;
  const char *domain;
  const char *description;
private:
  gchar **mime_types;
  gchar **extensions;
public:
  uint32_t flags;
  gboolean disabled;
  const char *license;

  peel::UniquePtr<PixbufFormat>
  copy () const noexcept
  {
    const ::GdkPixbufFormat *_peel_this = reinterpret_cast<const ::GdkPixbufFormat *> (this);
    ::GdkPixbufFormat *_peel_return = gdk_pixbuf_format_copy (_peel_this);
    return peel::UniquePtr<PixbufFormat>::adopt_ref (reinterpret_cast<PixbufFormat *> (_peel_return));
  }

  /* free bound as UniqueTraits */

  peel::String
  get_description () noexcept
  {
    ::GdkPixbufFormat *_peel_this = reinterpret_cast<::GdkPixbufFormat *> (this);
    gchar *_peel_return = gdk_pixbuf_format_get_description (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::Strv
  get_extensions () noexcept
  {
    ::GdkPixbufFormat *_peel_this = reinterpret_cast<::GdkPixbufFormat *> (this);
    gchar **_peel_return = gdk_pixbuf_format_get_extensions (_peel_this);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel::String
  get_license () noexcept
  {
    ::GdkPixbufFormat *_peel_this = reinterpret_cast<::GdkPixbufFormat *> (this);
    gchar *_peel_return = gdk_pixbuf_format_get_license (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel::Strv
  get_mime_types () noexcept
  {
    ::GdkPixbufFormat *_peel_this = reinterpret_cast<::GdkPixbufFormat *> (this);
    gchar **_peel_return = gdk_pixbuf_format_get_mime_types (_peel_this);
    return peel::ZTUniquePtr<peel::String[]>::adopt_ref (reinterpret_cast<peel::String *> (_peel_return));
  }

  peel::String
  get_name () noexcept
  {
    ::GdkPixbufFormat *_peel_this = reinterpret_cast<::GdkPixbufFormat *> (this);
    gchar *_peel_return = gdk_pixbuf_format_get_name (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  bool
  is_disabled () noexcept
  {
    ::GdkPixbufFormat *_peel_this = reinterpret_cast<::GdkPixbufFormat *> (this);
    gboolean _peel_return = gdk_pixbuf_format_is_disabled (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  is_save_option_supported (const char *option_key) noexcept
  {
    ::GdkPixbufFormat *_peel_this = reinterpret_cast<::GdkPixbufFormat *> (this);
    gboolean _peel_return = gdk_pixbuf_format_is_save_option_supported (_peel_this, option_key);
    return !!_peel_return;
  }

  bool
  is_scalable () noexcept
  {
    ::GdkPixbufFormat *_peel_this = reinterpret_cast<::GdkPixbufFormat *> (this);
    gboolean _peel_return = gdk_pixbuf_format_is_scalable (_peel_this);
    return !!_peel_return;
  }

  bool
  is_writable () noexcept
  {
    ::GdkPixbufFormat *_peel_this = reinterpret_cast<::GdkPixbufFormat *> (this);
    gboolean _peel_return = gdk_pixbuf_format_is_writable (_peel_this);
    return !!_peel_return;
  }

  void
  set_disabled (bool disabled) noexcept
  {
    ::GdkPixbufFormat *_peel_this = reinterpret_cast<::GdkPixbufFormat *> (this);
    gboolean _peel_disabled = static_cast<gboolean> (disabled);
    gdk_pixbuf_format_set_disabled (_peel_this, _peel_disabled);
  }
}; /* record PixbufFormat */

#ifdef GDK_PIXBUF_ENABLE_BACKEND
static_assert (sizeof (PixbufFormat) == sizeof (::GdkPixbufFormat),
               "PixbufFormat size mismatch");
static_assert (alignof (PixbufFormat) == alignof (::GdkPixbufFormat),
               "PixbufFormat align mismatch");
#endif /* GDK_PIXBUF_ENABLE_BACKEND */

} /* namespace GdkPixbuf */
} /* namespace peel */

peel_end_header
