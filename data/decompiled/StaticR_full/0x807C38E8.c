/* Function at 0x807C38E8, size=36 bytes */
/* Stack frame: 0 bytes */

void FUN_807C38E8(void)
{
    /* li r0, 0 */ // 0x807C38E8
    *(0xc + r3) = r0; // stw @ 0x807C38EC
    *(0x10 + r3) = r0; // stw @ 0x807C38F0
    *(0x14 + r3) = r0; // stw @ 0x807C38F4
    *(0x18 + r3) = r0; // stw @ 0x807C38F8
    *(0x1c + r3) = r0; // stw @ 0x807C38FC
    *(0x20 + r3) = r0; // stw @ 0x807C3900
    *(4 + r3) = r0; // stw @ 0x807C3904
    return;
}