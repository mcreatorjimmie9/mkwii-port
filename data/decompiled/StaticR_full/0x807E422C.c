/* Function at 0x807E422C, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807E422C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x807E4234
    *(0x14 + r1) = r0; // stw @ 0x807E4238
    *(0xc + r1) = r31; // stw @ 0x807E423C
    r3 = *(0 + r3); // lwz @ 0x807E4240
    FUN_808AB934(r3); // bl 0x808AB934
    r12 = *(0 + r3); // lwz @ 0x807E4248
    r31 = r3;
    r12 = *(0x24 + r12); // lwz @ 0x807E4250
    /* mtctr r12 */ // 0x807E4254
    /* bctrl  */ // 0x807E4258
    /* clrlwi r0, r3, 0x10 */ // 0x807E425C
    if (==) goto 0x0x807e4270;
    /* li r3, 0 */ // 0x807E4268
    /* b 0x807e42a0 */ // 0x807E426C
    r0 = *(0xb0 + r31); // lwz @ 0x807E4270
    if (!=) goto 0x0x807e4284;
    /* li r3, 0 */ // 0x807E427C
    /* b 0x807e42a0 */ // 0x807E4280
    if (==) goto 0x0x807e4294;
    if (!=) goto 0x0x807e429c;
    /* li r3, 0 */ // 0x807E4294
    /* b 0x807e42a0 */ // 0x807E4298
    r3 = r31;
    r0 = *(0x14 + r1); // lwz @ 0x807E42A0
    r31 = *(0xc + r1); // lwz @ 0x807E42A4
    return;
}