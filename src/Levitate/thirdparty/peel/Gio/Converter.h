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
#include <peel/GObject/TypeInterface.h>

peel_begin_header

namespace peel
{
namespace GLib
{
class /* record */ Bytes;
struct Error;
} /* namespace GLib */

namespace Gio
{
class /* interface */ Converter;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::Converter> ()
{
  return g_converter_get_type ();
}


namespace Gio
{
class /* interface */ Converter : public GObject::Object
/* requires GObject::Object */
{
private:
  Converter () = delete;
  Converter (const Converter &) = delete;
  Converter (Converter &&) = delete;

  Converter &
  operator = (const Converter &) = delete;
  Converter &
  operator = (Converter &&) = delete;

protected:
  ~Converter () = default;

public:
  enum class Flags : std::underlying_type<::GConverterFlags>::type;
  enum class Result : std::underlying_type<::GConverterResult>::type;

  peel_arg_out (5) peel_arg_out (6) peel_nonnull_args (5, 6)
  Converter::Result
  convert (peel::ArrayRef<uint8_t> inbuf, peel::ArrayRef<uint8_t> outbuf, Converter::Flags flags, size_t *bytes_read, size_t *bytes_written, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_inbuf_size;
    gsize _peel_outbuf_size;
    ::GConverter *_peel_this = reinterpret_cast<::GConverter *> (this);
    void *_peel_inbuf = (_peel_inbuf_size = inbuf.size (), reinterpret_cast<void *> (inbuf.data ()));
    void *_peel_outbuf = (_peel_outbuf_size = outbuf.size (), reinterpret_cast<void *> (outbuf.data ()));
    ::GConverterFlags _peel_flags = static_cast<::GConverterFlags> (flags);
    gsize *_peel_bytes_read = reinterpret_cast<gsize *> (bytes_read);
    gsize *_peel_bytes_written = reinterpret_cast<gsize *> (bytes_written);
    ::GError *_peel_error = nullptr;
    ::GConverterResult _peel_return = g_converter_convert (_peel_this, _peel_inbuf, _peel_inbuf_size, _peel_outbuf, _peel_outbuf_size, _peel_flags, _peel_bytes_read, _peel_bytes_written, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<Converter::Result> (_peel_return);
  }

  peel_arg_in (2) peel_nonnull_args (2)
  peel::RefPtr<GLib::Bytes>
  convert_bytes (GLib::Bytes *bytes, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GConverter *_peel_this = reinterpret_cast<::GConverter *> (this);
    ::GBytes *_peel_bytes = reinterpret_cast<::GBytes *> (bytes);
    ::GError *_peel_error = nullptr;
    ::GBytes *_peel_return = g_converter_convert_bytes (_peel_this, _peel_bytes, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<GLib::Bytes>::adopt_ref (reinterpret_cast<GLib::Bytes *> (_peel_return));
  }

  void
  reset () noexcept
  {
    ::GConverter *_peel_this = reinterpret_cast<::GConverter *> (this);
    g_converter_reset (_peel_this);
  }

  template<typename DerivedClass>
  peel_arg_out (5) peel_arg_out (6) peel_nonnull_args (5, 6)
  Converter::Result
  parent_vfunc_convert (peel::ArrayRef<uint8_t> inbuf, peel::ArrayRef<uint8_t> outbuf, Converter::Flags flags, size_t *bytes_read, size_t *bytes_written, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GConverterIface *_peel_iface = reinterpret_cast<::GConverterIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Converter> ())->peek_parent ());
    gsize _peel_inbuf_size;
    gsize _peel_outbuf_size;
    ::GConverter *_peel_this = reinterpret_cast<::GConverter *> (this);
    void *_peel_inbuf = (_peel_inbuf_size = inbuf.size (), reinterpret_cast<void *> (inbuf.data ()));
    void *_peel_outbuf = (_peel_outbuf_size = outbuf.size (), reinterpret_cast<void *> (outbuf.data ()));
    ::GConverterFlags _peel_flags = static_cast<::GConverterFlags> (flags);
    gsize *_peel_bytes_read = reinterpret_cast<gsize *> (bytes_read);
    gsize *_peel_bytes_written = reinterpret_cast<gsize *> (bytes_written);
    ::GError *_peel_error = nullptr;
    ::GConverterResult _peel_return = _peel_iface->convert (_peel_this, _peel_inbuf, _peel_inbuf_size, _peel_outbuf, _peel_outbuf_size, _peel_flags, _peel_bytes_read, _peel_bytes_written, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<Converter::Result> (_peel_return);
  }

  peel_arg_out (5) peel_arg_out (6) peel_nonnull_args (5, 6)
  Converter::Result
  default_vfunc_convert (peel::ArrayRef<uint8_t> inbuf, peel::ArrayRef<uint8_t> outbuf, Converter::Flags flags, size_t *bytes_read, size_t *bytes_written, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GConverterIface *_peel_iface = reinterpret_cast<::GConverterIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Converter> ()));
    gsize _peel_inbuf_size;
    gsize _peel_outbuf_size;
    ::GConverter *_peel_this = reinterpret_cast<::GConverter *> (this);
    void *_peel_inbuf = (_peel_inbuf_size = inbuf.size (), reinterpret_cast<void *> (inbuf.data ()));
    void *_peel_outbuf = (_peel_outbuf_size = outbuf.size (), reinterpret_cast<void *> (outbuf.data ()));
    ::GConverterFlags _peel_flags = static_cast<::GConverterFlags> (flags);
    gsize *_peel_bytes_read = reinterpret_cast<gsize *> (bytes_read);
    gsize *_peel_bytes_written = reinterpret_cast<gsize *> (bytes_written);
    ::GError *_peel_error = nullptr;
    ::GConverterResult _peel_return = _peel_iface->convert (_peel_this, _peel_inbuf, _peel_inbuf_size, _peel_outbuf, _peel_outbuf_size, _peel_flags, _peel_bytes_read, _peel_bytes_written, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return static_cast<Converter::Result> (_peel_return);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_reset () noexcept
  {
    ::GConverterIface *_peel_iface = reinterpret_cast<::GConverterIface *> (GObject::TypeClass::peek<DerivedClass> ()->peek_interface (GObject::Type::of<Converter> ())->peek_parent ());
    ::GConverter *_peel_this = reinterpret_cast<::GConverter *> (this);
    _peel_iface->reset (_peel_this);
  }

  void
  default_vfunc_reset () noexcept
  {
    ::GConverterIface *_peel_iface = reinterpret_cast<::GConverterIface *> (GObject::TypeInterface::peek_default (GObject::Type::of<Converter> ()));
    ::GConverter *_peel_this = reinterpret_cast<::GConverter *> (this);
    _peel_iface->reset (_peel_this);
  }

  class Iface : public GObject::TypeInterface
  {
  private:
    Iface () = delete;
    Iface (const Iface &) = delete;
    Iface (Iface &&) = delete;

    unsigned char _placeholder[sizeof (::GConverterIface) - sizeof (GObject::TypeInterface)] peel_no_warn_unused;
  public:
    template<typename DerivedClass>
    void
    override_vfunc_convert ()
    {
      ::GConverterIface *klass = reinterpret_cast<::GConverterIface *> (this);
      klass->convert = +[] (::GConverter *converter, void *inbuf, gsize inbuf_size, void *outbuf, gsize outbuf_size, ::GConverterFlags flags, gsize *bytes_read, gsize *bytes_written, ::GError **error) -> ::GConverterResult
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (converter);
        peel::ArrayRef<uint8_t> _peel_inbuf = peel::ArrayRef<uint8_t> (reinterpret_cast<uint8_t *> (inbuf), inbuf_size);
        peel::ArrayRef<uint8_t> _peel_outbuf = peel::ArrayRef<uint8_t> (reinterpret_cast<uint8_t *> (outbuf), outbuf_size);
        Converter::Flags _peel_flags = static_cast<Converter::Flags> (flags);
        peel::UniquePtr<GLib::Error> _peel_error;
        Converter::Result _peel_return = _peel_this->DerivedClass::vfunc_convert (_peel_inbuf, _peel_outbuf, _peel_flags, bytes_read, bytes_written, error ? &_peel_error : nullptr);
        if (error)
          *error = reinterpret_cast<::GError *> (std::move (_peel_error).release_ref ());
        return static_cast<::GConverterResult> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_reset ()
    {
      ::GConverterIface *klass = reinterpret_cast<::GConverterIface *> (this);
      klass->reset = +[] (::GConverter *converter) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (converter);
        _peel_this->DerivedClass::vfunc_reset ();
      };
    }
  };

  static_assert (sizeof (Iface) == sizeof (::GConverterIface),
                 "Converter::Iface size mismatch");
  static_assert (alignof (Iface) == alignof (::GConverterIface),
                 "Converter::Iface align mismatch");
}; /* interface Converter */
static_assert (sizeof (Converter) == sizeof (GObject::Object),
               "Converter size mismatch");
static_assert (alignof (Converter) == alignof (GObject::Object),
               "Converter align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Bytes.h>
#include <peel/GLib/Error.h>
