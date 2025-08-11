#include <3ds.h>
#include "action.h"
#include "../../core/ui/prompt.h"
#include "../../core/screen.h"

// TODO Add a file chooser
void action_pick_locale_dir(config_info* info, bool* populated) {
    prompt_display_notify("Custom directory", "Write your custom directory to /locales.conf", COLOR_TEXT, info, NULL, NULL);
}
