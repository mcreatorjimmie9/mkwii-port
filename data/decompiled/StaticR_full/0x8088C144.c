/* Function at 0x8088C144, size=64 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_8088C144(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8088C14C
    r12 = *(0 + r3); // lwz @ 0x8088C150
    r12 = *(0x24 + r12); // lwz @ 0x8088C154
    /* mtctr r12 */ // 0x8088C158
    /* bctrl  */ // 0x8088C15C
    /* lis r4, 0 */ // 0x8088C160
    r0 = r3;
    r3 = *(0 + r4); // lwz @ 0x8088C168
    /* clrlwi r4, r0, 0x10 */ // 0x8088C16C
    FUN_807A9C4C(r4); // bl 0x807A9C4C
    r0 = *(0x14 + r1); // lwz @ 0x8088C174
    return;
}