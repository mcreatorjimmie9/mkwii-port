/* Function at 0x80670C3C, size=216 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 6 function(s) */

int FUN_80670C3C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80670C4C
    r30 = r3;
    r0 = *(0x180 + r3); // lwz @ 0x80670C54
    if (==) goto 0x0x80670cc4;
    r4 = *(0x174 + r3); // lwz @ 0x80670C60
    if (==) goto 0x0x80670cc4;
    r31 = *(0x178 + r3); // lwz @ 0x80670C70
    if (==) goto 0x0x80670c84;
    if (==) goto 0x0x80670c9c;
    /* b 0x80670cb0 */ // 0x80670C80
    /* lis r3, 0 */ // 0x80670C84
    r3 = *(0 + r3); // lwz @ 0x80670C88
    r3 = r3 + 0x34; // 0x80670C8C
    FUN_8067F3BC(r3, r3); // bl 0x8067F3BC
    *(0x178 + r30) = r3; // stw @ 0x80670C94
    /* b 0x80670cb0 */ // 0x80670C98
    /* lis r3, 0 */ // 0x80670C9C
    r3 = *(0 + r3); // lwz @ 0x80670CA0
    r3 = r3 + 0x34; // 0x80670CA4
    FUN_8067F3DC(r3, r3); // bl 0x8067F3DC
    *(0x178 + r30) = r3; // stw @ 0x80670CAC
    r0 = *(0x178 + r30); // lwz @ 0x80670CB0
    if (==) goto 0x0x80670cc4;
    r3 = r30;
    FUN_80670D64(r3); // bl 0x80670D64
    /* lis r3, 0 */ // 0x80670CC4
    r4 = *(0x174 + r30); // lwz @ 0x80670CC8
    r3 = *(0 + r3); // lwz @ 0x80670CCC
    r3 = r3 + 0x34; // 0x80670CD0
    FUN_8067F430(r3, r3); // bl 0x8067F430
    /* cntlzw r0, r3 */ // 0x80670CD8
    r3 = r30 + 0x98; // 0x80670CDC
    /* srwi r31, r0, 5 */ // 0x80670CE0
    /* li r4, 3 */ // 0x80670CE4
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r5, 0 */ // 0x80670CEC
    r4 = r31;
    /* lfs f1, 0(r5) */ // 0x80670CF4
    FUN_8069F59C(r4, r5, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x80670CFC
    r31 = *(0xc + r1); // lwz @ 0x80670D00
    r30 = *(8 + r1); // lwz @ 0x80670D04
    return;
}