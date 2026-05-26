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
#include <peel/Gtk/Builder.h>
#include <peel/Gtk/BuilderScope.h>

peel_begin_header

namespace peel
{
namespace Gtk
{
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::Builder::CScope> ()
{
  return gtk_builder_cscope_get_type ();
}


namespace Gtk
{
class Builder::CScope : public Builder::Scope
/* extends GObject::Object */
/* implements Builder::Scope */
{
private:
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  CScope () = delete;
  CScope (const CScope &) = delete;
  CScope (CScope &&) = delete;
  CScope &
  operator = (const CScope &) = delete;
  CScope &
  operator = (CScope &&) = delete;
protected:
  ~CScope () = default;
public:

  static peel::RefPtr<Builder::CScope>
  create () noexcept
  {
    ::GtkBuilderScope *_peel_return = gtk_builder_cscope_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<Builder::CScope>::adopt_ref (reinterpret_cast<Builder::CScope *> (_peel_return));
  }

  peel_nonnull_args (2)
  void
  add_callback_symbol (const char *callback_name, ::GCallback callback_symbol) noexcept
  {
    ::GtkBuilderCScope *_peel_this = reinterpret_cast<::GtkBuilderCScope *> (this);
    gtk_builder_cscope_add_callback_symbol (_peel_this, callback_name, callback_symbol);
  }

  /* Unsupported for now: add_callback_symbols: varargs */
  static void
  add_callback_symbols (UnsupportedForNowToken);

  peel_nonnull_args (2)
  ::GCallback
  lookup_callback_symbol (const char *callback_name) noexcept
  {
    ::GtkBuilderCScope *_peel_this = reinterpret_cast<::GtkBuilderCScope *> (this);
    return gtk_builder_cscope_lookup_callback_symbol (_peel_this, callback_name);
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<CScope> ());
    _peel_class->finalize (obj);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkBuilderCScopeClass),
                 "Builder::CScope::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkBuilderCScopeClass),
                 "Builder::CScope::Class align mismatch");
}; /* class Builder::CScope */

static_assert (sizeof (Builder::CScope) == sizeof (::GtkBuilderCScope),
               "Builder::CScope size mismatch");
static_assert (alignof (Builder::CScope) == alignof (::GtkBuilderCScope),
               "Builder::CScope align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
