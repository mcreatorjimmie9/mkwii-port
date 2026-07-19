/* Function at 0x8070999C, size=268 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 8 function(s) */

int FUN_8070999C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r4, 0 */ // 0x807099A4
    *(0x18 + r1) = r30; // stw @ 0x807099B0
    *(0x14 + r1) = r29; // stw @ 0x807099B4
    r29 = r3;
    r5 = *(0x28f4 + r3); // lwz @ 0x807099BC
    r3 = r5 + 0x98; // 0x807099C0
    FUN_8069F4B0(r3); // bl 0x8069F4B0
    r0 = *(0x38 + r3); // lwz @ 0x807099C8
    if (!=) goto 0x0x80709a8c;
    r3 = *(0x28f8 + r29); // lwz @ 0x807099D4
    /* li r4, 0 */ // 0x807099D8
    r3 = r3 + 0x98; // 0x807099DC
    FUN_8069F4B0(r4, r3); // bl 0x8069F4B0
    r0 = *(0x38 + r3); // lwz @ 0x807099E4
    if (!=) goto 0x0x80709a8c;
    r31 = *(0x28f4 + r29); // lwz @ 0x807099F0
    /* li r4, 0 */ // 0x807099F4
    r3 = r31 + 0x98; // 0x807099F8
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80709A00
    /* li r4, 4 */ // 0x80709A04
    /* lfs f1, 0(r5) */ // 0x80709A08
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r30 = r31 + 0x174; // 0x80709A10
    /* li r31, 0 */ // 0x80709A14
    r3 = r30;
    /* li r4, 0 */ // 0x80709A1C
    FUN_80649FD0(r3, r4); // bl 0x80649FD0
    r31 = r31 + 1; // 0x80709A24
    r30 = r30 + 0x254; // 0x80709A28
    if (<) goto 0x0x80709a18;
    r3 = *(0x2904 + r29); // lwz @ 0x80709A34
    r0 = *(0x2900 + r29); // lwz @ 0x80709A38
    r3 = r3 + 1; // 0x80709A3C
    *(0x2904 + r29) = r3; // stw @ 0x80709A40
    if (<) goto 0x0x80709a54;
    /* li r0, 0 */ // 0x80709A4C
    *(0x2904 + r29) = r0; // stw @ 0x80709A50
    r4 = *(0x28f4 + r29); // lwz @ 0x80709A54
    r3 = r29;
    r0 = *(0x28f8 + r29); // lwz @ 0x80709A5C
    *(0x28f4 + r29) = r0; // stw @ 0x80709A60
    *(0x28f8 + r29) = r4; // stw @ 0x80709A64
    FUN_80709740(r3); // bl 0x80709740
    r3 = *(0x28f4 + r29); // lwz @ 0x80709A6C
    /* li r4, 0 */ // 0x80709A70
    r3 = r3 + 0x98; // 0x80709A74
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80709A7C
    /* li r4, 2 */ // 0x80709A80
    /* lfs f1, 0(r5) */ // 0x80709A84
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r0 = *(0x24 + r1); // lwz @ 0x80709A8C
    r31 = *(0x1c + r1); // lwz @ 0x80709A90
    r30 = *(0x18 + r1); // lwz @ 0x80709A94
    r29 = *(0x14 + r1); // lwz @ 0x80709A98
    return;
}