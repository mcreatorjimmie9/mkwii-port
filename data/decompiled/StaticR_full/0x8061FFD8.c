/* Function at 0x8061FFD8, size=80 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

int FUN_8061FFD8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* lis r4, 0 */ // 0x8061FFE0
    /* lis r3, 0 */ // 0x8061FFE4
    *(0x14 + r1) = r0; // stw @ 0x8061FFE8
    r4 = r4 + 0; // 0x8061FFEC
    r5 = r4 + 0x214; // 0x8061FFF0
    /* li r6, 0 */ // 0x8061FFF4
    r3 = *(0 + r3); // lwz @ 0x8061FFF8
    /* li r4, 0 */ // 0x8061FFFC
    FUN_805CFD60(r4, r5, r6, r4); // bl 0x805CFD60
    /* lis r5, 0 */ // 0x80620004
    /* lis r4, 0 */ // 0x80620008
    r0 = r3 + 4; // 0x8062000C
    *(0 + r5) = r3; // stw @ 0x80620010
    *(0 + r4) = r0; // stw @ 0x80620014
    r0 = *(0x14 + r1); // lwz @ 0x80620018
    return;
}