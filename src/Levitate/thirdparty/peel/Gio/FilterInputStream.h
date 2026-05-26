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
#include <peel/Gio/InputStream.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class FilterInputStream;
class InputStream;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::FilterInputStream> ()
{
  return g_filter_input_stream_get_type ();
}


namespace Gio
{
class FilterInputStream : public InputStream
{
private:
  unsigned char _placeholder[sizeof (::GFilterInputStream) - sizeof (InputStream)] peel_no_warn_unused;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FilterInputStream () = delete;
  FilterInputStream (const FilterInputStream &) = delete;
  FilterInputStream (FilterInputStream &&) = delete;
  FilterInputStream &
  operator = (const FilterInputStream &) = delete;
  FilterInputStream &
  operator = (FilterInputStream &&) = delete;
protected:
  ~FilterInputStream () = default;
public:

  peel_returns_nonnull
  InputStream *
  get_base_stream () noexcept
  {
    ::GFilterInputStream *_peel_this = reinterpret_cast<::GFilterInputStream *> (this);
    ::GInputStream *_peel_return = g_filter_input_stream_get_base_stream (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<InputStream *> (_peel_return);
  }

  bool
  get_close_base_stream () noexcept
  {
    ::GFilterInputStream *_peel_this = reinterpret_cast<::GFilterInputStream *> (this);
    gboolean _peel_return = g_filter_input_stream_get_close_base_stream (_peel_this);
    return !!_peel_return;
  }

  void
  set_close_base_stream (bool close_base) noexcept
  {
    ::GFilterInputStream *_peel_this = reinterpret_cast<::GFilterInputStream *> (this);
    gboolean _peel_close_base = static_cast<gboolean> (close_base);
    g_filter_input_stream_set_close_base_stream (_peel_this, _peel_close_base);
  }

  static peel::Property<InputStream>
  prop_base_stream ()
  {
    return peel::Property<InputStream> { "base-stream" };
  }

  static peel::Property<bool>
  prop_close_base_stream ()
  {
    return peel::Property<bool> { "close-base-stream" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<FilterInputStream> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public InputStream::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GFilterInputStreamClass) - sizeof (InputStream::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GFilterInputStreamClass),
                 "FilterInputStream::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GFilterInputStreamClass),
                 "FilterInputStream::Class align mismatch");
}; /* class FilterInputStream */

static_assert (sizeof (FilterInputStream) == sizeof (::GFilterInputStream),
               "FilterInputStream size mismatch");
static_assert (alignof (FilterInputStream) == alignof (::GFilterInputStream),
               "FilterInputStream align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
