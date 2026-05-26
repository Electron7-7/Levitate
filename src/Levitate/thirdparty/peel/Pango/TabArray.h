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
enum class TabAlign : std::underlying_type<::PangoTabAlign>::type;
class /* record */ TabArray;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::TabArray> ()
{
  return pango_tab_array_get_type ();
}
template<>
struct GObject::Value::Traits<Pango::TabArray>
{
  typedef UniquePtr<Pango::TabArray> OwnedType;
  typedef const Pango::TabArray * UnownedType;

  static const Pango::TabArray *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Pango::TabArray *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Pango::TabArray * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static UniquePtr<Pango::TabArray>
  dup (const ::GValue *value)
  {
    return UniquePtr<Pango::TabArray>::adopt_ref (reinterpret_cast<Pango::TabArray *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Pango::TabArray> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static const Pango::TabArray *
  cast_for_create (const Pango::TabArray * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Pango::TabArray>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Pango::TabArray> (), basics.flags);
  }
};

template<>
struct UniqueTraits<Pango::TabArray>
{
  static void
  free (Pango::TabArray *ptr)
  {
    pango_tab_array_free (reinterpret_cast<::PangoTabArray *> (ptr));
  }

  constexpr static
  bool can_free_null = false;
};


namespace Pango
{
class /* record */ TabArray
{
private:
  TabArray () = delete;
  TabArray (const TabArray &) = delete;
  TabArray (TabArray &&) = delete;
  ~TabArray ();

public:
  static peel::UniquePtr<TabArray>
  create (int initial_size, bool positions_in_pixels) noexcept
  {
    gboolean _peel_positions_in_pixels = static_cast<gboolean> (positions_in_pixels);
    ::PangoTabArray *_peel_return = pango_tab_array_new (initial_size, _peel_positions_in_pixels);
    peel_assume (_peel_return);
    return peel::UniquePtr<TabArray>::adopt_ref (reinterpret_cast<TabArray *> (_peel_return));
  }

  /* Unsupported for now: new_with_positions: varargs */

  peel::UniquePtr<TabArray>
  copy () noexcept
  {
    ::PangoTabArray *_peel_this = reinterpret_cast<::PangoTabArray *> (this);
    ::PangoTabArray *_peel_return = pango_tab_array_copy (_peel_this);
    peel_assume (_peel_return);
    return peel::UniquePtr<TabArray>::adopt_ref (reinterpret_cast<TabArray *> (_peel_return));
  }

  /* free bound as UniqueTraits */

  gunichar
  get_decimal_point (int tab_index) noexcept
  {
    ::PangoTabArray *_peel_this = reinterpret_cast<::PangoTabArray *> (this);
    return pango_tab_array_get_decimal_point (_peel_this, tab_index);
  }

  bool
  get_positions_in_pixels () noexcept
  {
    ::PangoTabArray *_peel_this = reinterpret_cast<::PangoTabArray *> (this);
    gboolean _peel_return = pango_tab_array_get_positions_in_pixels (_peel_this);
    return !!_peel_return;
  }

  int
  get_size () noexcept
  {
    ::PangoTabArray *_peel_this = reinterpret_cast<::PangoTabArray *> (this);
    return pango_tab_array_get_size (_peel_this);
  }

  peel_arg_out (3) peel_arg_out (4)
  void
  get_tab (int tab_index, TabAlign *alignment, int *location) noexcept
  {
    ::PangoTabArray *_peel_this = reinterpret_cast<::PangoTabArray *> (this);
    ::PangoTabAlign *_peel_alignment = reinterpret_cast<::PangoTabAlign *> (alignment);
    gint *_peel_location = reinterpret_cast<gint *> (location);
    pango_tab_array_get_tab (_peel_this, tab_index, _peel_alignment, _peel_location);
  }

  /* Unsupported for now: get_tabs: Complex array */

  void
  resize (int new_size) noexcept
  {
    ::PangoTabArray *_peel_this = reinterpret_cast<::PangoTabArray *> (this);
    pango_tab_array_resize (_peel_this, new_size);
  }

  void
  set_decimal_point (int tab_index, gunichar decimal_point) noexcept
  {
    ::PangoTabArray *_peel_this = reinterpret_cast<::PangoTabArray *> (this);
    pango_tab_array_set_decimal_point (_peel_this, tab_index, decimal_point);
  }

  void
  set_positions_in_pixels (bool positions_in_pixels) noexcept
  {
    ::PangoTabArray *_peel_this = reinterpret_cast<::PangoTabArray *> (this);
    gboolean _peel_positions_in_pixels = static_cast<gboolean> (positions_in_pixels);
    pango_tab_array_set_positions_in_pixels (_peel_this, _peel_positions_in_pixels);
  }

  void
  set_tab (int tab_index, TabAlign alignment, int location) noexcept
  {
    ::PangoTabArray *_peel_this = reinterpret_cast<::PangoTabArray *> (this);
    ::PangoTabAlign _peel_alignment = static_cast<::PangoTabAlign> (alignment);
    pango_tab_array_set_tab (_peel_this, tab_index, _peel_alignment, location);
  }

  void
  sort () noexcept
  {
    ::PangoTabArray *_peel_this = reinterpret_cast<::PangoTabArray *> (this);
    pango_tab_array_sort (_peel_this);
  }

  peel::String
  to_string () noexcept
  {
    ::PangoTabArray *_peel_this = reinterpret_cast<::PangoTabArray *> (this);
    char *_peel_return = pango_tab_array_to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  peel_nonnull_args (1)
  static peel::UniquePtr<TabArray>
  from_string (const char *text) noexcept
  {
    ::PangoTabArray *_peel_return = pango_tab_array_from_string (text);
    return peel::UniquePtr<TabArray>::adopt_ref (reinterpret_cast<TabArray *> (_peel_return));
  }
}; /* record TabArray */

} /* namespace Pango */
} /* namespace peel */

peel_end_header
