/* Function at 0x80855D84, size=172 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_80855D84(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80855D90
    r31 = r3;
    FUN_8061DFF8(); // bl 0x8061DFF8
    FUN_8060C898(); // bl 0x8060C898
    r4 = *(0 + r31); // lwz @ 0x80855DA0
    /* extsh r5, r3 */ // 0x80855DA4
    r3 = *(4 + r4); // lwz @ 0x80855DA8
    r0 = *(8 + r3); // lwz @ 0x80855DAC
    /* clrlwi. r0, r0, 0x1f */ // 0x80855DB0
    if (!=) goto 0x0x80855dd4;
    r0 = *(4 + r3); // lwz @ 0x80855DB8
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x80855DBC
    if (!=) goto 0x0x80855dd4;
    if (<=) goto 0x0x80855e08;
    if (>=) goto 0x0x80855e08;
    r0 = *(0xfa + r31); // lhz @ 0x80855DD4
    if (==) goto 0x0x80855e1c;
    r0 = *(0xb4 + r31); // lbz @ 0x80855DE0
    if (!=) goto 0x0x80855e1c;
    /* lis r4, 0 */ // 0x80855DEC
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x80855DF4
    /* li r4, 0x1a */ // 0x80855DF8
    /* li r5, 1 */ // 0x80855DFC
    FUN_80851658(r4, r3, r4, r5); // bl 0x80851658
    /* b 0x80855e1c */ // 0x80855E04
    r0 = *(0xfa + r31); // lhz @ 0x80855E08
    if (!=) goto 0x0x80855e1c;
    /* li r0, 0x29 */ // 0x80855E14
    *(0xf4 + r31) = r0; // sth @ 0x80855E18
    r0 = *(0x14 + r1); // lwz @ 0x80855E1C
    r31 = *(0xc + r1); // lwz @ 0x80855E20
    return;
}