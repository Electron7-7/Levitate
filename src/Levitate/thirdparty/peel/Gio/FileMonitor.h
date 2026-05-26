#pragma once

/* Auto-generated, do not modify */
/* Package gio-2.0 */

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
#include <gio/gio.h>
#include <peel/GObject/Object.h>

peel_begin_header

namespace peel
{
namespace Gio
{
class /* interface */ File;
class FileMonitor;
} /* namespace Gio */

template<>
inline GObject::Type
GObject::Type::of<Gio::FileMonitor> ()
{
  return g_file_monitor_get_type ();
}


namespace Gio
{
class FileMonitor : public GObject::Object
{
private:
  unsigned char _placeholder[sizeof (::GFileMonitor) - sizeof (GObject::Object)] peel_no_warn_unused;
  using GObject::Object::create;
  using GObject::Object::bind_property;
  friend class GObject::Type;
  friend class GObject::TypeInstance;
  friend class GObject::TypeClass;

  FileMonitor () = delete;
  FileMonitor (const FileMonitor &) = delete;
  FileMonitor (FileMonitor &&) = delete;
  FileMonitor &
  operator = (const FileMonitor &) = delete;
  FileMonitor &
  operator = (FileMonitor &&) = delete;
protected:
  ~FileMonitor () = default;
public:
  enum class Event : std::underlying_type<::GFileMonitorEvent>::type;

  bool
  cancel () noexcept
  {
    ::GFileMonitor *_peel_this = reinterpret_cast<::GFileMonitor *> (this);
    gboolean _peel_return = g_file_monitor_cancel (_peel_this);
    return !!_peel_return;
  }

  peel_nonnull_args (2)
  void
  emit_event (File *child, File *other_file, FileMonitor::Event event_type) noexcept
  {
    ::GFileMonitor *_peel_this = reinterpret_cast<::GFileMonitor *> (this);
    ::GFile *_peel_child = reinterpret_cast<::GFile *> (child);
    ::GFile *_peel_other_file = reinterpret_cast<::GFile *> (other_file);
    ::GFileMonitorEvent _peel_event_type = static_cast<::GFileMonitorEvent> (event_type);
    g_file_monitor_emit_event (_peel_this, _peel_child, _peel_other_file, _peel_event_type);
  }

  bool
  is_cancelled () noexcept
  {
    ::GFileMonitor *_peel_this = reinterpret_cast<::GFileMonitor *> (this);
    gboolean _peel_return = g_file_monitor_is_cancelled (_peel_this);
    return !!_peel_return;
  }

  void
  set_rate_limit (int limit_msecs) noexcept
  {
    ::GFileMonitor *_peel_this = reinterpret_cast<::GFileMonitor *> (this);
    g_file_monitor_set_rate_limit (_peel_this, limit_msecs);
  }

  template<typename Handler>
  peel::SignalConnection::Token
  connect_changed (Handler &&handler, bool after = false) noexcept
  {
    return Signal<FileMonitor, void (File *, File *, FileMonitor::Event)>::_peel_connect_by_name (this, "changed", static_cast<Handler &&> (handler), after);
  }

  template<typename HandlerObject>
  peel::enable_if_derived<GObject::Object, HandlerObject, peel::SignalConnection::Token>
  connect_changed (HandlerObject *object, void (HandlerObject::*handler_method) (FileMonitor *, File *, File *, FileMonitor::Event), bool after = false) noexcept
  {
    return Signal<FileMonitor, void (File *, File *, FileMonitor::Event)>::_peel_connect_by_name (this, "changed", object, handler_method, after);
  }

  static peel::Property<bool>
  prop_cancelled ()
  {
    return peel::Property<bool> { "cancelled" };
  }

  static peel::Property<int>
  prop_rate_limit ()
  {
    return peel::Property<int> { "rate-limit" };
  }

protected:
  static void
  _peel_chain_finalize (::GObject *obj) noexcept
  {
    ::GObjectClass *_peel_class = reinterpret_cast<::GObjectClass *> (GObject::TypeClass::peek_static<FileMonitor> ());
    _peel_class->finalize (obj);
  }

  template<typename DerivedClass>
  bool
  parent_vfunc_cancel () noexcept
  {
    ::GFileMonitorClass *_peel_class = reinterpret_cast<::GFileMonitorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GFileMonitor *_peel_this = reinterpret_cast<::GFileMonitor *> (this);
    gboolean _peel_return = _peel_class->cancel (_peel_this);
    return !!_peel_return;
  }

  template<typename DerivedClass>
  peel_nonnull_args (2, 3)
  void
  parent_vfunc_changed (File *file, File *other_file, FileMonitor::Event event_type) noexcept
  {
    ::GFileMonitorClass *_peel_class = reinterpret_cast<::GFileMonitorClass *> (GObject::TypeClass::peek<DerivedClass> ()->peek_parent ());
    ::GFileMonitor *_peel_this = reinterpret_cast<::GFileMonitor *> (this);
    ::GFile *_peel_file = reinterpret_cast<::GFile *> (file);
    ::GFile *_peel_other_file = reinterpret_cast<::GFile *> (other_file);
    ::GFileMonitorEvent _peel_event_type = static_cast<::GFileMonitorEvent> (event_type);
    _peel_class->changed (_peel_this, _peel_file, _peel_other_file, _peel_event_type);
  }

public:
  class Class : public GObject::Object::Class
  {
  private:
    Class () = delete;
    Class (const Class &) = delete;
    Class (Class &&) = delete;

    unsigned char _placeholder[sizeof (::GFileMonitorClass) - sizeof (GObject::Object::Class)] peel_no_warn_unused;
  protected:
    template<typename DerivedClass>
    void
    override_vfunc_cancel ()
    {
      ::GFileMonitorClass *klass = reinterpret_cast<::GFileMonitorClass *> (this);
      klass->cancel = +[] (::GFileMonitor *monitor) -> gboolean
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (monitor);
        bool _peel_return = _peel_this->DerivedClass::vfunc_cancel ();
        return static_cast<gboolean> (_peel_return);
      };
    }

    template<typename DerivedClass>
    void
    override_vfunc_changed ()
    {
      ::GFileMonitorClass *klass = reinterpret_cast<::GFileMonitorClass *> (this);
      klass->changed = +[] (::GFileMonitor *monitor, ::GFile *file, ::GFile *other_file, ::GFileMonitorEvent event_type) -> void
      {
        DerivedClass *_peel_this = reinterpret_cast<DerivedClass *> (monitor);
        File *_peel_file = reinterpret_cast<File *> (file);
        File *_peel_other_file = reinterpret_cast<File *> (other_file);
        FileMonitor::Event _peel_event_type = static_cast<FileMonitor::Event> (event_type);
        _peel_this->DerivedClass::vfunc_changed (_peel_file, _peel_other_file, _peel_event_type);
      };
    }
  };

  static_assert (sizeof (Class) == sizeof (::GFileMonitorClass),
                 "FileMonitor::Class size mismatch");
  static_assert (alignof (Class) == alignof (::GFileMonitorClass),
                 "FileMonitor::Class align mismatch");
}; /* class FileMonitor */

static_assert (sizeof (FileMonitor) == sizeof (::GFileMonitor),
               "FileMonitor size mismatch");
static_assert (alignof (FileMonitor) == alignof (::GFileMonitor),
               "FileMonitor align mismatch");

} /* namespace Gio */
} /* namespace peel */

peel_end_header
