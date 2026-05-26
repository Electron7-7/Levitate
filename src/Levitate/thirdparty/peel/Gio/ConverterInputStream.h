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
#include <peel/Gio/FilterInputStream.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class /* interface */ Converter;
class ConverterInputStream;
class InputStream;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::ConverterInputStream> ()
{
  return g_converter_input_stream_get_type ();
}


namespace Gio
{
class ConverterInputStream : public FilterInputStream
/* implements PollableInputStream */
{
private:
  unsigned char _placeholder[sizeof (::GConverterInputStream) - sizeof (FilterInputStream)] peel_no_warn_unused;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ConverterInputStream () = delete;
  ConverterInputStream (const ConverterInputStream &) = delete;
  ConverterInputStream (ConverterInputStream &&) = delete;
  ConverterInputStream &
  operator = (const ConverterInputStream &) = delete;
  ConverterInputStream &
  operator = (ConverterInputStream &&) = delete;
protected:
  ~ConverterInputStream () = default;
public:

  peel_nonnull_args (1, 2)
  static peel::RefPtr<ConverterInputStream>
  create (InputStream *base_stream, Converter *converter) noexcept
  {
    ::GInputStream *_peel_base_stream = reinterpret_cast<::GInputStream *> (base_stream);
    ::GConverter *_peel_converter = reinterpret_cast<::GConverter *> (converter);
    ::GInputStream *_peel_return = g_converter_input_stream_new (_peel_base_stream, _peel_converter);
    peel_assume (_peel_return);
    return peel::RefPtr<ConverterInputStream>::adopt_ref (reinterpret_cast<ConverterInputStream *> (_peel_return));
  }

  peel_returns_nonnull
  Converter *
  get_converter () noexcept
  {
    ::GConverterInputStream *_peel_this = reinterpret_cast<::GConverterInputStream *> (this);
    ::GConverter *_peel_return = g_converter_input_stream_get_converter (_peel_this);
    peel_assume (_peel_return);
    return reinterpret_cast<Converter *> (_peel_return);
  }

  static peel::Property<Converter>
  prop_converter ()
  {
    return peel::Property<Converter> { "converter" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<ConverterInputStream> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public FilterInputStream::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GConverterInputStreamClass) - sizeof (FilterInputStream::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GConverterInputStreamClass),
                 "ConverterInputStream::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GConverterInputStreamClass),
                 "ConverterInputStream::Class align mismatch");
}; /* class ConverterInputStream */

static_assert (sizeof (ConverterInputStream) == sizeof (::GConverterInputStream),
               "ConverterInputStream size mismatch");
static_assert (alignof (ConverterInputStream) == alignof (::GConverterInputStream),
               "ConverterInputStream align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
