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

peel_begin_header

namespace peel
{
namespace GLib
{
struct String;
} /* namespace GLib */

namespace Gdk
{
class /* record */ ContentFormats;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::ContentFormats> ()
{
  return gdk_content_formats_get_type ();
}
template<>
struct GObject::Value::Traits<Gdk::ContentFormats>
{
  typedef RefPtr<Gdk::ContentFormats> OwnedType;
  typedef Gdk::ContentFormats * UnownedType;

  static Gdk::ContentFormats *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gdk::ContentFormats *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gdk::ContentFormats * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gdk::ContentFormats>
  dup (const ::GValue *value)
  {
    return RefPtr<Gdk::ContentFormats>::adopt_ref (reinterpret_cast<Gdk::ContentFormats *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gdk::ContentFormats> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gdk::ContentFormats *
  cast_for_create (Gdk::ContentFormats * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gdk::ContentFormats>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gdk::ContentFormats> (), basics.flags);
  }
};

template<>
struct RefTraits<Gdk::ContentFormats, void>
{
  static void
  ref (Gdk::ContentFormats *ptr)
  {
    gdk_content_formats_ref (reinterpret_cast<::GdkContentFormats *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gdk::ContentFormats *ptr)
  {
    gdk_content_formats_unref (reinterpret_cast<::GdkContentFormats *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gdk
{
class /* record */ ContentFormats
{
private:
  ContentFormats () = delete;
  ContentFormats (const ContentFormats &) = delete;
  ContentFormats (ContentFormats &&) = delete;
  ~ContentFormats ();

public:
  class /* record */ Builder;

  static peel::RefPtr<ContentFormats>
  create (peel::ArrayRef<const char *> mime_types) noexcept
  {
    guint _peel_n_mime_types;
    const char **_peel_mime_types = (_peel_n_mime_types = mime_types.size (), const_cast<const char **> (mime_types.data ()));
    ::GdkContentFormats *_peel_return = gdk_content_formats_new (_peel_mime_types, _peel_n_mime_types);
    peel_assume (_peel_return);
    return peel::RefPtr<ContentFormats>::adopt_ref (reinterpret_cast<ContentFormats *> (_peel_return));
  }

  static peel::RefPtr<ContentFormats>
  create_for_gtype (GObject::Type type) noexcept
  {
    ::GdkContentFormats *_peel_return = gdk_content_formats_new_for_gtype (type);
    peel_assume (_peel_return);
    return peel::RefPtr<ContentFormats>::adopt_ref (reinterpret_cast<ContentFormats *> (_peel_return));
  }

  bool
  contain_gtype (GObject::Type type) const noexcept
  {
    const ::GdkContentFormats *_peel_this = reinterpret_cast<const ::GdkContentFormats *> (this);
    gboolean _peel_return = gdk_content_formats_contain_gtype (_peel_this, type);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  contain_mime_type (const char *mime_type) const noexcept
  {
    const ::GdkContentFormats *_peel_this = reinterpret_cast<const ::GdkContentFormats *> (this);
    gboolean _peel_return = gdk_content_formats_contain_mime_type (_peel_this, mime_type);
    return !!_peel_return;
  }

  peel::ArrayRef<const GObject::Type>
  get_gtypes () const noexcept
  {
    gsize _peel_n_gtypes;
    const ::GdkContentFormats *_peel_this = reinterpret_cast<const ::GdkContentFormats *> (this);
    const GType *_peel_return = gdk_content_formats_get_gtypes (_peel_this, &_peel_n_gtypes);
    return peel::ArrayRef<const GObject::Type> (reinterpret_cast<const GObject::Type *> (_peel_return), _peel_n_gtypes);
  }

  peel::ArrayRef<const char * const>
  get_mime_types () const noexcept
  {
    gsize _peel_n_mime_types;
    const ::GdkContentFormats *_peel_this = reinterpret_cast<const ::GdkContentFormats *> (this);
    const char* const *_peel_return = gdk_content_formats_get_mime_types (_peel_this, &_peel_n_mime_types);
    return peel::ArrayRef<const char * const> (reinterpret_cast<const char * const *> (_peel_return), _peel_n_mime_types);
  }

  bool
  is_empty () noexcept
  {
    ::GdkContentFormats *_peel_this = reinterpret_cast<::GdkContentFormats *> (this);
    gboolean _peel_return = gdk_content_formats_is_empty (_peel_this);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  match (const ContentFormats *second) const noexcept
  {
    const ::GdkContentFormats *_peel_this = reinterpret_cast<const ::GdkContentFormats *> (this);
    const ::GdkContentFormats *_peel_second = reinterpret_cast<const ::GdkContentFormats *> (second);
    gboolean _peel_return = gdk_content_formats_match (_peel_this, _peel_second);
    return !!_peel_return;
  }

  peel_arg_in (2) peel_nonnull_args (2)
  GObject::Type
  match_gtype (const ContentFormats *second) const noexcept
  {
    const ::GdkContentFormats *_peel_this = reinterpret_cast<const ::GdkContentFormats *> (this);
    const ::GdkContentFormats *_peel_second = reinterpret_cast<const ::GdkContentFormats *> (second);
    return gdk_content_formats_match_gtype (_peel_this, _peel_second);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  const char *
  match_mime_type (const ContentFormats *second) const noexcept
  {
    const ::GdkContentFormats *_peel_this = reinterpret_cast<const ::GdkContentFormats *> (this);
    const ::GdkContentFormats *_peel_second = reinterpret_cast<const ::GdkContentFormats *> (second);
    return gdk_content_formats_match_mime_type (_peel_this, _peel_second);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  void
  print (GLib::String *string) noexcept
  {
    ::GdkContentFormats *_peel_this = reinterpret_cast<::GdkContentFormats *> (this);
    ::GString *_peel_string = reinterpret_cast<::GString *> (string);
    gdk_content_formats_print (_peel_this, _peel_string);
  }

  /* ref bound as RefTraits */

  peel::String
  to_string () noexcept
  {
    ::GdkContentFormats *_peel_this = reinterpret_cast<::GdkContentFormats *> (this);
    char *_peel_return = gdk_content_formats_to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  static peel::RefPtr<ContentFormats>
  union_ (peel::RefPtr<ContentFormats> first, const ContentFormats *second) noexcept
  {
    ::GdkContentFormats *_peel_first = reinterpret_cast<::GdkContentFormats *> (std::move (first).release_ref ());
    const ::GdkContentFormats *_peel_second = reinterpret_cast<const ::GdkContentFormats *> (second);
    ::GdkContentFormats *_peel_return = gdk_content_formats_union (_peel_first, _peel_second);
    peel_assume (_peel_return);
    return peel::RefPtr<ContentFormats>::adopt_ref (reinterpret_cast<ContentFormats *> (_peel_return));
  }

  static peel::RefPtr<ContentFormats>
  union_deserialize_gtypes (peel::RefPtr<ContentFormats> formats) noexcept
  {
    ::GdkContentFormats *_peel_formats = reinterpret_cast<::GdkContentFormats *> (std::move (formats).release_ref ());
    ::GdkContentFormats *_peel_return = gdk_content_formats_union_deserialize_gtypes (_peel_formats);
    peel_assume (_peel_return);
    return peel::RefPtr<ContentFormats>::adopt_ref (reinterpret_cast<ContentFormats *> (_peel_return));
  }

  static peel::RefPtr<ContentFormats>
  union_deserialize_mime_types (peel::RefPtr<ContentFormats> formats) noexcept
  {
    ::GdkContentFormats *_peel_formats = reinterpret_cast<::GdkContentFormats *> (std::move (formats).release_ref ());
    ::GdkContentFormats *_peel_return = gdk_content_formats_union_deserialize_mime_types (_peel_formats);
    peel_assume (_peel_return);
    return peel::RefPtr<ContentFormats>::adopt_ref (reinterpret_cast<ContentFormats *> (_peel_return));
  }

  static peel::RefPtr<ContentFormats>
  union_serialize_gtypes (peel::RefPtr<ContentFormats> formats) noexcept
  {
    ::GdkContentFormats *_peel_formats = reinterpret_cast<::GdkContentFormats *> (std::move (formats).release_ref ());
    ::GdkContentFormats *_peel_return = gdk_content_formats_union_serialize_gtypes (_peel_formats);
    peel_assume (_peel_return);
    return peel::RefPtr<ContentFormats>::adopt_ref (reinterpret_cast<ContentFormats *> (_peel_return));
  }

  static peel::RefPtr<ContentFormats>
  union_serialize_mime_types (peel::RefPtr<ContentFormats> formats) noexcept
  {
    ::GdkContentFormats *_peel_formats = reinterpret_cast<::GdkContentFormats *> (std::move (formats).release_ref ());
    ::GdkContentFormats *_peel_return = gdk_content_formats_union_serialize_mime_types (_peel_formats);
    peel_assume (_peel_return);
    return peel::RefPtr<ContentFormats>::adopt_ref (reinterpret_cast<ContentFormats *> (_peel_return));
  }

  /* unref bound as RefTraits */

  peel_nonnull_args (1)
  static peel::RefPtr<ContentFormats>
  parse (const char *string) noexcept
  {
    ::GdkContentFormats *_peel_return = gdk_content_formats_parse (string);
    return peel::RefPtr<ContentFormats>::adopt_ref (reinterpret_cast<ContentFormats *> (_peel_return));
  }
}; /* record ContentFormats */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
