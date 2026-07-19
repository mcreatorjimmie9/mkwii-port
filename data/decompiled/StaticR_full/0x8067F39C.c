/* Function at 0x8067F39C, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_8067F39C(void)
{
    /* li r0, 0 */ // 0x8067F39C
    *(0x54 + r3) = r4; // stb @ 0x8067F3A0
    *(0xc + r3) = r0; // stw @ 0x8067F3A4
    *(0x1c + r3) = r0; // stw @ 0x8067F3A8
    *(0x2c + r3) = r0; // stw @ 0x8067F3AC
    *(0x3c + r3) = r0; // stw @ 0x8067F3B0
    *(0x4c + r3) = r0; // stw @ 0x8067F3B4
    return;
}