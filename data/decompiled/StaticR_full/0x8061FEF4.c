/* Function at 0x8061FEF4, size=80 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_8061FEF4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x8061FEFC
    /* lis r3, 0 */ // 0x8061FF00
    *(0x14 + r1) = r0; // stw @ 0x8061FF04
    r4 = r4 + 0; // 0x8061FF08
    r5 = r4 + 0x1de; // 0x8061FF0C
    /* li r6, 0 */ // 0x8061FF10
    r3 = *(0 + r3); // lwz @ 0x8061FF14
    /* li r4, 0 */ // 0x8061FF18
    FUN_805CFD60(r4, r5, r6, r4); // bl 0x805CFD60
    /* lis r5, 0 */ // 0x8061FF20
    /* lis r4, 0 */ // 0x8061FF24
    r0 = r3 + 4; // 0x8061FF28
    *(0 + r5) = r3; // stw @ 0x8061FF2C
    *(0 + r4) = r0; // stw @ 0x8061FF30
    r0 = *(0x14 + r1); // lwz @ 0x8061FF34
    return;
}