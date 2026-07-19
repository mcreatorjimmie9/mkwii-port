/* Function at 0x80822924, size=152 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80822924(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80822934
    r30 = r3;
    r0 = *(0xc + r3); // lhz @ 0x8082293C
    r31 = r0 rlwinm 0x14; // rlwinm
    FUN_8061DC70(); // bl 0x8061DC70
    r5 = *(0x2c + r3); // lhz @ 0x80822948
    /* lis r3, -1 */ // 0x8082294C
    r4 = *(0xc + r30); // lhz @ 0x80822950
    r0 = r3 + 0xdff; // 0x80822954
    /* rlwinm. r3, r5, 0x1e, 0x1f, 0x1f */ // 0x80822958
    r0 = r4 & r0; // 0x8082295C
    *(0xc + r30) = r0; // sth @ 0x80822960
    if (==) goto 0x0x80822990;
    if (==) goto 0x0x80822980;
    /* clrlwi r0, r0, 0x10 */ // 0x80822970
    r0 = r0 | 0x1000; // 0x80822974
    *(0xc + r30) = r0; // sth @ 0x80822978
    /* b 0x808229a4 */ // 0x8082297C
    /* clrlwi r0, r0, 0x10 */ // 0x80822980
    r0 = r0 | 0x3000; // 0x80822984
    *(0xc + r30) = r0; // sth @ 0x80822988
    /* b 0x808229a4 */ // 0x8082298C
    if (==) goto 0x0x808229a4;
    /* clrlwi r0, r0, 0x10 */ // 0x80822998
    r0 = r0 | 0x4000; // 0x8082299C
    *(0xc + r30) = r0; // sth @ 0x808229A0
    r0 = *(0x14 + r1); // lwz @ 0x808229A4
    r31 = *(0xc + r1); // lwz @ 0x808229A8
    r30 = *(8 + r1); // lwz @ 0x808229AC
    return;
}