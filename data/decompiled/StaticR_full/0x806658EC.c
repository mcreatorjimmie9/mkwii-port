/* Function at 0x806658EC, size=292 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806658EC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80665900
    r30 = r3;
    r5 = *(8 + r3); // lwz @ 0x80665908
    r0 = *(0xbb + r5); // lbz @ 0x8066590C
    /* clrlwi. r0, r0, 0x1f */ // 0x80665910
    if (!=) goto 0x0x80665920;
    /* li r3, 0 */ // 0x80665918
    /* b 0x806659d8 */ // 0x8066591C
    r3 = *(0xc + r5); // lwz @ 0x80665920
    if (!=) goto 0x0x80665934;
    /* li r3, 1 */ // 0x8066592C
    /* b 0x806659d8 */ // 0x80665930
    r0 = *(0xbb + r3); // lbz @ 0x80665934
    /* clrlwi. r0, r0, 0x1f */ // 0x80665938
    if (!=) goto 0x0x80665948;
    /* li r3, 0 */ // 0x80665940
    /* b 0x806659d8 */ // 0x80665944
    r3 = *(0xc + r3); // lwz @ 0x80665948
    if (!=) goto 0x0x8066595c;
    /* li r3, 1 */ // 0x80665954
    /* b 0x806659d8 */ // 0x80665958
    r0 = *(0xbb + r3); // lbz @ 0x8066595C
    /* clrlwi. r0, r0, 0x1f */ // 0x80665960
    if (!=) goto 0x0x80665970;
    /* li r3, 0 */ // 0x80665968
    /* b 0x806659d8 */ // 0x8066596C
    r3 = *(0xc + r3); // lwz @ 0x80665970
    if (!=) goto 0x0x80665984;
    /* li r3, 1 */ // 0x8066597C
    /* b 0x806659d8 */ // 0x80665980
    r0 = *(0xbb + r3); // lbz @ 0x80665984
    /* clrlwi. r0, r0, 0x1f */ // 0x80665988
    if (!=) goto 0x0x80665998;
    /* li r3, 0 */ // 0x80665990
    /* b 0x806659d8 */ // 0x80665994
    r3 = *(0xc + r3); // lwz @ 0x80665998
    if (!=) goto 0x0x806659ac;
    /* li r3, 1 */ // 0x806659A4
    /* b 0x806659d8 */ // 0x806659A8
    r0 = *(0xbb + r3); // lbz @ 0x806659AC
    /* clrlwi. r0, r0, 0x1f */ // 0x806659B0
    if (!=) goto 0x0x806659c0;
    /* li r3, 0 */ // 0x806659B8
    /* b 0x806659d8 */ // 0x806659BC
    r3 = *(0xc + r3); // lwz @ 0x806659C0
    if (!=) goto 0x0x806659d4;
    /* li r3, 1 */ // 0x806659CC
    /* b 0x806659d8 */ // 0x806659D0
    FUN_806650B4(r3); // bl 0x806650B4
    if (==) goto 0x0x806659f8;
    r3 = *(8 + r30); // lwz @ 0x806659E0
    r4 = r31;
    r12 = *(0 + r3); // lwz @ 0x806659E8
    r12 = *(0x18 + r12); // lwz @ 0x806659EC
    /* mtctr r12 */ // 0x806659F0
    /* bctrl  */ // 0x806659F4
    r0 = *(0x14 + r1); // lwz @ 0x806659F8
    r31 = *(0xc + r1); // lwz @ 0x806659FC
    r30 = *(8 + r1); // lwz @ 0x80665A00
    return;
}