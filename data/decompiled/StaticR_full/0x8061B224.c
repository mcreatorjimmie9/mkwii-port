/* Function at 0x8061B224, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8061B224(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r4, 0 */ // 0x8061B22C
    *(0xc + r1) = r31; // stw @ 0x8061B234
    *(8 + r1) = r30; // stw @ 0x8061B238
    r30 = r3;
    r3 = *(0 + r4); // lwz @ 0x8061B240
    /* li r4, 0 */ // 0x8061B244
    r3 = *(0xb70 + r3); // lwz @ 0x8061B248
    r0 = r3 + -3; // 0x8061B24C
    if (>) goto 0x0x8061b26c;
    /* li r3, 1 */ // 0x8061B258
    r0 = r3 << r0; // slw
    /* andi. r0, r0, 0xc1 */ // 0x8061B260
    if (==) goto 0x0x8061b26c;
    r4 = r3;
    if (!=) goto 0x0x8061b290;
    r3 = r30;
    FUN_8061ECC8(r4, r3); // bl 0x8061ECC8
    r31 = r3;
    r3 = r30;
    FUN_8061DFF8(r3, r3); // bl 0x8061DFF8
    r4 = *(0xa5 + r31); // lbz @ 0x8061B288
    FUN_80613128(r3); // bl 0x80613128
    r0 = *(0x14 + r1); // lwz @ 0x8061B290
    r31 = *(0xc + r1); // lwz @ 0x8061B294
    r30 = *(8 + r1); // lwz @ 0x8061B298
    return;
}