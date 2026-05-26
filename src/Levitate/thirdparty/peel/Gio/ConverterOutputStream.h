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
#include <peel/Gio/FilterOutputStream.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class /* interface */ Converter;
class ConverterOutputStream;
class OutputStream;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::ConverterOutputStream> ()
{
  return g_converter_output_stream_get_type ();
}


namespace Gio
{
class ConverterOutputStream : public FilterOutputStream
/* implements PollableOutputStream */
{
private:
  unsigned char _placeholder[sizeof (::GConverterOutputStream) - sizeof (FilterOutputStream)] peel_no_warn_unused;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ConverterOutputStream () = delete;
  ConverterOutputStream (const ConverterOutputStream &) = delete;
  ConverterOutputStream (ConverterOutputStream &&) = delete;
  ConverterOutputStream &
  operator = (const ConverterOutputStream &) = delete;
  ConverterOutputStream &
  operator = (ConverterOutputStream &&) = delete;
protected:
  ~ConverterOutputStream () = default;
public:

  peel_nonnull_args (1, 2)
  static peel::RefPtr<ConverterOutputStream>
  create (OutputStream *base_stream, Converter *converter) noexcept
  {
    ::GOutputStream *_peel_base_stream = reinterpret_cast<::GOutputStream *> (base_stream);
    ::GConverter *_peel_converter = reinterpret_cast<::GConverter *> (converter);
    ::GOutputStream *_peel_return = g_converter_output_stream_new (_peel_base_stream, _peel_converter);
    peel_assume (_peel_return);
    return peel::RefPtr<ConverterOutputStream>::adopt_ref (reinterpret_cast<ConverterOutputStream *> (_peel_return));
  }

  peel_returns_nonnull
  Converter *
  get_converter () noexcept
  {
    ::GConverterOutputStream *_peel_this = reinterpret_cast<::GConverterOutputStream *> (this);
    ::GConverter *_peel_return = g_converter_output_stream_get_converter (_peel_this);
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
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<ConverterOutputStream> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public FilterOutputStream::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GConverterOutputStreamClass) - sizeof (FilterOutputStream::Class)] peel_no_warn_unused;
  };

  static_assert (sizeof (Class) == sizeof (::GConverterOutputStreamClass),
                 "ConverterOutputStream::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GConverterOutputStreamClass),
                 "ConverterOutputStream::Class align mismatch");
}; /* class ConverterOutputStream */

static_assert (sizeof (ConverterOutputStream) == sizeof (::GConverterOutputStream),
               "ConverterOutputStream size mismatch");
static_assert (alignof (ConverterOutputStream) == alignof (::GConverterOutputStream),
               "ConverterOutputStream align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
