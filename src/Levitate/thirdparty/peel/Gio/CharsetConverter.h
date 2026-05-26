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
#include <peel/Gio/Converter.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace Gio
{
class CharsetConverter;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::CharsetConverter> ()
{
  return g_charset_converter_get_type ();
}


namespace Gio
{
class CharsetConverter : public Converter
/* non-derivable */
/* extends GObject::Object */
/* implements Converter, Initable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CharsetConverter () = delete;
  CharsetConverter (const CharsetConverter &) = delete;
  CharsetConverter (CharsetConverter &&) = delete;
  CharsetConverter &
  operator = (const CharsetConverter &) = delete;
  CharsetConverter &
  operator = (CharsetConverter &&) = delete;
  ~CharsetConverter () = delete;
public:

  peel_nonnull_args (1, 2)
  static peel::RefPtr<CharsetConverter>
  create (const char *to_charset, const char *from_charset, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GError *_peel_error = nullptr;
    ::GCharsetConverter *_peel_return = g_charset_converter_new (to_charset, from_charset, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<CharsetConverter>::adopt_ref (reinterpret_cast<CharsetConverter *> (_peel_return));
  }

  unsigned
  get_num_fallbacks () noexcept
  {
    ::GCharsetConverter *_peel_this = reinterpret_cast<::GCharsetConverter *> (this);
    return g_charset_converter_get_num_fallbacks (_peel_this);
  }

  bool
  get_use_fallback () noexcept
  {
    ::GCharsetConverter *_peel_this = reinterpret_cast<::GCharsetConverter *> (this);
    gboolean _peel_return = g_charset_converter_get_use_fallback (_peel_this);
    return !!_peel_return;
  }

  void
  set_use_fallback (bool use_fallback) noexcept
  {
    ::GCharsetConverter *_peel_this = reinterpret_cast<::GCharsetConverter *> (this);
    gboolean _peel_use_fallback = static_cast<gboolean> (use_fallback);
    g_charset_converter_set_use_fallback (_peel_this, _peel_use_fallback);
  }

  static peel::Property<const char *>
  prop_from_charset ()
  {
    return peel::Property<const char *> { "from-charset" };
  }

  static peel::Property<const char *>
  prop_to_charset ()
  {
    return peel::Property<const char *> { "to-charset" };
  }

  static peel::Property<bool>
  prop_use_fallback ()
  {
    return peel::Property<bool> { "use-fallback" };
  }

  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GCharsetConverterClass),
                 "CharsetConverter::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GCharsetConverterClass),
                 "CharsetConverter::Class align mismatch");
}; /* class CharsetConverter */

} /* namespace Gio */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
