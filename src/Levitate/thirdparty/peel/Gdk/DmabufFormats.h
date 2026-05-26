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
namespace Gdk
{
class /* record */ DmabufFormats;
} /* namespace Gdk */

template<>
inline GObject::Type
GObject::Type::of<Gdk::DmabufFormats> ()
{
  return gdk_dmabuf_formats_get_type ();
}
template<>
struct GObject::Value::Traits<Gdk::DmabufFormats>
{
  typedef RefPtr<Gdk::DmabufFormats> OwnedType;
  typedef Gdk::DmabufFormats * UnownedType;

  static Gdk::DmabufFormats *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Gdk::DmabufFormats *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Gdk::DmabufFormats * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Gdk::DmabufFormats>
  dup (const ::GValue *value)
  {
    return RefPtr<Gdk::DmabufFormats>::adopt_ref (reinterpret_cast<Gdk::DmabufFormats *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Gdk::DmabufFormats> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Gdk::DmabufFormats *
  cast_for_create (Gdk::DmabufFormats * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Gdk::DmabufFormats>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Gdk::DmabufFormats> (), basics.flags);
  }
};

template<>
struct RefTraits<Gdk::DmabufFormats, void>
{
  static void
  ref (Gdk::DmabufFormats *ptr)
  {
    gdk_dmabuf_formats_ref (reinterpret_cast<::GdkDmabufFormats *> (ptr));
  }

  constexpr static
  bool can_ref_null = false;

  static void
  unref (Gdk::DmabufFormats *ptr)
  {
    gdk_dmabuf_formats_unref (reinterpret_cast<::GdkDmabufFormats *> (ptr));
  }

  constexpr static
  bool can_unref_null = false;
};


namespace Gdk
{
class /* record */ DmabufFormats
{
private:
  DmabufFormats () = delete;
  DmabufFormats (const DmabufFormats &) = delete;
  DmabufFormats (DmabufFormats &&) = delete;
  ~DmabufFormats ();

public:
  bool
  contains (uint32_t fourcc, uint64_t modifier) noexcept
  {
    ::GdkDmabufFormats *_peel_this = reinterpret_cast<::GdkDmabufFormats *> (this);
    gboolean _peel_return = gdk_dmabuf_formats_contains (_peel_this, fourcc, modifier);
    return !!_peel_return;
  }

  peel_arg_in (2)
  bool
  equal (const DmabufFormats *formats2) const noexcept
  {
    const ::GdkDmabufFormats *_peel_this = reinterpret_cast<const ::GdkDmabufFormats *> (this);
    const ::GdkDmabufFormats *_peel_formats2 = reinterpret_cast<const ::GdkDmabufFormats *> (formats2);
    gboolean _peel_return = gdk_dmabuf_formats_equal (_peel_this, _peel_formats2);
    return !!_peel_return;
  }

  peel_arg_out (3) peel_arg_out (4) peel_nonnull_args (3, 4)
  void
  get_format (size_t idx, uint32_t *fourcc, uint64_t *modifier) noexcept
  {
    ::GdkDmabufFormats *_peel_this = reinterpret_cast<::GdkDmabufFormats *> (this);
    guint32 *_peel_fourcc = reinterpret_cast<guint32 *> (fourcc);
    guint64 *_peel_modifier = reinterpret_cast<guint64 *> (modifier);
    gdk_dmabuf_formats_get_format (_peel_this, idx, _peel_fourcc, _peel_modifier);
  }

  size_t
  get_n_formats () noexcept
  {
    ::GdkDmabufFormats *_peel_this = reinterpret_cast<::GdkDmabufFormats *> (this);
    return gdk_dmabuf_formats_get_n_formats (_peel_this);
  }

  /* ref bound as RefTraits */

  /* unref bound as RefTraits */
}; /* record DmabufFormats */

} /* namespace Gdk */
} /* namespace peel */

peel_end_header
