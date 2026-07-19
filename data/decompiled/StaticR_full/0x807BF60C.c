/* Function at 0x807BF60C, size=264 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807BF60C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x807BF618
    r31 = r3;
    r4 = *(4 + r3); // lwz @ 0x807BF620
    r3 = *(0 + r4); // lwz @ 0x807BF624
    r3 = *(0x10 + r3); // lwz @ 0x807BF628
    r3 = *(0x144 + r3); // lwz @ 0x807BF62C
    r12 = *(0x34 + r3); // lwz @ 0x807BF630
    r12 = *(0x44 + r12); // lwz @ 0x807BF634
    /* mtctr r12 */ // 0x807BF638
    /* bctrl  */ // 0x807BF63C
    r4 = *(4 + r31); // lwz @ 0x807BF640
    r4 = *(0 + r4); // lwz @ 0x807BF644
    r4 = *(0 + r4); // lwz @ 0x807BF648
    r4 = *(4 + r4); // lwz @ 0x807BF64C
    r5 = *(4 + r4); // lwz @ 0x807BF650
    /* rlwinm. r0, r5, 0, 8, 8 */ // 0x807BF654
    if (==) goto 0x0x807bf678;
    /* rlwinm. r0, r5, 0, 1, 1 */ // 0x807BF65C
    if (!=) goto 0x0x807bf678;
    r0 = *(8 + r4); // lwz @ 0x807BF664
    /* clrlwi. r0, r0, 0x1f */ // 0x807BF668
    if (!=) goto 0x0x807bf678;
    /* li r0, 1 */ // 0x807BF670
    /* b 0x807bf67c */ // 0x807BF674
    /* li r0, 0 */ // 0x807BF678
    if (==) goto 0x0x807bf6a4;
    r12 = *(0 + r3); // lwz @ 0x807BF684
    r12 = *(0x24 + r12); // lwz @ 0x807BF688
    /* mtctr r12 */ // 0x807BF68C
    /* bctrl  */ // 0x807BF690
    if (==) goto 0x0x807bf6a4;
    /* li r0, 1 */ // 0x807BF69C
    /* b 0x807bf6a8 */ // 0x807BF6A0
    /* li r0, 0 */ // 0x807BF6A4
    if (==) goto 0x0x807bf700;
    /* lis r8, 0 */ // 0x807BF6B0
    r7 = *(0 + r8); // lwzu @ 0x807BF6B4
    r9 = *(4 + r31); // lwz @ 0x807BF6B8
    /* lis r3, 0 */ // 0x807BF6BC
    r6 = *(4 + r8); // lwz @ 0x807BF6C0
    /* li r4, 4 */ // 0x807BF6C4
    r5 = *(8 + r8); // lwz @ 0x807BF6C8
    r0 = *(0xc + r8); // lwz @ 0x807BF6CC
    *(8 + r1) = r7; // stw @ 0x807BF6D0
    r31 = *(4 + r9); // lwz @ 0x807BF6D4
    *(0xc + r1) = r6; // stw @ 0x807BF6D8
    r3 = *(0 + r3); // lwz @ 0x807BF6DC
    *(0x10 + r1) = r5; // stw @ 0x807BF6E0
    *(0x14 + r1) = r0; // stw @ 0x807BF6E4
    FUN_807C03BC(); // bl 0x807C03BC
    /* slwi r0, r3, 2 */ // 0x807BF6EC
    /* lwzx r4, r4, r0 */ // 0x807BF6F4
    r3 = r31;
    FUN_805AE794(r4, r3); // bl 0x805AE794
    r0 = *(0x24 + r1); // lwz @ 0x807BF700
    r31 = *(0x1c + r1); // lwz @ 0x807BF704
    return;
}