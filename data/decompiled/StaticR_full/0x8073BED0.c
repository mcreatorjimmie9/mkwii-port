/* Function at 0x8073BED0, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_8073BED0(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x8073BEE0
    r30 = r3;
    r0 = *(0x129 + r3); // lbz @ 0x8073BEE8
    if (==) goto 0x0x8073bfa4;
    r31 = *(0x250 + r3); // lwz @ 0x8073BEF4
    if (==) goto 0x0x8073c000;
    r3 = r31 + 0x74; // 0x8073BF00
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x8073bf18;
    /* li r3, 0 */ // 0x8073BF10
    /* b 0x8073bf1c */ // 0x8073BF14
    r3 = *(0xc + r3); // lwz @ 0x8073BF18
    /* li r0, 0 */ // 0x8073BF20
    if (==) goto 0x0x8073bf30;
    if (!=) goto 0x0x8073bf34;
    /* li r0, 1 */ // 0x8073BF30
}