/* Function at 0x80883CB8, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80883CB8(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x1c + r1) = r31; // stw @ 0x80883CC8
    r31 = r4;
    *(0x18 + r1) = r30; // stw @ 0x80883CD0
    r30 = r3;
    if (==) goto 0x0x80883ce8;
    if (==) goto 0x0x80883cfc;
    /* b 0x80883d20 */ // 0x80883CE4
    /* lis r4, 0 */ // 0x80883CE8
    /* lfs f1, 0xac(r31) */ // 0x80883CEC
    r4 = r4 + 0; // 0x80883CF0
    FUN_805A443C(r4, r4); // bl 0x805A443C
    /* b 0x80883d3c */ // 0x80883CF8
    /* lis r4, 0 */ // 0x80883CFC
    r4 = r4 + 0; // 0x80883D04
    FUN_805A4400(r4, r3, r4); // bl 0x805A4400
    /* lfs f1, 0xac(r31) */ // 0x80883D0C
    r3 = r30;
    FUN_805A443C(r4, r3, r4); // bl 0x805A443C
    /* b 0x80883d3c */ // 0x80883D1C
    /* lis r5, 0 */ // 0x80883D20
    r4 = *(0 + r5); // lwzu @ 0x80883D24
    r0 = *(4 + r5); // lwz @ 0x80883D28
    *(4 + r3) = r0; // stw @ 0x80883D2C
    *(0 + r3) = r4; // stw @ 0x80883D30
    r0 = *(8 + r5); // lwz @ 0x80883D34
    *(8 + r3) = r0; // stw @ 0x80883D38
    r0 = *(0x24 + r1); // lwz @ 0x80883D3C
    r31 = *(0x1c + r1); // lwz @ 0x80883D40
    r30 = *(0x18 + r1); // lwz @ 0x80883D44
    return;
}