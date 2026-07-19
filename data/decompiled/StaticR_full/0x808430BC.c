/* Function at 0x808430BC, size=32 bytes */
/* Stack frame: 0 bytes */

void FUN_808430BC(int r4)
{
    /* lis r4, 0 */ // 0x808430BC
    /* li r0, 0 */ // 0x808430C0
    *(0 + r3) = r0; // stw @ 0x808430C4
    r4 = r4 + 0; // 0x808430C8
    *(0x300 + r4) = r0; // stw @ 0x808430CC
    *(0x304 + r4) = r0; // stw @ 0x808430D0
    *(0x308 + r4) = r3; // stw @ 0x808430D4
    return;
}