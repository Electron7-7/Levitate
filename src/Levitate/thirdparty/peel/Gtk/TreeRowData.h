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

peel_begin_header

namespace peel
{
namespace Gtk
{
class /* boxed */ TreeRowData;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::TreeRowData> ()
{
  return gtk_tree_row_data_get_type ();
}

template<>
struct UniqueTraits<Gtk::TreeRowData>
{
  static void
  free (Gtk::TreeRowData *ptr)
  {
    g_boxed_free (gtk_tree_row_data_get_type (), ptr);
  }

  constexpr static
  bool can_free_null = false;
};

template<>
struct peel::internals::PspecTraits<Gtk::TreeRowData>
{
  constexpr PspecTraits ()
  { }

  ::GParamSpec *
  create_pspec (PspecBasics basics)
  {
    return g_param_spec_boxed (basics.name, basics.nick, basics.blurb, gtk_tree_row_data_get_type (), basics.flags);
  }
};

template<>
struct GObject::Value::Traits<Gtk::TreeRowData>
{
  typedef UniquePtr<Gtk::TreeRowData> OwnedType;
  typedef const Gtk::TreeRowData * UnownedType;

  static const Gtk::TreeRowData *
  get (const ::GValue *value)
  {
    return reinterpret_cast<const Gtk::TreeRowData *> (g_value_get_boxed (value));
  }

  static void
  set (::GValue *value, const Gtk::TreeRowData * r)
  {
    g_value_set_boxed (value, r);
  }

  static UniquePtr<Gtk::TreeRowData>
  dup (const ::GValue *value)
  {
    return UniquePtr<Gtk::TreeRowData>::adopt_ref (reinterpret_cast<Gtk::TreeRowData *> (g_value_dup_boxed (value)));
  }

  static void
  take (::GValue *value, UniquePtr<Gtk::TreeRowData> &&r)
  {
    g_value_take_boxed (value, std::move (r).release_ref ());
  }

  static const Gtk::TreeRowData *
  cast_for_create (const Gtk::TreeRowData * r) noexcept
  {
    return r;
  }
};


namespace Gtk
{
class /* boxed */ TreeRowData
{
private:
  TreeRowData () = delete;
  ~TreeRowData ();
};

} /* namespace Gtk */
} /* namespace peel */

peel_end_header
