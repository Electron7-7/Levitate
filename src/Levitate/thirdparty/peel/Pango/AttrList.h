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
class /* record */ AttrList;
struct Attribute;
} /* namespace Pango */

template<>
inline GObject::Type
GObject::Type::of<Pango::AttrList> ()
{
  return pango_attr_list_get_type ();
}
template<>
struct GObject::Value::Traits<Pango::AttrList>
{
  typedef RefPtr<Pango::AttrList> OwnedType;
  typedef Pango::AttrList * UnownedType;

  static Pango::AttrList *
  get (const ::GValue *value)
  {
    return reinterpret_cast<Pango::AttrList *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, Pango::AttrList * r)
  {
    g_value_set_boxed (value, reinterpret_cast<const void *> (r));
  }

  static RefPtr<Pango::AttrList>
  dup (const ::GValue *value)
  {
    return RefPtr<Pango::AttrList>::adopt_ref (reinterpret_cast<Pango::AttrList *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, RefPtr<Pango::AttrList> &&r)
  {
    g_value_take_boxed (value, reinterpret_cast<const void *> (std::move (r).release_ref ()));
  }

  static Pango::AttrList *
  cast_for_create (Pango::AttrList * r) noexcept
  {
    return r;
  }
};

template<>
struct peel::internals::PspecTraits<Pango::AttrList>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, GObject::Type::of<Pango::AttrList> (), basics.flags);
  }
};

template<>
struct RefTraits<Pango::AttrList, void>
{
  static void
  ref (Pango::AttrList *ptr)
  {
    pango_attr_list_ref (reinterpret_cast<::PangoAttrList *> (ptr));
  }

  constexpr static
  bool can_ref_null = true;

  static void
  unref (Pango::AttrList *ptr)
  {
    pango_attr_list_unref (reinterpret_cast<::PangoAttrList *> (ptr));
  }

  constexpr static
  bool can_unref_null = true;
};


namespace Pango
{
class /* record */ AttrList
{
private:
  AttrList () = delete;
  AttrList (const AttrList &) = delete;
  AttrList (AttrList &&) = delete;
  ~AttrList ();

public:
  static peel::RefPtr<AttrList>
  create () noexcept
  {
    ::PangoAttrList *_peel_return = pango_attr_list_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<AttrList>::adopt_ref (reinterpret_cast<AttrList *> (_peel_return));
  }

  void
  change (peel::UniquePtr<Attribute> attr) noexcept
  {
    ::PangoAttrList *_peel_this = reinterpret_cast<::PangoAttrList *> (this);
    ::PangoAttribute *_peel_attr = reinterpret_cast<::PangoAttribute *> (std::move (attr).release_ref ());
    pango_attr_list_change (_peel_this, _peel_attr);
  }

  peel::RefPtr<AttrList>
  copy () noexcept
  {
    ::PangoAttrList *_peel_this = reinterpret_cast<::PangoAttrList *> (this);
    ::PangoAttrList *_peel_return = pango_attr_list_copy (_peel_this);
    return peel::RefPtr<AttrList>::adopt_ref (reinterpret_cast<AttrList *> (_peel_return));
  }

  peel_arg_in (2) peel_nonnull_args (2)
  bool
  equal (AttrList *other_list) noexcept
  {
    ::PangoAttrList *_peel_this = reinterpret_cast<::PangoAttrList *> (this);
    ::PangoAttrList *_peel_other_list = reinterpret_cast<::PangoAttrList *> (other_list);
    gboolean _peel_return = pango_attr_list_equal (_peel_this, _peel_other_list);
    return !!_peel_return;
  }

  template<typename AttrFilterFunc>
  peel::RefPtr<AttrList>
  filter (AttrFilterFunc &&func) noexcept
  {
    gpointer _peel_data;
    ::PangoAttrList *_peel_this = reinterpret_cast<::PangoAttrList *> (this);
    ::PangoAttrFilterFunc _peel_func = peel::internals::CallbackHelper<gboolean, ::PangoAttribute *>::wrap_call_callback (
      static_cast<AttrFilterFunc &&> (func),
      [] (::PangoAttribute *attribute, gpointer user_data) -> gboolean
      {
        AttrFilterFunc &_peel_captured_func = *reinterpret_cast<typename std::remove_reference<AttrFilterFunc>::type *> (user_data);
        Attribute *_peel_attribute = reinterpret_cast<Attribute *> (attribute);
        bool _peel_return = _peel_captured_func (_peel_attribute);
        return static_cast<gboolean> (_peel_return);
      },
      &_peel_data, peel::internals::is_const_invocable<AttrFilterFunc, void, Attribute *>::value);
    ::PangoAttrList *_peel_return = pango_attr_list_filter (_peel_this, _peel_func, _peel_data);
    return peel::RefPtr<AttrList>::adopt_ref (reinterpret_cast<AttrList *> (_peel_return));
  }

  GLib::SList<Attribute>
  get_attributes () noexcept
  {
    ::PangoAttrList *_peel_this = reinterpret_cast<::PangoAttrList *> (this);
    GSList *_peel_return = pango_attr_list_get_attributes (_peel_this);
    return GLib::SList<Attribute>::adopt_list (_peel_return);
  }

  /* Unsupported for now: get_iterator: no idea about ownership semantics */

  void
  insert (peel::UniquePtr<Attribute> attr) noexcept
  {
    ::PangoAttrList *_peel_this = reinterpret_cast<::PangoAttrList *> (this);
    ::PangoAttribute *_peel_attr = reinterpret_cast<::PangoAttribute *> (std::move (attr).release_ref ());
    pango_attr_list_insert (_peel_this, _peel_attr);
  }

  void
  insert_before (peel::UniquePtr<Attribute> attr) noexcept
  {
    ::PangoAttrList *_peel_this = reinterpret_cast<::PangoAttrList *> (this);
    ::PangoAttribute *_peel_attr = reinterpret_cast<::PangoAttribute *> (std::move (attr).release_ref ());
    pango_attr_list_insert_before (_peel_this, _peel_attr);
  }

  /* ref bound as RefTraits */

  peel_arg_in (2) peel_nonnull_args (2)
  void
  splice (AttrList *other, int pos, int len) noexcept
  {
    ::PangoAttrList *_peel_this = reinterpret_cast<::PangoAttrList *> (this);
    ::PangoAttrList *_peel_other = reinterpret_cast<::PangoAttrList *> (other);
    pango_attr_list_splice (_peel_this, _peel_other, pos, len);
  }

  peel::String
  to_string () noexcept
  {
    ::PangoAttrList *_peel_this = reinterpret_cast<::PangoAttrList *> (this);
    char *_peel_return = pango_attr_list_to_string (_peel_this);
    return peel::String::adopt_string (_peel_return);
  }

  /* unref bound as RefTraits */

  void
  update (int pos, int remove, int add) noexcept
  {
    ::PangoAttrList *_peel_this = reinterpret_cast<::PangoAttrList *> (this);
    pango_attr_list_update (_peel_this, pos, remove, add);
  }

  peel_nonnull_args (1)
  static peel::RefPtr<AttrList>
  from_string (const char *text) noexcept
  {
    ::PangoAttrList *_peel_return = pango_attr_list_from_string (text);
    return peel::RefPtr<AttrList>::adopt_ref (reinterpret_cast<AttrList *> (_peel_return));
  }
}; /* record AttrList */

} /* namespace Pango */
} /* namespace peel */

peel_end_header

#include <peel/Pango/AttrIterator.h>
#include <peel/Pango/Attribute.h>
