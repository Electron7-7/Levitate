#pragma once

/* Auto-generated, do not modify */
/* Package gtk4 */

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
#include <gtk/gtk.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GObject
{
class Object;
} /* namespace GObject */

namespace Gtk
{
class Filter;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Filter> ()
{
  return gtk_filter_get_type ();
}


namespace Gtk
{
class Filter : public GObject::Object
{
private:
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  Filter () = delete;
  Filter (const Filter &) = delete;
  Filter (Filter &&) = delete;
  Filter &
  operator = (const Filter &) = delete;
  Filter &
  operator = (Filter &&) = delete;
protected:
  ~Filter () = default;
public:
  enum class Change : std::underlying_type<::GtkFilterChange>::type;
  enum class Match : std::underlying_type<::GtkFilterMatch>::type;

  void
  changed (Filter::Change change) noexcept
  {
    ::GtkFilter *_peel_this = reinterpret_cast<::GtkFilter *> (this);
    ::GtkFilterChange _peel_change = static_cast<::GtkFilterChange> (change);
    gtk_filter_changed (_peel_this, _peel_change);
  }

  Filter::Match
  get_strictness () noexcept
  {
    ::GtkFilter *_peel_this = reinterpret_cast<::GtkFilter *> (this);
    ::GtkFilterMatch _peel_return = gtk_filter_get_strictness (_peel_this);
    return static_cast<Filter::Match> (_peel_return);
  }

  peel_nonnull_args (2)
  bool
  match (GObject::Object *item) noexcept
  {
    ::GtkFilter *_peel_this = reinterpret_cast<::GtkFilter *> (this);
    ::gpointer _peel_item = reinterpret_cast<::gpointer> (item);
    gboolean _peel_return = gtk_filter_match (_peel_this, _peel_item);
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<Filter, void (Filter::Change)>::_peel_connect_by_name (this, "changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_changed (HandlerObject *object, void (HandlerObject::*handler_method) (Filter *, Filter::Change), bool after = false) noexcept
  {
    return Signal<Filter, void (Filter::Change)>::_peel_connect_by_name (this, "changed", object, handler_method, after);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<Filter> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  Filter::Match
  parent_vfunc_get_strictness () noexcept
  {
    ::GtkFilterClass *_peel_class = reinterpret_cast<::GtkFilterClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkFilter *_peel_this = reinterpret_cast<::GtkFilter *> (this);
    ::GtkFilterMatch _peel_return = _peel_class->get_strictness (_peel_this);
    return static_cast<Filter::Match> (_peel_return);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_match (GObject::Object *item) noexcept
  {
    ::GtkFilterClass *_peel_class = reinterpret_cast<::GtkFilterClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkFilter *_peel_this = reinterpret_cast<::GtkFilter *> (this);
    ::gpointer _peel_item = reinterpret_cast<::gpointer> (item);
    gboolean _peel_return = _peel_class->match (_peel_this, _peel_item);
    return !!_peel_return;
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkFilterClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_get_strictness ()
    {
      ::GtkFilterClass *klass = reinterpret_cast<::GtkFilterClass *> (this);
      klass->get_strictness = +[] (::GtkFilter *self) -> ::GtkFilterMatch
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        Filter::Match _peel_return = _peel_this->DerivedClass::vfunc_get_strictness ();
        return static_cast<::GtkFilterMatch> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_match ()
    {
      ::GtkFilterClass *klass = reinterpret_cast<::GtkFilterClass *> (this);
      klass->match = +[] (::GtkFilter *self, ::gpointer item) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (self);
        GObject::Object *_peel_item = reinterpret_cast<GObject::Object *> (item);
        bool _peel_return = _peel_this->DerivedClass::vfunc_match (_peel_item);
        return static_cast<gboolean> (_peel_return);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkFilterClass),
                 "Filter::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkFilterClass),
                 "Filter::Class align mismatch");
}; /* class Filter */

static_assert (sizeof (Filter) == sizeof (::GtkFilter),
               "Filter size mismatch");
static_assert (alignof (Filter) == alignof (::GtkFilter),
               "Filter align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
