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
#include <peel/GLib/SList.h>

peel_begin_header

namespace peel
{
namespace Pango
{
class /* record */ AttrIterator;
enum class AttrType : std::underlying_type<::PangoAttrType>::type;
struct Attribute;
class /* record */ FontDescription;
class /* record */ Language;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::AttrIterator> ()
{
  return pango_attr_iterator_get_type ();
}
template<>
struct GObject::Value::Traits<Pango::AttrIterator>
{
  typedef const Pango::AttrIterator * UnownedType;

  static const Pango::AttrIterator *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Pango::AttrIterator *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Pango::AttrIterator * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static const Pango::AttrIterator *
  cast_for_create (const Pango::AttrIterator * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Pango::AttrIterator>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Pango::AttrIterator> (), basics.flags);
  }
};


namespace Pango
{
class /* record */ AttrIterator
{
private:
  AttrIterator () = delete;
  AttrIterator (const AttrIterator &) = delete;
  AttrIterator (AttrIterator &&) = delete;
  ~AttrIterator ();

public:
  /* Unsupported for now: copy: no idea about ownership semantics */

  void
  destroy () noexcept
  {
    ::PangoAttrIterator *_peel_this = reinterpret_cast<::PangoAttrIterator *> (this);
    pango_attr_iterator_destroy (_peel_this);
  }

  Attribute *
  get (AttrType type) noexcept
  {
    ::PangoAttrIterator *_peel_this = reinterpret_cast<::PangoAttrIterator *> (this);
    ::PangoAttrType _peel_type = static_cast<::PangoAttrType> (type);
    ::PangoAttribute *_peel_return = pango_attr_iterator_get (_peel_this, _peel_type);
    return reinterpret_cast<Attribute *> (_peel_return);
  }

  GLib::SList<Attribute>
  get_attrs () noexcept
  {
    ::PangoAttrIterator *_peel_this = reinterpret_cast<::PangoAttrIterator *> (this);
    GSList *_peel_return = pango_attr_iterator_get_attrs (_peel_this);
    return GLib::SList<Attribute>::adopt_list (_peel_return);
  }

  /* Unsupported for now: get_font: no idea about ownership semantics */

  bool
  next () noexcept
  {
    ::PangoAttrIterator *_peel_this = reinterpret_cast<::PangoAttrIterator *> (this);
    gboolean _peel_return = pango_attr_iterator_next (_peel_this);
    return !!_peel_return;
  }

  peel_arg_out (2) peel_arg_out (3) peel_nonnull_args (2, 3)
  void
  range (int *start, int *end) noexcept
  {
    ::PangoAttrIterator *_peel_this = reinterpret_cast<::PangoAttrIterator *> (this);
    pango_attr_iterator_range (_peel_this, start, end);
  }
}; /* record AttrIterator */

} /* namespace Pango */
} /* namespace peel */

peel_end_header

#include <peel/Pango/Attribute.h>
#include <peel/Pango/Language.h>
