/* Function at 0x80683D54, size=284 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80683D54(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80683D64
    r30 = r3;
    r0 = *(0x14 + r3); // lbz @ 0x80683D6C
    if (==) goto 0x0x80683d80;
    /* li r0, 0 */ // 0x80683D78
    /* b 0x80683e10 */ // 0x80683D7C
    r0 = *(8 + r3); // lwz @ 0x80683D80
    if (==) goto 0x0x80683d94;
    /* li r0, 1 */ // 0x80683D8C
    /* b 0x80683e10 */ // 0x80683D90
    r0 = *(0 + r3); // lbz @ 0x80683D94
    if (==) goto 0x0x80683da8;
    /* li r0, 1 */ // 0x80683DA0
    /* b 0x80683e10 */ // 0x80683DA4
    r0 = *(1 + r3); // lbz @ 0x80683DA8
    if (==) goto 0x0x80683dbc;
    /* li r0, 1 */ // 0x80683DB4
    /* b 0x80683e10 */ // 0x80683DB8
    r0 = *(2 + r3); // lbz @ 0x80683DBC
    if (==) goto 0x0x80683dd0;
    /* li r0, 1 */ // 0x80683DC8
    /* b 0x80683e10 */ // 0x80683DCC
    r0 = *(3 + r3); // lbz @ 0x80683DD0
    if (==) goto 0x0x80683de4;
    /* li r0, 1 */ // 0x80683DDC
    /* b 0x80683e10 */ // 0x80683DE0
    r0 = *(4 + r3); // lbz @ 0x80683DE4
    if (==) goto 0x0x80683df8;
    /* li r0, 1 */ // 0x80683DF0
    /* b 0x80683e10 */ // 0x80683DF4
    r0 = *(5 + r3); // lbz @ 0x80683DF8
    if (==) goto 0x0x80683e0c;
    /* li r0, 1 */ // 0x80683E04
    /* b 0x80683e10 */ // 0x80683E08
    /* li r0, 0 */ // 0x80683E0C
    if (==) goto 0x0x80683e20;
    r3 = r30;
    FUN_80683FC4(r3); // bl 0x80683FC4
    r0 = *(0x15 + r30); // lbz @ 0x80683E20
    if (==) goto 0x0x80683e58;
    /* lis r31, 0 */ // 0x80683E2C
    /* li r4, 0x14 */ // 0x80683E30
    r3 = *(0 + r31); // lwz @ 0x80683E34
    /* li r5, 0 */ // 0x80683E38
    FUN_80698C44(r4, r5); // bl 0x80698C44
    r3 = *(0 + r31); // lwz @ 0x80683E40
    /* li r4, 0 */ // 0x80683E44
    /* li r5, 0xff */ // 0x80683E48
    FUN_80698CD0(r5, r4, r5); // bl 0x80698CD0
    /* li r0, 0 */ // 0x80683E50
    *(0x15 + r30) = r0; // stb @ 0x80683E54
    r0 = *(0x14 + r1); // lwz @ 0x80683E58
    r31 = *(0xc + r1); // lwz @ 0x80683E5C
    r30 = *(8 + r1); // lwz @ 0x80683E60
    return;
}