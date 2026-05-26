#pragma once

/* Auto-generated, do not modify */
/* Package gtk4 */

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
#include <gdk/gdk.h>
#include <peel/Gdk/ContentFormats.h>

peel_begin_header

namespace peel
{
namespace Gdk
{
class /* record */ ContentFormats;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::ContentFormats::Builder> ()
{
  return gdk_content_formats_builder_get_type ();
}
template<>
struct GObject::Value::Traits<Gdk::ContentFormats::Builder>
{
  typedef RefPtr<Gdk::ContentFormats::Builder> OwnedType;
  typedef Gdk::ContentFormats::Builder * UnownedType;

  static Gdk::ContentFormats::Builder *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gdk::ContentFormats::Builder *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gdk::ContentFormats::Builder * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gdk::ContentFormats::Builder>
  dup (const ::GValue *value)
  {
    return RefPtr<Gdk::ContentFormats::Builder>::adopt_ref (reinterpret_cast<Gdk::ContentFormats::Builder *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gdk::ContentFormats::Builder> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gdk::ContentFormats::Builder *
  cast_for_create (Gdk::ContentFormats::Builder * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gdk::ContentFormats::Builder>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gdk::ContentFormats::Builder> (), basics.flags);
  }
};

template<>
struct RefTraits<Gdk::ContentFormats::Builder, void>
{
  static void
  ref (Gdk::ContentFormats::Builder *ptr)
  {
    gdk_content_formats_builder_ref (reinterpret_cast<::GdkContentFormatsBuilder *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gdk::ContentFormats::Builder *ptr)
  {
    gdk_content_formats_builder_unref (reinterpret_cast<::GdkContentFormatsBuilder *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gdk
{
class /* record */ ContentFormats::Builder
{
private:
  Builder () = delete;
  Builder (const Builder &) = delete;
  Builder (Builder &&) = delete;
  ~Builder ();

public:
  static peel::RefPtr<ContentFormats::Builder>
  create () noexcept
  {
    ::GdkContentFormatsBuilder *_peel_return = gdk_content_formats_builder_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<ContentFormats::Builder>::adopt_ref (reinterpret_cast<ContentFormats::Builder *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  add_formats (const ContentFormats *formats) noexcept
  {
    ::GdkContentFormatsBuilder *_peel_this = reinterpret_cast<::GdkContentFormatsBuilder *> (this);
    const ::GdkContentFormats *_peel_formats = reinterpret_cast<const ::GdkContentFormats *> (formats);
    gdk_content_formats_builder_add_formats (_peel_this, _peel_formats);
  }

  void
  add_gtype (GObject::Type type) noexcept
  {
    ::GdkContentFormatsBuilder *_peel_this = reinterpret_cast<::GdkContentFormatsBuilder *> (this);
    gdk_content_formats_builder_add_gtype (_peel_this, type);
  }

  peel_nonnull_args (2)
  void
  add_mime_type (const char *mime_type) noexcept
  {
    ::GdkContentFormatsBuilder *_peel_this = reinterpret_cast<::GdkContentFormatsBuilder *> (this);
    gdk_content_formats_builder_add_mime_type (_peel_this, mime_type);
  }

  static peel::RefPtr<ContentFormats>
  free_to_formats (peel::RefPtr<ContentFormats::Builder> builder) noexcept
  {
    ::GdkContentFormatsBuilder *_peel_builder = reinterpret_cast<::GdkContentFormatsBuilder *> (std::move (builder).release_ref ());
    ::GdkContentFormats *_peel_return = gdk_content_formats_builder_free_to_formats (_peel_builder);
    peel_assume (_peel_return);
    return peel::RefPtr<ContentFormats>::adopt_ref (reinterpret_cast<ContentFormats *> (_peel_return));
  }

  /* ref bound as RefTraits */

  peel::RefPtr<ContentFormats>
  to_formats () noexcept
  {
    ::GdkContentFormatsBuilder *_peel_this = reinterpret_cast<::GdkContentFormatsBuilder *> (this);
    ::GdkContentFormats *_peel_return = gdk_content_formats_builder_to_formats (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<ContentFormats>::adopt_ref (reinterpret_cast<ContentFormats *> (_peel_return));
  }

  /* unref bound as RefTraits */
}; /* record ContentFormats::Builder */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
