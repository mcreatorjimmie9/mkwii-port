/* Function at 0x806487F8, size=144 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806487F8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80648800
    /* lis r4, 0 */ // 0x80648804
    *(0x24 + r1) = r0; // stw @ 0x80648808
    /* lis r7, 0 */ // 0x8064880C
    /* lfs f0, 0(r5) */ // 0x80648810
    r4 = r4 + 0; // 0x80648814
    *(0x1c + r1) = r31; // stw @ 0x80648818
    r31 = r3;
    r6 = *(0 + r7); // lwz @ 0x80648820
    r0 = *(0x1c + r3); // lwz @ 0x80648824
    *(0x8c + r6) = r0; // stw @ 0x80648828
    r3 = *(0 + r7); // lwz @ 0x8064882C
    /* stfs f0, 0x90(r3) */ // 0x80648830
    r0 = *(4 + r4); // lwz @ 0x80648834
    if (>) goto 0x0x80648854;
    r12 = *(0 + r4); // lwz @ 0x80648840
    r3 = r4;
    r12 = *(0x18 + r12); // lwz @ 0x80648848
    /* mtctr r12 */ // 0x8064884C
    /* bctrl  */ // 0x80648850
    /* lis r4, 0 */ // 0x80648854
    r3 = *(0x1c + r31); // lwz @ 0x80648858
    r4 = r4 + 0; // 0x8064885C
    /* lis r7, 0 */ // 0x80648860
    r6 = *(8 + r4); // lwz @ 0x80648864
    r0 = *(0 + r3); // lwz @ 0x8064886C
    /* li r5, 0 */ // 0x80648870
    r3 = *(0 + r6); // lwz @ 0x80648874
    /* li r6, 6 */ // 0x80648878
    /* lfs f1, 0(r7) */ // 0x8064887C
    *(8 + r1) = r0; // stw @ 0x80648880
    FUN_805E3430(r5, r6); // bl 0x805E3430
}