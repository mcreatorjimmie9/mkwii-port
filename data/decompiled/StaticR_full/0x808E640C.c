/* Function at 0x808E640C, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_808E640C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808E641C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808E6424
    r30 = r3;
    if (==) goto 0x0x808e649c;
    /* addic. r3, r3, 0x9cc */ // 0x808E6430
    if (==) goto 0x0x808e6440;
    /* li r4, 0 */ // 0x808E6438
    FUN_806A0540(r4); // bl 0x806A0540
    /* addic. r3, r30, 0x854 */ // 0x808E6440
    if (==) goto 0x0x808e6450;
    /* li r4, 0 */ // 0x808E6448
    FUN_806A0540(r4, r4); // bl 0x806A0540
    r3 = r30 + 0x6d0; // 0x808E6450
    /* li r4, -1 */ // 0x808E6454
    FUN_806CABB4(r4, r3, r4); // bl 0x806CABB4
    r3 = r30 + 0x430; // 0x808E645C
    /* li r4, -1 */ // 0x808E6460
    FUN_8066A1A0(r3, r4, r3, r4); // bl 0x8066A1A0
    if (==) goto 0x0x808e648c;
    /* addic. r3, r30, 0x54 */ // 0x808E6470
    if (==) goto 0x0x808e6480;
    /* li r4, 0 */ // 0x808E6478
    FUN_806498AC(r4); // bl 0x806498AC
    r3 = r30;
    /* li r4, 0 */ // 0x808E6484
    FUN_806711C4(r4, r3, r4); // bl 0x806711C4
    if (<=) goto 0x0x808e649c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808E64A0
    r30 = *(8 + r1); // lwz @ 0x808E64A4
    r0 = *(0x14 + r1); // lwz @ 0x808E64A8
    return;
}