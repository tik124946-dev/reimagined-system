#include <switch.h>
#include <cstdio>

int main(int argc, char* argv[]) {
    consoleInit(NULL);

    padConfigureInput(1, HidNpadStyleSet_NpadStandard);
    PadState pad;
    padInitializeDefault(&pad);

    const char* status = "Ready";
    while (appletMainLoop()) {
        padUpdate(&pad);
        const u64 down = padGetButtonsDown(&pad);

        if (down & HidNpadButton_A) status = "A pressed: confirm";
        if (down & HidNpadButton_B) status = "B pressed: back";
        if (down & HidNpadButton_Plus) break;

        consoleClear();
        printf("NoomiSwitch - port scaffold\n");
        printf("============================\n\n");
        printf("This is a homebrew placeholder,\n");
        printf("not the original NoomiClone game yet.\n\n");
        printf("Status: %s\n\n", status);
        printf("A  - Confirm\nB  - Back\n+  - Exit\n\n");
        printf("A compatible game implementation and\n");
        printf("authorized assets/source are still needed.\n");
        consoleUpdate(NULL);
    }

    consoleExit(NULL);
    return 0;
}
