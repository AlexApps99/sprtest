#include <ogc/disc_io.h>
#include <sdcard/wiisd_io.h>
#include <fat.h>
#include <stdio.h>

int main() {
	__io_wiisd.startup();
    if (!fatMountSimple("sd", &__io_wiisd)) goto end;
    FILE *f = fopen("sd:/spr_log.txt", "w");
    if (!f) goto end;
    fprintf(f, "spr_log.txt:\n");
    fflush(f);

#include "hell.h"

    fclose(f);
end:
    // Couldn't be bothered to do any video or input code
    // so just yank the cord out or kill Dolphin I don't care ;)
    while (1) {
    }
}
