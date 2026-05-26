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

peel_begin_header

namespace peel
{
namespace Pango
{
class /* record */ Language;
enum class Script : std::underlying_type<::PangoScript>::type;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::Language> ()
{
  return pango_language_get_type ();
}
template<>
struct GObject::Value::Traits<Pango::Language>
{
  typedef const Pango::Language * UnownedType;

  static const Pango::Language *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Pango::Language *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Pango::Language * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static const Pango::Language *
  cast_for_create (const Pango::Language * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Pango::Language>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Pango::Language> (), basics.flags);
  }
};


namespace Pango
{
class /* record */ Language
{
private:
  Language () = delete;
  Language (const Language &) = delete;
  Language (Language &&) = delete;
  ~Language ();

public:
  peel_returns_nonnull
  const char *
  get_sample_string () noexcept
  {
    ::PangoLanguage *_peel_this = reinterpret_cast<::PangoLanguage *> (this);
    return pango_language_get_sample_string (_peel_this);
  }

  peel::ArrayRef<const Script>
  get_scripts () noexcept
  {
    int _peel_num_scripts;
    ::PangoLanguage *_peel_this = reinterpret_cast<::PangoLanguage *> (this);
    const ::PangoScript *_peel_return = pango_language_get_scripts (_peel_this, &_peel_num_scripts);
    return peel::ArrayRef<const Script> (reinterpret_cast<const Script *> (_peel_return), _peel_num_scripts);
  }

  bool
  includes_script (Script script) noexcept
  {
    ::PangoLanguage *_peel_this = reinterpret_cast<::PangoLanguage *> (this);
    ::PangoScript _peel_script = static_cast<::PangoScript> (script);
    gboolean _peel_return = pango_language_includes_script (_peel_this, _peel_script);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  matches (const char *range_list) noexcept
  {
    ::PangoLanguage *_peel_this = reinterpret_cast<::PangoLanguage *> (this);
    gboolean _peel_return = pango_language_matches (_peel_this, range_list);
    return !!_peel_return;
  }

  peel_returns_nonnull
  const char *
  to_string () noexcept
  {
    ::PangoLanguage *_peel_this = reinterpret_cast<::PangoLanguage *> (this);
    return pango_language_to_string (_peel_this);
  }

  static Language *
  from_string (const char *language) noexcept
  {
    ::PangoLanguage *_peel_return = pango_language_from_string (language);
    return reinterpret_cast<Language *> (_peel_return);
  }

  peel_returns_nonnull
  static Language *
  get_default () noexcept
  {
    ::PangoLanguage *_peel_return = pango_language_get_default ();
    peel_assume (_peel_return);
    return reinterpret_cast<Language *> (_peel_return);
  }

  static peel::ZTArrayRef<Language *>
  get_preferred () noexcept
  {
    ::PangoLanguage **_peel_return = pango_language_get_preferred ();
    return peel::ZTArrayRef<Language *>::adopt (reinterpret_cast<Language **> (_peel_return));
  }
}; /* record Language */

} /* namespace Pango */
} /* namespace peel */

peel_end_header
