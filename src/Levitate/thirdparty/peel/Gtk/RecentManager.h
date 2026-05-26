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
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace GLib
{
struct Error;
} /* namespace GLib */

namespace Gtk
{
struct RecentData;
class /* record */ RecentInfo;
class RecentManager;
} /* namespace Gtk */

template<>
inline GObject::Type
GObject::Type::of<Gtk::RecentManager> ()
{
  return gtk_recent_manager_get_type ();
}


namespace Gtk
{
class RecentManager : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GtkRecentManager) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  RecentManager () = delete;
  RecentManager (const RecentManager &) = delete;
  RecentManager (RecentManager &&) = delete;
  RecentManager &
  operator = (const RecentManager &) = delete;
  RecentManager &
  operator = (RecentManager &&) = delete;
protected:
  ~RecentManager () = default;
public:
  enum class Error : std::underlying_type<::GtkRecentManagerError>::type;

  static peel::RefPtr<RecentManager>
  create () noexcept
  {
    ::GtkRecentManager *_peel_return = gtk_recent_manager_new ();
    peel_assume (_peel_return);
    return peel::RefPtr<RecentManager>::adopt_ref (reinterpret_cast<RecentManager *> (_peel_return));
  }

  peel_returns_nonnull
  static RecentManager *
  get_default () noexcept
  {
    ::GtkRecentManager *_peel_return = gtk_recent_manager_get_default ();
    peel_assume (_peel_return);
    return reinterpret_cast<RecentManager *> (_peel_return);
  }

  peel_arg_in (3) peel_nonnull_args (2, 3)
  bool
  add_full (const char *uri, const RecentData *recent_data) noexcept
  {
    ::GtkRecentManager *_peel_this = reinterpret_cast<::GtkRecentManager *> (this);
    const ::GtkRecentData *_peel_recent_data = reinterpret_cast<const ::GtkRecentData *> (recent_data);
    gboolean _peel_return = gtk_recent_manager_add_full (_peel_this, uri, _peel_recent_data);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  bool
  add_item (const char *uri) noexcept
  {
    ::GtkRecentManager *_peel_this = reinterpret_cast<::GtkRecentManager *> (this);
    gboolean _peel_return = gtk_recent_manager_add_item (_peel_this, uri);
    return !!_peel_return;
  }

  GLib::List<peel::RefPtr<RecentInfo>>
  get_items () noexcept
  {
    ::GtkRecentManager *_peel_this = reinterpret_cast<::GtkRecentManager *> (this);
    GList *_peel_return = gtk_recent_manager_get_items (_peel_this);
    return GLib::List<peel::RefPtr<RecentInfo>>::adopt_list (_peel_return);
  }

  peel_nonnull_args (2)
  bool
  has_item (const char *uri) noexcept
  {
    ::GtkRecentManager *_peel_this = reinterpret_cast<::GtkRecentManager *> (this);
    gboolean _peel_return = gtk_recent_manager_has_item (_peel_this, uri);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  peel::RefPtr<RecentInfo>
  lookup_item (const char *uri, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkRecentManager *_peel_this = reinterpret_cast<::GtkRecentManager *> (this);
    ::GError *_peel_error = nullptr;
    ::GtkRecentInfo *_peel_return = gtk_recent_manager_lookup_item (_peel_this, uri, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return peel::RefPtr<RecentInfo>::adopt_ref (reinterpret_cast<RecentInfo *> (_peel_return));
  }

  peel_nonnull_args (2)
  bool
  move_item (const char *uri, const char *new_uri, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkRecentManager *_peel_this = reinterpret_cast<::GtkRecentManager *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_recent_manager_move_item (_peel_this, uri, new_uri, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  int
  purge_items (peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkRecentManager *_peel_this = reinterpret_cast<::GtkRecentManager *> (this);
    ::GError *_peel_error = nullptr;
    int _peel_return = gtk_recent_manager_purge_items (_peel_this, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return _peel_return;
  }

  peel_nonnull_args (2)
  bool
  remove_item (const char *uri, peel::UniquePtr<GLib::Error> *error) noexcept
  {
    ::GtkRecentManager *_peel_this = reinterpret_cast<::GtkRecentManager *> (this);
    ::GError *_peel_error = nullptr;
    gboolean _peel_return = gtk_recent_manager_remove_item (_peel_this, uri, error ? &_peel_error : nullptr);
    if (error)
      *error = peel::UniquePtr<GLib::Error>::adopt_ref (reinterpret_cast<GLib::Error *> (_peel_error));
    return !!_peel_return;
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<RecentManager, void ()>::_peel_connect_by_name (this, "changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_changed (HandlerObject *object, void (HandlerObject::*handler_method) (RecentManager *), bool after = false) noexcept
  {
    return Signal<RecentManager, void ()>::_peel_connect_by_name (this, "changed", object, handler_method, after);
  }

  static peel::Property<const char *>
  prop_filename ()
  {
    return peel::Property<const char *> { "filename" };
  }

  static peel::Property<int>
  prop_size ()
  {
    return peel::Property<int> { "size" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<RecentManager> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  void
  parent_vfunc_changed () noexcept
  {
    ::GtkRecentManagerClass *_peel_class = reinterpret_cast<::GtkRecentManagerClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GtkRecentManager *_peel_this = reinterpret_cast<::GtkRecentManager *> (this);
    _peel_class->changed (_peel_this);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GtkRecentManagerClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_changed ()
    {
      ::GtkRecentManagerClass *klass = reinterpret_cast<::GtkRecentManagerClass *> (this);
      klass->changed = +[] (::GtkRecentManager *manager) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (manager);
        _peel_this->DerivedClass::vfunc_changed ();
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GtkRecentManagerClass),
                 "RecentManager::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GtkRecentManagerClass),
                 "RecentManager::Class align mismatch");
}; /* class RecentManager */

static_assert (sizeof (RecentManager) == sizeof (::GtkRecentManager),
               "RecentManager size mismatch");
static_assert (alignof (RecentManager) == alignof (::GtkRecentManager),
               "RecentManager align mismatch");

} /* namespace Gtk */
} /* namespace peel */

peel_end_header

#include <peel/GLib/Error.h>
#include <peel/Gtk/RecentInfo.h>
