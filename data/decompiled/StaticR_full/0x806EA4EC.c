/* Function at 0x806EA4EC, size=160 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806EA4EC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    *(0x8c + r1) = r31; // stw @ 0x806EA4F8
    r31 = r5;
    r3 = *(0 + r4); // lwz @ 0x806EA500
    if (!=) goto 0x0x806ea574;
    /* li r0, 0xf */ // 0x806EA50C
    /* li r3, 0 */ // 0x806EA514
    /* mtctr r0 */ // 0x806EA518
    *(4 + r5) = r3; // stw @ 0x806EA51C
    *(8 + r5) = r3; // stwu @ 0x806EA520
    if (counter-- != 0) goto 0x0x806ea51c;
    /* li r8, 0 */ // 0x806EA52C
    /* li r6, 0 */ // 0x806EA530
    /* b 0x806ea550 */ // 0x806EA534
    r3 = *(8 + r4); // lwz @ 0x806EA538
    r8 = r8 + 1; // 0x806EA53C
    /* lwzx r0, r3, r6 */ // 0x806EA540
    r6 = r6 + 0x1c; // 0x806EA544
    *(0 + r7) = r0; // stw @ 0x806EA548
    r7 = r7 + 4; // 0x806EA54C
    r5 = *(4 + r4); // lwz @ 0x806EA550
    if (<) goto 0x0x806ea538;
    r3 = r31;
    FUN_806E68B8(r3, r4); // bl 0x806E68B8
    /* li r0, 5 */ // 0x806EA568
    *(0x28 + r31) = r0; // stw @ 0x806EA56C
    /* b 0x806ea578 */ // 0x806EA570
    FUN_806EA58C(r4); // bl 0x806EA58C
    r0 = *(0x94 + r1); // lwz @ 0x806EA578
    r31 = *(0x8c + r1); // lwz @ 0x806EA57C
    return;
}