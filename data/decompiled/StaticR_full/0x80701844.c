/* Function at 0x80701844, size=96 bytes */
/* Stack frame: 544 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_80701844(int r3, int r4, int r5)
{
    /* Stack frame: -544(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r5 = r4;
    *(0x21c + r1) = r31; // stw @ 0x80701858
    *(0x218 + r1) = r30; // stw @ 0x8070185C
    *(0x214 + r1) = r29; // stw @ 0x80701860
    r29 = r3;
    r3 = r3 + 0x24; // 0x80701868
    FUN_80705908(r3); // bl 0x80705908
    if (!=) goto 0x0x80701998;
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (==) goto 0x0x80701894;
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x8070199c */ // 0x80701890
    r30 = *(0x20 + r29); // lbz @ 0x80701894
    r31 = *(8 + r1); // lhz @ 0x80701898
    if (==) goto 0x0x807018e8;
}