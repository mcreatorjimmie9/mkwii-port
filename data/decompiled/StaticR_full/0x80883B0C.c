/* Function at 0x80883B0C, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80883B0C(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x1c + r1) = r31; // stw @ 0x80883B1C
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x80883B24
    r30 = r3;
    if (==) goto 0x0x80883b3c;
    if (==) goto 0x0x80883b60;
    /* b 0x80883b74 */ // 0x80883B38
    /* lis r4, 0 */ // 0x80883B3C
    r4 = r4 + 0; // 0x80883B44
    FUN_805A4400(r4, r3, r4); // bl 0x805A4400
    /* lfs f1, 0xac(r31) */ // 0x80883B4C
    r3 = r30;
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    /* b 0x80883b90 */ // 0x80883B5C
    /* lis r4, 0 */ // 0x80883B60
    /* lfs f1, 0xac(r31) */ // 0x80883B64
    r4 = r4 + 0; // 0x80883B68
    FUN_805A443C(r4, r4); // bl 0x805A443C
    /* b 0x80883b90 */ // 0x80883B70
    /* lis r5, 0 */ // 0x80883B74
    r4 = *(0 + r5); // lwzu @ 0x80883B78
    r0 = *(4 + r5); // lwz @ 0x80883B7C
    *(4 + r3) = r0; // stw @ 0x80883B80
    *(0 + r3) = r4; // stw @ 0x80883B84
    r0 = *(8 + r5); // lwz @ 0x80883B88
    *(8 + r3) = r0; // stw @ 0x80883B8C
    r0 = *(0x24 + r1); // lwz @ 0x80883B90
    r31 = *(0x1c + r1); // lwz @ 0x80883B94
    r30 = *(0x18 + r1); // lwz @ 0x80883B98
    return;
}