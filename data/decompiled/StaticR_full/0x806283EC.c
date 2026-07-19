/* Function at 0x806283EC, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806283EC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80628400
    r30 = r3;
    r0 = *(0x90 + r3); // lwz @ 0x80628408
    if (!=) goto 0x0x80628438;
    r4 = *(0x7c + r30); // lwz @ 0x80628414
    r3 = r31;
    FUN_80604C9C(r3); // bl 0x80604C9C
    if (!=) goto 0x0x80628458;
    r4 = *(0x7c + r30); // lwz @ 0x80628428
    r3 = r31;
    FUN_80604B2C(r3); // bl 0x80604B2C
    /* b 0x80628458 */ // 0x80628434
    r4 = *(0x7c + r30); // lwz @ 0x80628438
    r3 = r31;
    FUN_80604D54(r3, r3); // bl 0x80604D54
    if (!=) goto 0x0x80628458;
    r4 = *(0x7c + r30); // lwz @ 0x8062844C
    r3 = r31;
    FUN_80604BE4(r3); // bl 0x80604BE4
    r0 = *(0x14 + r1); // lwz @ 0x80628458
    r31 = *(0xc + r1); // lwz @ 0x8062845C
    r30 = *(8 + r1); // lwz @ 0x80628460
    return;
}