/* Function at 0x808F92D0, size=104 bytes */
/* Stack frame: 0 bytes */

int FUN_808F92D0(int r3, int r4, int r5, int r6)
{
    r6 = *(0x18 + r3); // lwz @ 0x808F92D0
    /* cmplw cr1, r4, r6 */
    if (>=) goto 0x0x808f92e4;
    /* li r3, 0 */ // 0x808F92DC
    return;
    r0 = *(0x26 + r3); // lbz @ 0x808F92E4
    r5 = r6 + r0; // 0x808F92E8
    r0 = r5 + -1; // 0x808F92EC
    if (<=) goto 0x0x808f9300;
    /* li r3, 0 */ // 0x808F92F8
    return;
    if (>=) goto 0x0x808f930c;
    /* li r5, -1 */ // 0x808F9304
    /* b 0x808f9318 */ // 0x808F9308
    /* li r5, -1 */ // 0x808F930C
    if (>) goto 0x0x808f9318;
    /* subf r5, r6, r4 */ // 0x808F9314
    /* li r4, 1 */ // 0x808F9318
    r0 = *(0x20 + r3); // lwz @ 0x808F931C
    r3 = r4 << r5; // slw
    r3 = r3 & r0; // 0x808F9324
    /* neg r0, r3 */ // 0x808F9328
    r0 = r0 | r3; // 0x808F932C
    /* srwi r3, r0, 0x1f */ // 0x808F9330
    return;
}