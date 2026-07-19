/* Function at 0x806A50A4, size=336 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_806A50A4(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806A50B4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806A50BC
    r30 = r3;
    if (==) goto 0x0x806a50d4;
    if (==) goto 0x0x806a515c;
    /* b 0x806a51dc */ // 0x806A50D0
    /* li r4, 3 */ // 0x806A50D4
    r3 = r3 + 0x98; // 0x806A50D8
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806A50E0
    /* li r4, 0 */ // 0x806A50E4
    /* lfs f1, 0(r5) */ // 0x806A50E8
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r3 = *(0x28c + r30); // lwz @ 0x806A50F0
    r0 = *(0x290 + r30); // lwz @ 0x806A50F4
    r4 = r3 + 1; // 0x806A50F8
    if (<) goto 0x0x806a5108;
    /* li r4, 0 */ // 0x806A5104
    r12 = *(0 + r30); // lwz @ 0x806A5108
    r3 = r30;
    r12 = *(0x50 + r12); // lwz @ 0x806A5110
    /* mtctr r12 */ // 0x806A5114
    /* bctrl  */ // 0x806A5118
    r12 = *(0 + r30); // lwz @ 0x806A511C
    r3 = r30;
    r4 = r31;
    r12 = *(0x48 + r12); // lwz @ 0x806A5128
    /* mtctr r12 */ // 0x806A512C
    /* bctrl  */ // 0x806A5130
    r3 = *(0x284 + r30); // lwz @ 0x806A5134
    if (==) goto 0x0x806a51dc;
    r12 = *(0 + r3); // lwz @ 0x806A5140
    r4 = r30;
    r5 = r31;
    r12 = *(8 + r12); // lwz @ 0x806A514C
    /* mtctr r12 */ // 0x806A5150
    /* bctrl  */ // 0x806A5154
    /* b 0x806a51dc */ // 0x806A5158
    /* li r4, 4 */ // 0x806A515C
    r3 = r3 + 0x98; // 0x806A5160
    FUN_8069F4A0(r4, r3); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x806A5168
    /* li r4, 0 */ // 0x806A516C
    /* lfs f1, 0(r5) */ // 0x806A5170
    FUN_8069F59C(r3, r5, r4); // bl 0x8069F59C
    r3 = *(0x28c + r30); // lwz @ 0x806A5178
    /* addic. r4, r3, -1 */ // 0x806A517C
    if (>=) goto 0x0x806a518c;
    r3 = *(0x290 + r30); // lwz @ 0x806A5184
    r4 = r3 + -1; // 0x806A5188
    r12 = *(0 + r30); // lwz @ 0x806A518C
    r3 = r30;
    r12 = *(0x50 + r12); // lwz @ 0x806A5194
    /* mtctr r12 */ // 0x806A5198
    /* bctrl  */ // 0x806A519C
    r12 = *(0 + r30); // lwz @ 0x806A51A0
    r3 = r30;
    r4 = r31;
    r12 = *(0x4c + r12); // lwz @ 0x806A51AC
    /* mtctr r12 */ // 0x806A51B0
    /* bctrl  */ // 0x806A51B4
    r3 = *(0x284 + r30); // lwz @ 0x806A51B8
    if (==) goto 0x0x806a51dc;
    r12 = *(0 + r3); // lwz @ 0x806A51C4
    r4 = r30;
    r5 = r31;
    r12 = *(8 + r12); // lwz @ 0x806A51D0
    /* mtctr r12 */ // 0x806A51D4
    /* bctrl  */ // 0x806A51D8
    r0 = *(0x14 + r1); // lwz @ 0x806A51DC
    r31 = *(0xc + r1); // lwz @ 0x806A51E0
    r30 = *(8 + r1); // lwz @ 0x806A51E4
    return;
}