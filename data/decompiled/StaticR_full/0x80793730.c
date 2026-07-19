/* Function at 0x80793730, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80793730(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4;
    /* li r4, 0 */ // 0x8079373C
    *(0x14 + r1) = r0; // stw @ 0x80793740
    r6 = r3;
    *(0xc + r1) = r31; // stw @ 0x80793748
    r0 = *(0x84 + r3); // lwz @ 0x8079374C
    /* mtctr r0 */ // 0x80793750
    if (<=) goto 0x0x80793784;
    r0 = *(0x80 + r6); // lwz @ 0x8079375C
    if (!=) goto 0x0x80793778;
    /* slwi r0, r4, 2 */ // 0x80793768
    r4 = r3 + r0; // 0x8079376C
    r31 = r4 + 0x80; // 0x80793770
    /* b 0x80793788 */ // 0x80793774
    r6 = r6 + 4; // 0x80793778
    r4 = r4 + 1; // 0x8079377C
    if (counter-- != 0) goto 0x0x8079375c;
    /* li r31, 0 */ // 0x80793784
    if (==) goto 0x0x807937a4;
    r4 = r31;
    /* li r6, 0 */ // 0x80793794
    FUN_805E3430(r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x807937a8 */ // 0x807937A0
    /* li r3, 0 */ // 0x807937A4
    r0 = *(0x14 + r1); // lwz @ 0x807937A8
    r31 = *(0xc + r1); // lwz @ 0x807937AC
}