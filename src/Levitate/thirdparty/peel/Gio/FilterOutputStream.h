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
#include <peel/Gio/OutputStream.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class FilterOutputStream;
class OutputStream;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::FilterOutputStream> ()
{
  return g_filter_output_stream_get_type ();
}


namespace Gio
{
class FilterOutputStream : public OutputStream
{
private:
  unsigned char _placeholder[sizeof (::GFilterOutputStream) - sizeof (OutputStream)] peel_no_warn_unused;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FilterOutputStream () = delete;
  FilterOutputStream (const FilterOutputStream &) = delete;
  FilterOutputStream (FilterOutputStream &&) = delete;
  FilterOutputStream &
  operator = (const FilterOutputStream &) = delete;
  FilterOutputStream &
  operator = (FilterOutputStream &&) = delete;
protected:
  ~FilterOutputStream () = default;
public:

  peel_returns_nonnull
  OutputStream *
  get_base_stream () noexcept
  {
    ::GFilterOutputStream *_peel_this = reinterpret_cast<::GFilterOutputStream *> (this);
    ::GOutputStream *_peel_return = g_filter_output_stream_get_base_stream (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<OutputStream *> (_peel_return);
  }

  bool
  get_close_base_stream () noexcept
  {
    ::GFilterOutputStream *_peel_this = reinterpret_cast<::GFilterOutputStream *> (this);
    gboolean _peel_return = g_filter_output_stream_get_close_base_stream (_peel_this);
    return !!_peel_return;
  }

  void
  set_close_base_stream (bool close_base) noexcept
  {
    ::GFilterOutputStream *_peel_this = reinterpret_cast<::GFilterOutputStream *> (this);
    gboolean _peel_close_base = static_cast<gboolean> (close_base);
    g_filter_output_stream_set_close_base_stream (_peel_this, _peel_close_base);
  }

  static peel::Property<OutputStream>
  prop_base_stream ()
  {
    return peel::Property<OutputStream> { "base-stream" };
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
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<FilterOutputStream> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public OutputStream::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GFilterOutputStreamClass) - sizeof (OutputStream::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GFilterOutputStreamClass),
                 "FilterOutputStream::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GFilterOutputStreamClass),
                 "FilterOutputStream::Class align mismatch");
}; /* class FilterOutputStream */

static_assert (sizeof (FilterOutputStream) == sizeof (::GFilterOutputStream),
               "FilterOutputStream size mismatch");
static_assert (alignof (FilterOutputStream) == alignof (::GFilterOutputStream),
               "FilterOutputStream align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
