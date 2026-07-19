/* Function at 0x8087C5EC, size=272 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8087C5EC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* li r4, 0 */ // 0x8087C600
    *(8 + r1) = r30; // stw @ 0x8087C604
    r30 = r3;
    r3 = r3 + 0x98; // 0x8087C60C
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    r0 = *(0x38 + r3); // lwz @ 0x8087C614
    if (==) goto 0x0x8087c628;
    if (!=) goto 0x0x8087c6e4;
    r0 = *(0x18c + r30); // lwz @ 0x8087C628
    if (==) goto 0x0x8087c640;
    /* lis r3, 0 */ // 0x8087C634
    /* lfs f0, 0(r3) */ // 0x8087C638
    /* stfs f0, 0x184(r30) */ // 0x8087C63C
    r3 = *(0x180 + r30); // lwz @ 0x8087C640
    /* li r0, -1 */ // 0x8087C644
    *(0x18c + r30) = r31; // stw @ 0x8087C648
    *(0x17c + r30) = r0; // stw @ 0x8087C650
    if (==) goto 0x0x8087c694;
    r0 = *(4 + r31); // lwz @ 0x8087C658
    if (!=) goto 0x0x8087c694;
    /* li r0, 5 */ // 0x8087C664
    *(0x180 + r30) = r0; // stw @ 0x8087C668
    /* li r3, 7 */ // 0x8087C66C
    /* li r4, 1 */ // 0x8087C670
    FUN_808CFF44(r3, r4); // bl 0x808CFF44
    /* lis r4, 0 */ // 0x8087C678
    r5 = r3;
    r4 = r4 + 0; // 0x8087C680
    r3 = r30;
    r4 = r4 + 0x124; // 0x8087C688
    FUN_806A0D70(r4, r5, r4, r3, r4); // bl 0x806A0D70
    /* b 0x8087c6e4 */ // 0x8087C690
    r0 = *(4 + r31); // lwz @ 0x8087C694
    if (==) goto 0x0x8087c6e4;
    if (==) goto 0x0x8087c6e0;
    if (!=) goto 0x0x8087c6e0;
    /* li r0, 1 */ // 0x8087C6B0
    *(0x180 + r30) = r0; // stw @ 0x8087C6B4
    /* li r3, 1 */ // 0x8087C6B8
    /* li r4, 1 */ // 0x8087C6BC
    FUN_808CFF44(r3, r4); // bl 0x808CFF44
    /* lis r4, 0 */ // 0x8087C6C4
    r5 = r3;
    r4 = r4 + 0; // 0x8087C6CC
    r3 = r30;
    r4 = r4 + 0x129; // 0x8087C6D4
    FUN_806A0D70(r4, r5, r4, r3, r4); // bl 0x806A0D70
    /* b 0x8087c6e4 */ // 0x8087C6DC
    r0 = *(0x14 + r1); // lwz @ 0x8087C6E4
    r31 = *(0xc + r1); // lwz @ 0x8087C6E8
    r30 = *(8 + r1); // lwz @ 0x8087C6EC
    return;
}