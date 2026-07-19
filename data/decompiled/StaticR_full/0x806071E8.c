/* Function at 0x806071E8, size=164 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806071E8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806071F4
    r31 = r3;
    r4 = *(0 + r3); // lwz @ 0x806071FC
    r4 = *(4 + r4); // lwz @ 0x80607200
    r0 = *(0x14 + r4); // lwz @ 0x80607204
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x80607208
    if (!=) goto 0x0x80607278;
    /* li r0, 0 */ // 0x80607210
    *(0x234 + r3) = r0; // sth @ 0x80607214
    r5 = *(0 + r3); // lwz @ 0x80607218
    /* li r4, 0x1a */ // 0x8060721C
    r5 = *(4 + r5); // lwz @ 0x80607220
    r0 = *(8 + r5); // lwz @ 0x80607224
    r0 = r0 | 2; // 0x80607228
    *(8 + r5) = r0; // stw @ 0x8060722C
    r5 = *(0 + r3); // lwz @ 0x80607230
    r5 = *(4 + r5); // lwz @ 0x80607234
    r0 = *(0x14 + r5); // lwz @ 0x80607238
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x8060723C
    if (==) goto 0x0x80607248;
    /* li r4, 0x1b */ // 0x80607244
    FUN_8061E02C(r4); // bl 0x8061E02C
    r3 = *(0 + r31); // lwz @ 0x8060724C
    r3 = *(4 + r3); // lwz @ 0x80607250
    FUN_80623530(r4); // bl 0x80623530
    r3 = *(0 + r31); // lwz @ 0x80607258
    r3 = *(0 + r3); // lwz @ 0x8060725C
    r4 = *(0x34 + r3); // lwz @ 0x80607260
    if (==) goto 0x0x80607278;
    r3 = *(0x14 + r4); // lwz @ 0x8060726C
    r0 = r3 + 1; // 0x80607270
    *(0x14 + r4) = r0; // stw @ 0x80607274
    r0 = *(0x14 + r1); // lwz @ 0x80607278
    r31 = *(0xc + r1); // lwz @ 0x8060727C
    return;
}