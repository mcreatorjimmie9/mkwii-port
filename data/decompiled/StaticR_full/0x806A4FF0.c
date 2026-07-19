/* Function at 0x806A4FF0, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_806A4FF0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    /* li r4, 4 */ // 0x806A5004
    *(8 + r1) = r30; // stw @ 0x806A5008
    r30 = r3;
    r3 = r3 + 0x98; // 0x806A5010
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806A5018
    /* li r4, 0 */ // 0x806A501C
    /* lfs f1, 0(r5) */ // 0x806A5020
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r3 = *(0x28c + r30); // lwz @ 0x806A5028
    /* addic. r4, r3, -1 */ // 0x806A502C
    if (>=) goto 0x0x806a503c;
    r3 = *(0x290 + r30); // lwz @ 0x806A5034
    r4 = r3 + -1; // 0x806A5038
    r12 = *(0 + r30); // lwz @ 0x806A503C
    r3 = r30;
    r12 = *(0x50 + r12); // lwz @ 0x806A5044
    /* mtctr r12 */ // 0x806A5048
    /* bctrl  */ // 0x806A504C
    r12 = *(0 + r30); // lwz @ 0x806A5050
    r3 = r30;
    r4 = r31;
    r12 = *(0x4c + r12); // lwz @ 0x806A505C
    /* mtctr r12 */ // 0x806A5060
    /* bctrl  */ // 0x806A5064
    r3 = *(0x284 + r30); // lwz @ 0x806A5068
    if (==) goto 0x0x806a508c;
    r12 = *(0 + r3); // lwz @ 0x806A5074
    r4 = r30;
    r5 = r31;
    r12 = *(8 + r12); // lwz @ 0x806A5080
    /* mtctr r12 */ // 0x806A5084
    /* bctrl  */ // 0x806A5088
    r0 = *(0x14 + r1); // lwz @ 0x806A508C
    r31 = *(0xc + r1); // lwz @ 0x806A5090
    r30 = *(8 + r1); // lwz @ 0x806A5094
    return;
}