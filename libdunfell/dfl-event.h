/* vim:set et sw=2 cin cino=t0,f0,(0,{s,>2s,n-s,^-s,e2s: */
/*
 * Copyright © Philip Withnall 2015 <philip@tecnocode.co.uk>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by the
 * Free Software Foundation; either version 2.1 of the License, or (at your
 * option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef DFL_EVENT_H
#define DFL_EVENT_H

#include <glib.h>
#include <glib-object.h>
#include <gio/gio.h>

G_BEGIN_DECLS

/**
 * DflEvent:
 *
 * All the fields in this structure are private.
 *
 * Since: UNRELEASED
 */
#define DFL_TYPE_EVENT dfl_event_get_type ()
G_DECLARE_DERIVABLE_TYPE (DflEvent, dfl_event, DFL, EVENT, GObject)

/**
 * DflEventClass:
 * @parent_class: the parent class
 *
 * The class structure for the #DflEvent class
 *
 * Since: UNRELEASED
 */
struct _DflEventClass
{
  GObjectClass parent_class;
};

G_END_DECLS

#endif /* !DFL_EVENT_H */
