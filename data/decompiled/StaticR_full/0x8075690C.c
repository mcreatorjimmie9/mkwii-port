/* Function at 0x8075690C, size=244 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_8075690C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x80756920
    r6 = *(0x20 + r3); // lwz @ 0x80756924
    r0 = *(0x46 + r6); // lha @ 0x80756928
    r5 = *(8 + r6); // lwz @ 0x8075692C
    /* slwi r0, r0, 4 */ // 0x80756930
    r4 = r5 + r0; // 0x80756934
    r0 = *(0xe + r4); // lhz @ 0x80756938
    if (==) goto 0x0x8075695c;
    r0 = *(0x48 + r6); // lha @ 0x80756944
    /* slwi r0, r0, 4 */ // 0x80756948
    r4 = r5 + r0; // 0x8075694C
    r0 = *(0xe + r4); // lhz @ 0x80756950
    if (!=) goto 0x0x80756974;
    r0 = *(0xb4 + r3); // lhz @ 0x8075695C
    if (==) goto 0x0x80756988;
    /* li r0, 0 */ // 0x80756968
    *(0xb8 + r3) = r0; // stw @ 0x8075696C
    /* b 0x80756988 */ // 0x80756970
    r0 = *(0xb4 + r3); // lhz @ 0x80756974
    if (==) goto 0x0x80756988;
    /* li r0, 1 */ // 0x80756980
    *(0xb8 + r3) = r0; // stw @ 0x80756984
    r3 = r31;
    FUN_807578C4(r3); // bl 0x807578C4
    r0 = *(0xb8 + r31); // lwz @ 0x80756990
    if (<) goto 0x0x807569ec;
    /* li r4, -1 */ // 0x8075699C
    /* li r5, 0 */ // 0x807569A0
    *(0xb4 + r31) = r0; // sth @ 0x807569A4
    r0 = r0 rlwinm 1; // rlwinm
    r3 = *(0xc4 + r31); // lwz @ 0x807569AC
    *(0xb8 + r31) = r4; // stw @ 0x807569B0
    r4 = *(0xc8 + r31); // lwz @ 0x807569B4
    *(0xbc + r31) = r5; // stw @ 0x807569B8
    /* lhzx r0, r3, r0 */ // 0x807569BC
    /* mulli r0, r0, 0x1c */ // 0x807569C0
    r30 = r4 + r0; // 0x807569C4
    r3 = r30 + 4; // 0x807569C8
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x80756a14;
    r3 = *(0xcc + r31); // lwz @ 0x807569D8
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x80756a14 */ // 0x807569E8
    r3 = *(0xbc + r31); // lwz @ 0x807569EC
    r0 = *(0xb4 + r31); // lhz @ 0x807569F0
    r3 = r3 + 1; // 0x807569F4
    *(0xbc + r31) = r3; // stw @ 0x807569F8
    r3 = *(0xc4 + r31); // lwz @ 0x807569FC
}