/* Function at 0x808F7B70, size=56 bytes */
/* Stack frame: 0 bytes */

void FUN_808F7B70(void)
{
    /* li r0, 0 */ // 0x808F7B70
    *(0x3fec + r3) = r0; // stw @ 0x808F7B74
    *(0x3ff0 + r3) = r0; // stw @ 0x808F7B78
    *(0x3ff4 + r3) = r0; // stw @ 0x808F7B7C
    *(0x3ff8 + r3) = r0; // stw @ 0x808F7B80
    *(0x3ffc + r3) = r0; // stw @ 0x808F7B84
    *(0x4000 + r3) = r0; // stw @ 0x808F7B88
    *(0x4004 + r3) = r0; // stw @ 0x808F7B8C
    *(0x4008 + r3) = r0; // stw @ 0x808F7B90
    *(0x400c + r3) = r0; // stw @ 0x808F7B94
    *(0x4010 + r3) = r0; // stw @ 0x808F7B98
    *(0x4014 + r3) = r0; // stw @ 0x808F7B9C
    *(0x4018 + r3) = r0; // stw @ 0x808F7BA0
    return;
}