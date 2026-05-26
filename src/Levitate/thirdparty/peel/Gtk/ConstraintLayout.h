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
#include <peel/GLib/List.h>
#include <peel/Gtk/LayoutManager.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
class /* record */ HashTable;
} /* namespace GLib */

namespace Gio
{
class /* interface */ ListModel;
} /* namespace Gio */

namespace Gtk
{
class Constraint;
class ConstraintGuide;
class ConstraintLayout;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::ConstraintLayout> ()
{
  return gtk_constraint_layout_get_type ();
}


namespace Gtk
{
class ConstraintLayout : public LayoutManager
/* non-derivable */
/* implements Buildable */
{
private:
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  ConstraintLayout () = delete;
  ConstraintLayout (const ConstraintLayout &) = delete;
  ConstraintLayout (ConstraintLayout &&) = delete;
  ConstraintLayout &
  operator = (const ConstraintLayout &) = delete;
  ConstraintLayout &
  operator = (ConstraintLayout &&) = delete;
  ~ConstraintLayout () = delete;
public:

  static peel::RefPtr<ConstraintLayout>
  create () noexcept
  {
    ::GtkLayoutManager *_peel_return = gtk_constraint_layout_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<ConstraintLayout>::adopt_ref (reinterpret_cast<ConstraintLayout *> (_peel_return));
  }

  void
  add_constraint (peel::RefPtr<Constraint> constraint) noexcept
  {
    ::GtkConstraintLayout *_peel_this = reinterpret_cast<::GtkConstraintLayout *> (this);
    ::GtkConstraint *_peel_constraint = reinterpret_cast<::GtkConstraint *> (std::move (constraint).release_ref ());
    gtk_constraint_layout_add_constraint (_peel_this, _peel_constraint);
  }

  /* Unsupported for now: add_constraints_from_description: varargs */
  static void
  add_constraints_from_description (UnsupportedForNowToken);

  peel_arg_in (5) peel_nonnull_args (5)
  GLib::List<Constraint *>
  add_constraints_from_descriptionv (peel::ArrayRef<const char * const> lines, int hspacing, int vspacing, GLib::HashTable *views, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    gsize _peel_n_lines;
    ::GtkConstraintLayout *_peel_this = reinterpret_cast<::GtkConstraintLayout *> (this);
    const char* const *_peel_lines = (_peel_n_lines = lines.size (), reinterpret_cast<const char* const *> (lines.data ()));
    ::GHashTable *_peel_views = reinterpret_cast<::GHashTable *> (views);
    ::GError *_peel_error = nullptr;
    GList *_peel_return = gtk_constraint_layout_add_constraints_from_descriptionv (_peel_this, _peel_lines, _peel_n_lines, hspacing, vspacing, _peel_views, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return GLib::List<Constraint *>::adopt_list (_peel_return);
  }

  void
  add_guide (peel::RefPtr<ConstraintGuide> guide) noexcept
  {
    ::GtkConstraintLayout *_peel_this = reinterpret_cast<::GtkConstraintLayout *> (this);
    ::GtkConstraintGuide *_peel_guide = reinterpret_cast<::GtkConstraintGuide *> (std::move (guide).release_ref ());
    gtk_constraint_layout_add_guide (_peel_this, _peel_guide);
  }

  peel::RefPtr<Gio::ListModel>
  observe_constraints () noexcept
  {
    ::GtkConstraintLayout *_peel_this = reinterpret_cast<::GtkConstraintLayout *> (this);
    ::GListModel *_peel_return = gtk_constraint_layout_observe_constraints (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Gio::ListModel>::adopt_ref (reinterpret_cast<Gio::ListModel *> (_peel_return));
  }

  peel::RefPtr<Gio::ListModel>
  observe_guides () noexcept
  {
    ::GtkConstraintLayout *_peel_this = reinterpret_cast<::GtkConstraintLayout *> (this);
    ::GListModel *_peel_return = gtk_constraint_layout_observe_guides (_peel_this);
    peel_assume (_peel_return);
    return peel::RefPtr<Gio::ListModel>::adopt_ref (reinterpret_cast<Gio::ListModel *> (_peel_return));
  }

  void
  remove_all_constraints () noexcept
  {
    ::GtkConstraintLayout *_peel_this = reinterpret_cast<::GtkConstraintLayout *> (this);
    gtk_constraint_layout_remove_all_constraints (_peel_this);
  }

  peel_nonnull_args (2)
  void
  remove_constraint (Constraint *constraint) noexcept
  {
    ::GtkConstraintLayout *_peel_this = reinterpret_cast<::GtkConstraintLayout *> (this);
    ::GtkConstraint *_peel_constraint = reinterpret_cast<::GtkConstraint *> (constraint);
    gtk_constraint_layout_remove_constraint (_peel_this, _peel_constraint);
  }

  peel_nonnull_args (2)
  void
  remove_guide (ConstraintGuide *guide) noexcept
  {
    ::GtkConstraintLayout *_peel_this = reinterpret_cast<::GtkConstraintLayout *> (this);
    ::GtkConstraintGuide *_peel_guide = reinterpret_cast<::GtkConstraintGuide *> (guide);
    gtk_constraint_layout_remove_guide (_peel_this, _peel_guide);
  }

  class Class : public LayoutManager::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;
  };

  static_assert (sizeof (Class) == sizeof (::GtkConstraintLayoutClass),
                 "ConstraintLayout::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkConstraintLayoutClass),
                 "ConstraintLayout::Class align mismatch");
}; /* class ConstraintLayout */

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gio/ListModel.h>
#include <peel/Gtk/Constraint.h>
#include <peel/Gtk/ConstraintGuide.h>
