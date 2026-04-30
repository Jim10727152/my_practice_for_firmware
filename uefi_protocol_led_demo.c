#include <stdio.h>

typedef void (*EFI_SET_LED_STATE)(int status);

typedef struct {
    EFI_SET_LED_STATE SetLedState;
} EFI_LED_PROTOCOL;

void TurnOnLed(int status) {
    printf("LED ON, status = %d\n", status);
}

void TurnOffLed(int status) {
    printf("LED OFF, status = %d\n", status);
}

int main(void) {
    EFI_LED_PROTOCOL LedProtocol;

    LedProtocol.SetLedState = TurnOnLed;
    LedProtocol.SetLedState(1);

    LedProtocol.SetLedState = TurnOffLed;
    LedProtocol.SetLedState(0);

    return 0;
}
