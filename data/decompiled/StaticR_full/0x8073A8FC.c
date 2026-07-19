/* Function at 0x8073A8FC, size=184 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8073A8FC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8073A904
    *(0xc + r1) = r31; // stw @ 0x8073A90C
    *(8 + r1) = r30; // stw @ 0x8073A910
    r30 = r3;
    r4 = *(0 + r4); // lwz @ 0x8073A918
    r0 = *(0x10 + r4); // lbz @ 0x8073A91C
    if (!=) goto 0x0x8073aa00;
    r0 = *(4 + r3); // lbz @ 0x8073A928
    if (==) goto 0x0x8073a938;
    /* b 0x8073aa00 */ // 0x8073A934
    r0 = *(7 + r3); // lbz @ 0x8073A938
    if (!=) goto 0x0x8073a988;
    r31 = *(0x240 + r3); // lwz @ 0x8073A944
    if (==) goto 0x0x8073a988;
    r12 = *(0 + r31); // lwz @ 0x8073A950
    r3 = r31;
    r12 = *(0xc + r12); // lwz @ 0x8073A958
    /* mtctr r12 */ // 0x8073A95C
    /* bctrl  */ // 0x8073A960
    r0 = *(0xb0 + r30); // lbz @ 0x8073A964
    if (==) goto 0x0x8073a988;
    r12 = *(0 + r31); // lwz @ 0x8073A970
    r3 = r31;
    r4 = r30 + 0x72c; // 0x8073A978
    r12 = *(0x70 + r12); // lwz @ 0x8073A97C
    /* mtctr r12 */ // 0x8073A980
    /* bctrl  */ // 0x8073A984
    r3 = *(0x248 + r30); // lwz @ 0x8073A988
    if (==) goto 0x0x8073aa00;
    r3 = r3 + 0x74; // 0x8073A994
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073a9ac;
    /* li r3, 0 */ // 0x8073A9A4
    /* b 0x8073a9b0 */ // 0x8073A9A8
    r3 = *(0xc + r3); // lwz @ 0x8073A9AC
}