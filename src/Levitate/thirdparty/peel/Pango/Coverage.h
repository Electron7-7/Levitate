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
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Pango
{
class Coverage;
enum class CoverageLevel : std::underlying_type<::PangoCoverageLevel>::type;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::Coverage> ()
{
  return pango_coverage_get_type ();
}


namespace Pango
{
class Coverage : public GObject::Object
/* non-derivable */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Coverage () = delete;
  Coverage (const Coverage &) = delete;
  Coverage (Coverage &&) = delete;
  Coverage &
  operator = (const Coverage &) = delete;
  Coverage &
  operator = (Coverage &&) = delete;
  ~Coverage () = delete;
public:

  static peel::RefPtr<Coverage>
  create () noexcept
  {
    ::PangoCoverage *_peel_return = pango_coverage_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<Coverage>::adopt_ref (reinterpret_cast<Coverage *> (_peel_return));
  }

  static peel::RefPtr<Coverage>
  from_bytes (peel::ArrayRef<uint8_t> bytes) noexcept
  {
    int _peel_n_bytes;
    guchar *_peel_bytes = (_peel_n_bytes = bytes.size (), reinterpret_cast<guchar *> (bytes.data ()));
    ::PangoCoverage *_peel_return = pango_coverage_from_bytes (_peel_bytes, _peel_n_bytes);
    return peel::RefPtr<Coverage>::adopt_ref (reinterpret_cast<Coverage *> (_peel_return));
  }

  peel::RefPtr<Coverage>
  copy () noexcept
  {
    ::PangoCoverage *_peel_this = reinterpret_cast<::PangoCoverage *> (this);
    ::PangoCoverage *_peel_return = pango_coverage_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Coverage>::adopt_ref (reinterpret_cast<Coverage *> (_peel_return));
  }

  CoverageLevel
  get (int index_) noexcept
  {
    ::PangoCoverage *_peel_this = reinterpret_cast<::PangoCoverage *> (this);
    ::PangoCoverageLevel _peel_return = pango_coverage_get (_peel_this, index_);
    return static_cast<CoverageLevel> (_peel_return);
  }

  peel_nonnull_args (2)
  void
  max_ (Coverage *other) noexcept
  {
    ::PangoCoverage *_peel_this = reinterpret_cast<::PangoCoverage *> (this);
    ::PangoCoverage *_peel_other = reinterpret_cast<::PangoCoverage *> (other);
    pango_coverage_max (_peel_this, _peel_other);
  }

  peel::RefPtr<Coverage>
  ref () noexcept
  {
    ::PangoCoverage *_peel_this = reinterpret_cast<::PangoCoverage *> (this);
    ::PangoCoverage *_peel_return = pango_coverage_ref (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Coverage>::adopt_ref (reinterpret_cast<Coverage *> (_peel_return));
  }

  void
  set (int index_, CoverageLevel level) noexcept
  {
    ::PangoCoverage *_peel_this = reinterpret_cast<::PangoCoverage *> (this);
    ::PangoCoverageLevel _peel_level = static_cast<::PangoCoverageLevel> (level);
    pango_coverage_set (_peel_this, index_, _peel_level);
  }

  void
  to_bytes (peel::UniquePtr<uint8_t[]> *bytes) noexcept
  {
    int _peel_n_bytes;
    ::PangoCoverage *_peel_this = reinterpret_cast<::PangoCoverage *> (this);
    guchar *_peel_bytes;
    pango_coverage_to_bytes (_peel_this, &_peel_bytes, &_peel_n_bytes);
    *bytes = peel::UniquePtr<uint8_t[]>::adopt_ref (reinterpret_cast<uint8_t *> (_peel_bytes), _peel_n_bytes);
  }

  static void
  unref (peel::RefPtr<Coverage> coverage) noexcept
  {
    ::PangoCoverage *_peel_coverage = reinterpret_cast<::PangoCoverage *> (std::move (coverage).release_ref ());
    pango_coverage_unref (_peel_coverage);
  }
}; /* class Coverage */

} /* namespace Pango */
} /* namespace peel */

peel_end_header
