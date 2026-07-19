/* Function at 0x8063D600, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8063D600(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x8063D608
    *(0x14 + r1) = r0; // stw @ 0x8063D60C
    *(0xc + r1) = r31; // stw @ 0x8063D610
    r31 = r3;
    r0 = *(0 + r4); // lwz @ 0x8063D618
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x8063D61C
    if (!=) goto 0x0x8063d670;
    r12 = *(0 + r3); // lwz @ 0x8063D624
    r12 = *(0x18 + r12); // lwz @ 0x8063D628
    /* mtctr r12 */ // 0x8063D62C
    /* bctrl  */ // 0x8063D630
    r3 = *(0x20 + r31); // lwz @ 0x8063D634
    r3 = *(0x84 + r3); // lwz @ 0x8063D638
    if (==) goto 0x0x8063d670;
    /* lis r4, 0 */ // 0x8063D644
    /* li r5, 0xb8 */ // 0x8063D648
    r4 = *(0 + r4); // lwz @ 0x8063D64C
    /* li r6, 0 */ // 0x8063D650
    /* li r7, 0 */ // 0x8063D654
    /* li r8, 1 */ // 0x8063D658
    r4 = *(0x44 + r4); // lwz @ 0x8063D65C
    r4 = *(0 + r4); // lwz @ 0x8063D660
    r0 = *(4 + r4); // lhz @ 0x8063D664
    r4 = r0 rlwinm 0x1e; // rlwinm
    FUN_805F3AD0(r8); // bl 0x805F3AD0
    r0 = *(0x14 + r1); // lwz @ 0x8063D670
    r31 = *(0xc + r1); // lwz @ 0x8063D674
    return;
}