/* Function at 0x80833C74, size=212 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_80833C74(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x80833C88
    r6 = *(0x98 + r3); // lwz @ 0x80833C8C
    r0 = *(0x160 + r3); // lwz @ 0x80833C90
    r5 = *(0 + r6); // lwz @ 0x80833C94
    r4 = *(4 + r6); // lwz @ 0x80833C98
    r0 = *(8 + r6); // lwz @ 0x80833CA0
    *(8 + r1) = r5; // stw @ 0x80833CA4
    *(0xc + r1) = r4; // stw @ 0x80833CA8
    *(0x10 + r1) = r0; // stw @ 0x80833CAC
    if (<=) goto 0x0x80833cc0;
    /* li r4, 1 */ // 0x80833CB4
    FUN_808315F4(r4); // bl 0x808315F4
    /* b 0x80833e3c */ // 0x80833CBC
    r0 = *(0x2b8 + r3); // lwz @ 0x80833CC0
    if (<) goto 0x0x80833d1c;
    /* li r5, -1 */ // 0x80833CCC
    /* li r6, 0 */ // 0x80833CD0
    *(0x2b4 + r3) = r0; // sth @ 0x80833CD4
    r0 = r0 rlwinm 1; // rlwinm
    r4 = *(0x2c4 + r3); // lwz @ 0x80833CDC
    *(0x2b8 + r3) = r5; // stw @ 0x80833CE0
    r5 = *(0x2c8 + r3); // lwz @ 0x80833CE4
    *(0x2bc + r3) = r6; // stw @ 0x80833CE8
    /* lhzx r0, r4, r0 */ // 0x80833CEC
    /* mulli r0, r0, 0x1c */ // 0x80833CF0
    r30 = r5 + r0; // 0x80833CF4
    r3 = r30 + 4; // 0x80833CF8
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80833d44;
    r3 = *(0x2cc + r31); // lwz @ 0x80833D08
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x80833d44 */ // 0x80833D18
    r4 = *(0x2bc + r3); // lwz @ 0x80833D1C
    r0 = *(0x2b4 + r3); // lhz @ 0x80833D20
    r4 = r4 + 1; // 0x80833D24
    *(0x2bc + r3) = r4; // stw @ 0x80833D28
    r4 = *(0x2c4 + r3); // lwz @ 0x80833D2C
    /* slwi r0, r0, 1 */ // 0x80833D30
    r3 = *(0x2c8 + r3); // lwz @ 0x80833D34
    /* lhzx r0, r4, r0 */ // 0x80833D38
    /* mulli r0, r0, 0x1c */ // 0x80833D3C
    r30 = r3 + r0; // 0x80833D40
    r3 = r30 + 0x10; // 0x80833D44
}