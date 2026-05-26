#pragma once

/* Auto-generated, do not modify */
/* Package pango */

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
#include <pango/pango.h>
#include <peel/Pango/Fontset.h>

peel_begin_header

namespace peel
{
namespace Pango
{
class Font;
class FontsetSimple;
class /* record */ Language;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::FontsetSimple> ()
{
  return pango_fontset_simple_get_type ();
}


namespace Pango
{
class FontsetSimple : public Fontset
/* non-derivable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FontsetSimple () = delete;
  FontsetSimple (const FontsetSimple &) = delete;
  FontsetSimple (FontsetSimple &&) = delete;
  FontsetSimple &
  operator = (const FontsetSimple &) = delete;
  FontsetSimple &
  operator = (FontsetSimple &&) = delete;
  ~FontsetSimple () = delete;
public:

  peel_arg_in (1) peel_nonnull_args (1)
  static peel::RefPtr<FontsetSimple>
  create (Language *language) noexcept
  {
    ::PangoLanguage *_peel_language = reinterpret_cast<::PangoLanguage *> (language);
    ::PangoFontsetSimple *_peel_return = pango_fontset_simple_new (_peel_language);
    peel_assume (_peel_return);
    return peel::RefPtr<FontsetSimple>::adopt_ref (reinterpret_cast<FontsetSimple *> (_peel_return));
  }

  void
  append (peel::RefPtr<Font> font) noexcept
  {
    ::PangoFontsetSimple *_peel_this = reinterpret_cast<::PangoFontsetSimple *> (this);
    ::PangoFont *_peel_font = reinterpret_cast<::PangoFont *> (std::move (font).release_ref ());
    pango_fontset_simple_append (_peel_this, _peel_font);
  }

  int
  size () noexcept
  {
    ::PangoFontsetSimple *_peel_this = reinterpret_cast<::PangoFontsetSimple *> (this);
    return pango_fontset_simple_size (_peel_this);
  }

  class Class : public Fontset::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

}; /* class FontsetSimple */

} /* namespace Pango */
} /* namespace peel */

peel_end_header

#include <peel/Pango/Font.h>
