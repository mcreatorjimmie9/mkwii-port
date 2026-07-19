/* Function at 0x805EC514, size=208 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805EC514(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805EC530
    r28 = r3;
    r5 = *(0x10 + r3); // lwz @ 0x805EC538
    r0 = *(4 + r5); // lwz @ 0x805EC53C
    if (!=) goto 0x0x805ec550;
    r0 = *(0 + r5); // lwz @ 0x805EC548
    /* b 0x805ec554 */ // 0x805EC54C
    /* li r0, 0 */ // 0x805EC550
    if (==) goto 0x0x805ec5c4;
    r31 = r28;
    /* li r30, 0 */ // 0x805EC560
    if (!=) goto 0x0x805ec574;
    /* li r5, 0 */ // 0x805EC56C
    /* b 0x805ec590 */ // 0x805EC570
    r3 = *(0x14 + r28); // lwz @ 0x805EC574
    r0 = *(4 + r3); // lwz @ 0x805EC578
    if (!=) goto 0x0x805ec58c;
    r5 = *(0 + r3); // lwz @ 0x805EC584
    /* b 0x805ec590 */ // 0x805EC588
    /* li r5, 0 */ // 0x805EC58C
    r4 = *(0x14 + r31); // lwz @ 0x805EC590
    r3 = r29;
    r0 = *(4 + r4); // lwz @ 0x805EC598
    if (!=) goto 0x0x805ec5ac;
    r4 = *(0 + r4); // lwz @ 0x805EC5A4
    /* b 0x805ec5b0 */ // 0x805EC5A8
    /* li r4, 0 */ // 0x805EC5AC
    FUN_805B63E0(r4); // bl 0x805B63E0
    r30 = r30 + 1; // 0x805EC5B4
    r31 = r31 + 4; // 0x805EC5B8
    if (<) goto 0x0x805ec564;
    r0 = *(0x24 + r1); // lwz @ 0x805EC5C4
    r31 = *(0x1c + r1); // lwz @ 0x805EC5C8
    r30 = *(0x18 + r1); // lwz @ 0x805EC5CC
    r29 = *(0x14 + r1); // lwz @ 0x805EC5D0
    r28 = *(0x10 + r1); // lwz @ 0x805EC5D4
    return;
}