/* Function at 0x80680348, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_80680348(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x80680350
    *(0xc + r1) = r31; // stw @ 0x80680358
    *(8 + r1) = r30; // stw @ 0x8068035C
    r30 = r3;
    r0 = *(8 + r3); // lwz @ 0x80680364
    r4 = *(0 + r4); // lwz @ 0x80680368
    r31 = r4 + 0x34; // 0x80680370
    if (!=) goto 0x0x806803d0;
    r4 = *(0x4b0 + r30); // lwz @ 0x80680378
    r3 = r31;
    FUN_8067F430(r3); // bl 0x8067F430
    if (==) goto 0x0x806803d0;
    r4 = *(0x4b0 + r30); // lwz @ 0x8068038C
    r3 = r31;
    FUN_8067F3BC(r3); // bl 0x8067F3BC
    r4 = r3;
    r3 = r30 + 0x44; // 0x8068039C
    FUN_80670D24(r3, r4, r3); // bl 0x80670D24
    r3 = r30 + 0x44; // 0x806803A4
    FUN_80670D2C(r4, r3, r3); // bl 0x80670D2C
    /* lis r4, 0 */ // 0x806803AC
    r3 = r30;
    /* lfs f1, 0(r4) */ // 0x806803B4
    /* li r4, 0 */ // 0x806803B8
    FUN_80671C48(r4, r3, r4); // bl 0x80671C48
    r5 = *(0x4b0 + r30); // lwz @ 0x806803C0
    r3 = r30;
    /* li r4, 0x20 */ // 0x806803C8
    FUN_806724B8(r4, r3, r4); // bl 0x806724B8
    r0 = *(0x14 + r1); // lwz @ 0x806803D0
    r31 = *(0xc + r1); // lwz @ 0x806803D4
    r30 = *(8 + r1); // lwz @ 0x806803D8
    return;
}