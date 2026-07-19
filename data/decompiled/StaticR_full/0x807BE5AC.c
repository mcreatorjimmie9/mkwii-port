/* Function at 0x807BE5AC, size=244 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_807BE5AC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x807BE5C0
    r3 = *(0x198 + r3); // lwz @ 0x807BE5C4
    r3 = *(0 + r3); // lwz @ 0x807BE5C8
    r3 = *(0x10 + r3); // lwz @ 0x807BE5CC
    r3 = *(0x144 + r3); // lwz @ 0x807BE5D0
    r12 = *(0x34 + r3); // lwz @ 0x807BE5D4
    r12 = *(0x3c + r12); // lwz @ 0x807BE5D8
    /* mtctr r12 */ // 0x807BE5DC
    /* bctrl  */ // 0x807BE5E0
    /* li r29, 0 */ // 0x807BE5E8
    if (==) goto 0x0x807be680;
    r3 = *(8 + r3); // lwz @ 0x807BE5F0
    if (==) goto 0x0x807be680;
    r12 = *(0 + r3); // lwz @ 0x807BE5FC
    r12 = *(0x10 + r12); // lwz @ 0x807BE600
    /* mtctr r12 */ // 0x807BE604
    /* bctrl  */ // 0x807BE608
    if (!=) goto 0x0x807be680;
    /* lis r30, 0 */ // 0x807BE614
    r3 = *(0 + r30); // lwz @ 0x807BE618
    FUN_807BFFC0(); // bl 0x807BFFC0
    r31 = r3;
    r3 = *(0 + r30); // lwz @ 0x807BE624
    /* li r4, 0x64 */ // 0x807BE628
    FUN_807C03BC(r4); // bl 0x807C03BC
    if (==) goto 0x0x807be64c;
    if (==) goto 0x0x807be654;
    if (==) goto 0x0x807be66c;
    /* b 0x807be680 */ // 0x807BE648
    /* li r29, 0 */ // 0x807BE64C
    /* b 0x807be680 */ // 0x807BE650
    /* xori r3, r3, 0x19 */ // 0x807BE654
    /* andi. r0, r3, 0x19 */ // 0x807BE658
    r3 = r3 >> 1; // srawi
    /* subf r0, r0, r3 */ // 0x807BE660
    /* srwi r29, r0, 0x1f */ // 0x807BE664
    /* b 0x807be680 */ // 0x807BE668
    /* xori r0, r3, 0x3c */ // 0x807BE66C
    r3 = r0 >> 1; // srawi
    r0 = r0 rlwinm 0; // rlwinm
    /* subf r0, r0, r3 */ // 0x807BE678
    /* srwi r29, r0, 0x1f */ // 0x807BE67C
    r31 = *(0x1c + r1); // lwz @ 0x807BE680
    r3 = r29;
    r30 = *(0x18 + r1); // lwz @ 0x807BE688
    r29 = *(0x14 + r1); // lwz @ 0x807BE68C
    r0 = *(0x24 + r1); // lwz @ 0x807BE690
    return;
}