/* Function at 0x805B35BC, size=200 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_805B35BC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r8, 0 */ // 0x805B35C8
    *(0x14 + r1) = r0; // stw @ 0x805B35CC
    *(0xc + r1) = r31; // stw @ 0x805B35D0
    r31 = r4;
    if (==) goto 0x0x805b35e8;
    if (==) goto 0x0x805b362c;
    /* b 0x805b366c */ // 0x805B35E4
    /* mulli r0, r6, 0x920 */ // 0x805B35E8
    r3 = r3 + r0; // 0x805B35EC
    r0 = *(0x1770 + r3); // lbz @ 0x805B35F0
    r4 = r3 + 0x1720; // 0x805B35F4
    if (==) goto 0x0x805b366c;
    if (!=) goto 0x0x805b3614;
    r3 = r31;
    /* li r5, 0 */ // 0x805B360C
    FUN_805B1180(r3, r5); // bl 0x805B1180
    r4 = *(4 + r31); // lwz @ 0x805B3614
    r3 = r31 + 0xc8; // 0x805B3618
    *(0xc + r31) = r4; // stw @ 0x805B361C
    FUN_805B1F90(r5, r3); // bl 0x805B1F90
    /* li r8, 1 */ // 0x805B3624
    /* b 0x805b366c */ // 0x805B3628
    /* mulli r0, r6, 0xb0 */ // 0x805B362C
    r3 = r3 + r0; // 0x805B3630
    r0 = *(0x3bf0 + r3); // lbz @ 0x805B3634
    r4 = r3 + 0x3ba0; // 0x805B3638
    if (==) goto 0x0x805b366c;
    if (!=) goto 0x0x805b3658;
    r3 = r31;
    /* li r5, 0 */ // 0x805B3650
    FUN_805B1180(r3, r5); // bl 0x805B1180
    r4 = *(4 + r31); // lwz @ 0x805B3658
    r3 = r31 + 0xc8; // 0x805B365C
    *(0xc + r31) = r4; // stw @ 0x805B3660
    FUN_805B1F90(r5, r3); // bl 0x805B1F90
    /* li r8, 1 */ // 0x805B3668
    r31 = *(0xc + r1); // lwz @ 0x805B366C
    r3 = r8;
    r0 = *(0x14 + r1); // lwz @ 0x805B3674
    return;
}