/* Function at 0x808F7D9C, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_808F7D9C(int r4)
{
    /* li r4, 1 */ // 0x808F7D9C
    /* li r0, 0x3c */ // 0x808F7DA0
    *(0x24 + r3) = r4; // stb @ 0x808F7DA4
    *(0x1c + r3) = r0; // stw @ 0x808F7DA8
    return;
}