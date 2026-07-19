/* Function at 0x8083FC18, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8083FC18(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8083FC20
    *(0x14 + r1) = r0; // stw @ 0x8083FC24
    *(0xc + r1) = r31; // stw @ 0x8083FC28
    r31 = r3;
    r0 = *(0 + r4); // lbz @ 0x8083FC30
    if (==) goto 0x0x8083fc54;
    r4 = *(0 + r31); // lwz @ 0x8083FC3C
    /* lis r3, 0 */ // 0x8083FC40
    r3 = *(0 + r3); // lwz @ 0x8083FC44
    r4 = *(0x18 + r4); // lbz @ 0x8083FC48
    r5 = *(0x20 + r31); // lwz @ 0x8083FC4C
    FUN_806F1474(r3); // bl 0x806F1474
    /* li r3, 0 */ // 0x8083FC54
    /* li r0, 0x14 */ // 0x8083FC58
    *(4 + r31) = r3; // stw @ 0x8083FC5C
    *(8 + r31) = r3; // stw @ 0x8083FC60
    *(0x18 + r31) = r0; // stw @ 0x8083FC64
    *(0x1c + r31) = r0; // stw @ 0x8083FC68
    *(0x20 + r31) = r0; // stw @ 0x8083FC6C
    *(0x24 + r31) = r0; // stw @ 0x8083FC70
    *(0x2d + r31) = r3; // stb @ 0x8083FC74
    *(0x2e + r31) = r3; // stb @ 0x8083FC78
    r31 = *(0xc + r1); // lwz @ 0x8083FC7C
    r0 = *(0x14 + r1); // lwz @ 0x8083FC80
    return;
}