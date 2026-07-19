/* Function at 0x806206D8, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806206D8(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x806206E4
    r31 = r3;
    r0 = *(0x8c + r3); // lbz @ 0x806206EC
    if (==) goto 0x0x80620748;
    FUN_8061E908(); // bl 0x8061E908
    r4 = r3;
    r3 = *(0x7c + r31); // lwz @ 0x80620700
    r4 = *(0x12 + r4); // lbz @ 0x80620704
    r12 = *(0 + r3); // lwz @ 0x80620708
    r12 = *(0x10 + r12); // lwz @ 0x8062070C
    /* mtctr r12 */ // 0x80620710
    /* bctrl  */ // 0x80620714
    r0 = *(0x88 + r31); // lwz @ 0x80620718
    if (==) goto 0x0x80620748;
    r3 = r31;
    FUN_8061E908(r3); // bl 0x8061E908
    r4 = r3;
    r3 = *(0x88 + r31); // lwz @ 0x80620730
    r4 = *(0x12 + r4); // lbz @ 0x80620734
    r12 = *(0 + r3); // lwz @ 0x80620738
    r12 = *(0x10 + r12); // lwz @ 0x8062073C
    /* mtctr r12 */ // 0x80620740
    /* bctrl  */ // 0x80620744
    r0 = *(0x14 + r1); // lwz @ 0x80620748
    r31 = *(0xc + r1); // lwz @ 0x8062074C
    return;
}