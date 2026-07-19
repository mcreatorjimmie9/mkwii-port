/* Function at 0x80621EC0, size=176 bytes */
/* Stack frame: 32 bytes */

void FUN_80621EC0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    r0 = *(0x90 + r3); // lwz @ 0x80621EC4
    if (==) goto 0x0x80621f68;
    r6 = *(0x94 + r3); // lha @ 0x80621ED0
    /* lis r5, 0x4330 */ // 0x80621ED4
    /* lis r4, 0 */ // 0x80621ED8
    /* lis r7, 0 */ // 0x80621EDC
    r6 = r6 + 1; // 0x80621EE0
    *(0x94 + r3) = r6; // sth @ 0x80621EE4
    /* slwi r0, r0, 1 */ // 0x80621EE8
    r4 = r4 + 0; // 0x80621EEC
    /* lhax r0, r4, r0 */ // 0x80621EF0
    /* extsh r4, r6 */ // 0x80621EF4
    /* xoris r6, r4, 0x8000 */ // 0x80621EF8
    *(0xc + r1) = r6; // stw @ 0x80621EFC
    /* xoris r0, r0, 0x8000 */ // 0x80621F00
    /* lis r4, 0 */ // 0x80621F04
    *(8 + r1) = r5; // stw @ 0x80621F08
    /* lfd f3, 0(r7) */ // 0x80621F0C
    /* lfd f1, 8(r1) */ // 0x80621F10
    *(0x14 + r1) = r0; // stw @ 0x80621F14
    /* fsubs f2, f1, f3 */ // 0x80621F18
    /* lfs f0, 0(r4) */ // 0x80621F1C
    *(0x10 + r1) = r5; // stw @ 0x80621F20
    /* lfd f1, 0x10(r1) */ // 0x80621F24
    /* fsubs f1, f1, f3 */ // 0x80621F28
    /* fdivs f1, f2, f1 */ // 0x80621F2C
    /* stfs f1, 0x98(r3) */ // 0x80621F30
    /* .byte 0xfc, 0x00, 0x08, 0x40 */ // 0x80621F34
    if (>=) goto 0x0x80621f40;
    /* stfs f0, 0x98(r3) */ // 0x80621F3C
    r0 = *(0x90 + r3); // lwz @ 0x80621F40
    /* lis r4, 0 */ // 0x80621F44
    r4 = r4 + 0; // 0x80621F48
    r5 = *(0x94 + r3); // lha @ 0x80621F4C
    /* slwi r0, r0, 1 */ // 0x80621F50
    /* lhax r0, r4, r0 */ // 0x80621F54
    if (<=) goto 0x0x80621f68;
    /* li r0, -1 */ // 0x80621F60
    *(0x90 + r3) = r0; // stw @ 0x80621F64
    return;
}