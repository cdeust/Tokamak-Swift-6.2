#ifndef TOKAMAK_GTK_C_HELPERS_H
#define TOKAMAK_GTK_C_HELPERS_H

#include <termios.h>
#include <gtk/gtk.h>

#ifdef __cplusplus
extern "C" {
#endif

gboolean tokamak_gtk_widget_is_container(GtkWidget *widget);
gboolean tokamak_gtk_widget_is_stack(GtkWidget *widget);

#ifdef __cplusplus
}
#endif

#endif /* TOKAMAK_GTK_C_HELPERS_H */
