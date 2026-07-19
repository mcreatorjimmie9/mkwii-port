/* Function at 0x808F8D14, size=172 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 2 function(s) */

int FUN_808F8D14(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r30, 0 */ // 0x808F8D28
    *(0x24 + r1) = r29; // stw @ 0x808F8D2C
    r29 = r3;
    r31 = r29;
    r3 = *(0x3fec + r31); // lwz @ 0x808F8D38
    if (==) goto 0x0x808f8d94;
    r0 = *(0x6fb + r3); // lbz @ 0x808F8D44
    if (==) goto 0x0x808f8d94;
    r0 = *(0x120 + r3); // lwz @ 0x808F8D50
    *(8 + r1) = r0; // stw @ 0x808F8D54
    r0 = *(0x124 + r3); // lwz @ 0x808F8D58
    *(0xc + r1) = r0; // stw @ 0x808F8D5C
    r0 = *(0x128 + r3); // lwz @ 0x808F8D60
    *(0x10 + r1) = r0; // stw @ 0x808F8D64
    /* lfs f0, 0x12c(r3) */ // 0x808F8D68
    /* stfs f0, 0x14(r1) */ // 0x808F8D6C
    r0 = *(0x6fa + r3); // lbz @ 0x808F8D70
    if (!=) goto 0x0x808f8da4;
    r3 = r29;
    FUN_808F8AA4(r3, r4); // bl 0x808F8AA4
    r3 = *(0x3fec + r31); // lwz @ 0x808F8D88
    FUN_808F5E08(r3, r4, r4); // bl 0x808F5E08
    r30 = r30 + 1; // 0x808F8D94
    r31 = r31 + 4; // 0x808F8D98
    if (<) goto 0x0x808f8d38;
    r0 = *(0x34 + r1); // lwz @ 0x808F8DA4
    r31 = *(0x2c + r1); // lwz @ 0x808F8DA8
    r30 = *(0x28 + r1); // lwz @ 0x808F8DAC
    r29 = *(0x24 + r1); // lwz @ 0x808F8DB0
    return;
}