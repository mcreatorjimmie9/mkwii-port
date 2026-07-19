/* Function at 0x8084102C, size=168 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8084102C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80841034
    *(0x14 + r1) = r0; // stw @ 0x80841038
    *(0xc + r1) = r31; // stw @ 0x8084103C
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x80841044
    FUN_805C25E8(r4); // bl 0x805C25E8
    if (!=) goto 0x0x80841070;
    /* li r4, 0x708 */ // 0x80841054
    /* li r3, 0x384 */ // 0x80841058
    /* li r0, 0x4b0 */ // 0x8084105C
    *(0x34 + r31) = r4; // stw @ 0x80841060
    *(0x38 + r31) = r4; // stw @ 0x80841064
    *(0x3c + r31) = r3; // stw @ 0x80841068
    *(0x40 + r31) = r0; // stw @ 0x8084106C
    r3 = *(0x34 + r31); // lwz @ 0x80841070
    if (<=) goto 0x0x80841084;
    r0 = r3 + -1; // 0x8084107C
    *(0x34 + r31) = r0; // stw @ 0x80841080
    r3 = *(0x38 + r31); // lwz @ 0x80841084
    if (<=) goto 0x0x80841098;
    r0 = r3 + -1; // 0x80841090
    *(0x38 + r31) = r0; // stw @ 0x80841094
    r3 = *(0x3c + r31); // lwz @ 0x80841098
    if (<=) goto 0x0x808410ac;
    r0 = r3 + -1; // 0x808410A4
    *(0x3c + r31) = r0; // stw @ 0x808410A8
    r3 = *(0x40 + r31); // lwz @ 0x808410AC
    if (<=) goto 0x0x808410c0;
    r0 = r3 + -1; // 0x808410B8
    *(0x40 + r31) = r0; // stw @ 0x808410BC
    r0 = *(0x14 + r1); // lwz @ 0x808410C0
    r31 = *(0xc + r1); // lwz @ 0x808410C4
    return;
}