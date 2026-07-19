/* Function at 0x80828EC8, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_80828EC8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x80828EDC
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x80828EE4
    r29 = r3;
    if (==) goto 0x0x80828efc;
    /* lis r31, 0 */ // 0x80828EF0
    r31 = r31 + 0; // 0x80828EF4
    /* b 0x80828f24 */ // 0x80828EF8
    if (==) goto 0x0x80828f10;
    /* lis r31, 0 */ // 0x80828F04
    r31 = r31 + 0; // 0x80828F08
    /* b 0x80828f24 */ // 0x80828F0C
    /* mulli r0, r4, 0x74 */ // 0x80828F10
    /* lis r5, 0 */ // 0x80828F14
    r5 = r5 + 0; // 0x80828F18
    r5 = r5 + r0; // 0x80828F1C
    r31 = *(0x24 + r5); // lwz @ 0x80828F20
    *(0x6c + r3) = r8; // stb @ 0x80828F24
    r3 = r29;
    FUN_80829688(r5, r3); // bl 0x80829688
    r12 = r31;
    r3 = r30;
    r4 = r29;
    /* li r5, 0 */ // 0x80828F3C
    /* mtctr r12 */ // 0x80828F40
    /* bctrl  */ // 0x80828F44
    r3 = r29;
    FUN_80829420(r4, r5, r3); // bl 0x80829420
    r0 = *(0x7c + r29); // lwz @ 0x80828F50
    r0 = r0 | 1; // 0x80828F54
    *(0x7c + r29) = r0; // stw @ 0x80828F58
    r31 = *(0x1c + r1); // lwz @ 0x80828F5C
    r30 = *(0x18 + r1); // lwz @ 0x80828F60
    r29 = *(0x14 + r1); // lwz @ 0x80828F64
    r0 = *(0x24 + r1); // lwz @ 0x80828F68
    return;
}