/* Function at 0x806A0540, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_806A0540(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x806A0550
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806A0558
    r30 = r3;
    if (==) goto 0x0x806a05b8;
    /* li r4, -1 */ // 0x806A0564
    r3 = r3 + 0x158; // 0x806A0568
    FUN_8066C30C(r4, r3); // bl 0x8066C30C
    r3 = r30 + 0x144; // 0x806A0570
    /* li r4, -1 */ // 0x806A0574
    FUN_8066C30C(r4, r3, r3, r4); // bl 0x8066C30C
    r3 = r30 + 0xa8; // 0x806A057C
    /* li r4, -1 */ // 0x806A0580
    FUN_80665FE4(r3, r4, r3, r4); // bl 0x80665FE4
    r3 = r30 + 0x98; // 0x806A0588
    /* li r4, -1 */ // 0x806A058C
    FUN_8069F084(r3, r4, r3, r4); // bl 0x8069F084
    if (==) goto 0x0x806a05a8;
    r3 = r30 + 0x68; // 0x806A059C
    /* li r4, -1 */ // 0x806A05A0
    FUN_8064DB0C(r3, r4); // bl 0x8064DB0C
    if (<=) goto 0x0x806a05b8;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x806A05BC
    r30 = *(8 + r1); // lwz @ 0x806A05C0
    r0 = *(0x14 + r1); // lwz @ 0x806A05C4
    return;
}