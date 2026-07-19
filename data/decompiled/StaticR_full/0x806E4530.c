/* Function at 0x806E4530, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806E4530(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x806E4540
    *(0x18 + r1) = r30; // stw @ 0x806E4544
    /* li r30, 0 */ // 0x806E4548
    *(0x14 + r1) = r29; // stw @ 0x806E454C
    r29 = r4;
    r3 = *(0 + r31); // lwz @ 0x806E4554
    r4 = r30;
    FUN_806E9970(r4); // bl 0x806E9970
    if (!=) goto 0x0x806e4570;
    r3 = r30;
    /* b 0x806e4580 */ // 0x806E456C
    r30 = r30 + 1; // 0x806E4570
    if (<) goto 0x0x806e4554;
    /* li r3, -1 */ // 0x806E457C
    r0 = *(0x24 + r1); // lwz @ 0x806E4580
    r31 = *(0x1c + r1); // lwz @ 0x806E4584
    r30 = *(0x18 + r1); // lwz @ 0x806E4588
    r29 = *(0x14 + r1); // lwz @ 0x806E458C
    return;
}