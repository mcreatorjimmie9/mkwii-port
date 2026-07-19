/* Function at 0x80733230, size=176 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_80733230(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x8073323C
    r31 = r3;
    r0 = *(0xd + r3); // lbz @ 0x80733244
    if (!=) goto 0x0x80733290;
    r4 = *(0x614 + r3); // lwz @ 0x80733250
    r7 = r3 + 0x6f4; // 0x80733254
    r8 = r3 + 0x7c8; // 0x80733258
    /* li r5, 0x10 */ // 0x8073325C
    /* li r6, 0x11 */ // 0x80733260
    /* li r9, 1 */ // 0x80733264
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r4 = *(0x614 + r31); // lwz @ 0x8073326C
    r3 = r31;
    r7 = r31 + 0x6f4; // 0x80733274
    r8 = r31 + 0x7c8; // 0x80733278
    /* li r5, 0x11 */ // 0x8073327C
    /* li r6, 0x12 */ // 0x80733280
    /* li r9, 1 */ // 0x80733284
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    /* b 0x807332cc */ // 0x8073328C
    r4 = *(0x614 + r3); // lwz @ 0x80733290
    r7 = r3 + 0x818; // 0x80733294
    r8 = r3 + 0x7c8; // 0x80733298
    /* li r5, 0x10 */ // 0x8073329C
    /* li r6, 0x11 */ // 0x807332A0
    /* li r9, 1 */ // 0x807332A4
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r4 = *(0x614 + r31); // lwz @ 0x807332AC
    r3 = r31;
    r7 = r31 + 0x818; // 0x807332B4
    r8 = r31 + 0x7c8; // 0x807332B8
    /* li r5, 0x11 */ // 0x807332BC
    /* li r6, 0x12 */ // 0x807332C0
    /* li r9, 1 */ // 0x807332C4
    FUN_807273A0(r7, r8, r5, r6, r9); // bl 0x807273A0
    r0 = *(0x14 + r1); // lwz @ 0x807332CC
    r31 = *(0xc + r1); // lwz @ 0x807332D0
    return;
}