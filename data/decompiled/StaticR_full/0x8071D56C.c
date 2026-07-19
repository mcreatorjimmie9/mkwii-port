/* Function at 0x8071D56C, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_8071D56C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8071D580
    r30 = r3;
    r0 = *(0x33 + r3); // lbz @ 0x8071D588
    if (!=) goto 0x0x8071d5e8;
    /* lis r3, 0 */ // 0x8071D594
    r4 = r5;
    r3 = *(0 + r3); // lwz @ 0x8071D59C
    FUN_8061D97C(r3, r4); // bl 0x8061D97C
    FUN_8061DECC(r3, r4); // bl 0x8061DECC
    if (==) goto 0x0x8071d5d4;
    r0 = *(0x30 + r30); // lbz @ 0x8071D5B0
    if (!=) goto 0x0x8071d5d4;
    /* lis r3, 0 */ // 0x8071D5BC
    r4 = r31;
    r3 = r3 + 0; // 0x8071D5C4
    r3 = r3 + 0x132; // 0x8071D5C8
    FUN_807456E0(r3, r4, r3, r3); // bl 0x807456E0
    /* b 0x8071d5e8 */ // 0x8071D5D0
    /* lis r3, 0 */ // 0x8071D5D4
    r4 = r31;
    r3 = r3 + 0; // 0x8071D5DC
    r3 = r3 + 0x145; // 0x8071D5E0
    FUN_807456E0(r3, r4, r3, r3); // bl 0x807456E0
    r0 = *(0x14 + r1); // lwz @ 0x8071D5E8
    r31 = *(0xc + r1); // lwz @ 0x8071D5EC
    r30 = *(8 + r1); // lwz @ 0x8071D5F0
    return;
}